#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <string.h> 

void ls1(char input[1000]){
	char comm[256] = {};
	int i=0;
	int j=1;
	int flag = 0;
	comm[0] = '-';
	while(i < 1000 && input[i]!='\0' && input[i]!='\n'){
		if(flag == 0 && input[i]=='l' && input[i+1] == 's'){
			flag = 1;

		}
		else if(flag == 1  ){
			if(input[i+1]!='\n' && input[i+1]!=' ' && input[i+1]!='-'){
			comm[j] = input[i+1];
			++j;
			}
		}
		else;
		++i;
	}
	pid_t pid;
	pid = fork();
	if(pid<0){
		printf("%s\n", "Some error occurred");
	}
	
	else if(pid==0 && comm[1]!='\0'){
		execl("/bin/ls","ls",comm,(char *)0);
	}
	else if(pid==0 && comm[1]=='\0'){
		execl("/bin/ls","ls",(char *)0);
	}
	else{
		wait(NULL);
	}
}