#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <string.h>

void date(char parsed[1000][1000]){
    int i=0;
    int j = 0;
    int o = 0;
    int s = 1;

    int flag = 0;
    char path[256] = {};
    char options[256] ={};
    while(i < 1000 && parsed[i][0]!='\n'){
        if(flag==0 && strcmp(parsed[i],"date")==0){
            flag = 1;
        }
        else if(flag==1 && parsed[i][0]=='-'){
            options[0] = '-';
            options[s] = parsed[i][1];
            ++s;
        }
        else if(flag == 1 && parsed[i][0]!='\0'){
            
            while(i < 1000 && j<256 && parsed[i][j]!='\0'){
                path[o] = parsed[i][j];
                ++j;++o;
            }
            j = 0;
        }
        ++i;
    }
    pid_t pid;
    pid = fork();
    if(pid<0){
        printf("%s\n" , "Some error occurred ");
    }
    else if(pid==0 && options[0]=='\0'){
        execl("/bin/date","date",(char *)0);
    }
    else if(pid==0 && options[0]!='\0'){
        execl("/bin/date","date",options,(char *)0);
    }
    else
    {
        wait(NULL);
    }
}