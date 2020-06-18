# Linux_Shell_Imlementation
I have implemented a linux bash shell. The code is in C. </br>

#### >>>This is my shell, use at our own risk <<<

### COMMANDS HANDLED
* **cd**
  * cd command changes your present working directory to the directory or path entered as an argument.
  * Syntax : $ cd [directory_name / directory_path]
  * Example : </br>
  
       * cd directory or cd dir1/dir2/dir3
        
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ cd try
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS/try $
              myterminal@arka:~/home/arkasarkar $ cd Desktop/CAOS/try
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS/try $
            
       * cd .. , changes to the parent directory of the current directory.
       
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS/try $ cd ..
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS $
       * cd ~, changes to the home directory
       
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS/try $ cd ~
              myterminal@arka:~/home/arkasarkar $
              
       * cd , works just like cd ~ command
       
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS/try $ cd
              myterminal@arka:~/home/arkasarkar $
          
       * cd / , changes to the root directory
       
              myterminal@arka:~/home/arkasarkar/Desktop $ cd /
              myterminal@arka:~/ $
* **echo**
* echo command is used to display line of text/string that are passed as an argument.
* Syntax : echo [option] [text]
* Example:

     * echo “[text]”
        
                myterminal@arka:~/home/arkasarkar $ echo "hello"
                hello
                myterminal@arka:~/home/arkasarkar $Arka Sarkar
                2018222
     * echo -n [text] , -n omits a new trailing line after printing the text.
     
                myterminal@arka:~/home/arkasarkar $ echo -n "hello"
                hellomyterminal@arka:~/home/arkasarkar $
                
     * echo * , displays all the files/folders
     
                myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ echo *
                a.out cat.c date.c demo1.c history.txt ls.c makefile mkdir.c rm.c try
* **history**
* Displays all the commands previously executed.
* Syntax : history [option]
* Example:
      * history
      
            myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ history
            history
            mkdir try try2 try3
            mkdir t
            ls
            mkdir
            ry
            mkdir try
            ls
            ls
            ls -l
            ls -l -h -a
            cd demo
            ls
            cd
            ls
            ........ Cont..
      
     * history - c
        * clears the history.
* **pwd**
* Displays the present working directory
* Syntax : pwd
* Example :
        * pwd
        
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ pwd
              current working directory :- /home/arkasarkar/Desktop/CAOS
* **exit**
* Exits the terminal
* Syntax : exit
* Example:

       myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ exit
* **ls**
* Ls command displays all the files / folders in the present working directory
* Syntax : ls [option]
* Example:
     * ls
        
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ ls
              a.out cat.c date.c demo1.c history.txt ls.c makefile mkdir.c rm.c try
              
     * ls -l , shows long format → all permisions, space , time modifed.
     
              myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ ls -l
              total 60
              -rwxr-xr-x 1 arkasarkar arkasarkar 17584 Sep 1 22:05 a.out
              -rw-rw-r-- 1 arkasarkar arkasarkar 1281 Sep 1 13:39 cat.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1142 Aug 30 16:08 date.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 4944 Sep 1 22:05 demo1.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1039 Sep 1 22:18 history.txt
              -rw-rw-r-- 1 arkasarkar arkasarkar 757 Aug 30 01:58 ls.c
              -rw-r--r-- 1 arkasarkar arkasarkar
              38 Aug 31 13:31 makefile
              -rw-rw-r-- 1 arkasarkar arkasarkar 1420 Aug 30 02:02 mkdir.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1144 Aug 30 16:03 rm.c
              drwxr-xr-x 2 arkasarkar arkasarkar 4096 Sep 1 21:12 try
     
     * ls -lh, formats into human readable form.
     
              total 60K
              -rwxr-xr-x 1 arkasarkar arkasarkar 18K Sep 1 22:05 a.out
              -rw-rw-r-- 1 arkasarkar arkasarkar 1.3K Sep 1 13:39 cat.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1.2K Aug 30 16:08 date.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 4.9K Sep 1 22:05 demo1.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1.2K Sep 1 22:20 history.txt
              -rw-rw-r-- 1 arkasarkar arkasarkar 757 Aug 30 01:58 ls.c
              -rw-r--r-- 1 arkasarkar arkasarkar 38 Aug 31 13:31 makefile
              -rw-rw-r-- 1 arkasarkar arkasarkar 1.4K Aug 30 02:02 mkdir.c
              -rw-rw-r-- 1 arkasarkar arkasarkar 1.2K Aug 30 16:03 rm.c
              drwxr-xr-x 2 arkasarkar arkasarkar 4.0K Sep 1 21:12 try
* **cat**
* Read content from a file and displays it.
* Syntax : cat [filename]
* Example :
  * cat [filename]
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ cat del.txt
        Hello
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $
* **date**
* Displays current date
* Syntax : date [arg]
* Example:
  * date
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ date
        Sun Sep 1 22:31:43 IST 2019
  * date -R
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ date -R
        Sun, 01 Sep 2019 22:31:54 +0530
* **rm**
* rm removes files or directories entered by the user.
* Syntax : rm [option] [filename]
* Example:
  * rm [filename]
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ rm del.txt
  * rm -r [dir_name] , deletes a directory and its contents
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ rm -r del
  * rm -f [filename] , forcefully deletes a file if write protected.

        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ rm -f del.txt
  * rm * , deletes all the files of the parent directory ( not the directories)
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ rm *
  * rm -r * , empties the parent directory
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ rm -r *
* **mkdir**
* mkdir creates an empty directory in the present working directory
* Syntax : mkdir [dir_name]
* Example :
  * mkdir [dir_name]
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ mkdir hello
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ ls
        a.out date.c hello
        ls.c
        mkdir.c try
        cat.c demo1.c history.txt makefile rm.c
  * mkdir [dir1_name] [dir2_name]
  
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ mkdir hello hello2
        myterminal@arka:~/home/arkasarkar/Desktop/CAOS $ ls
        a.out date.c hello history.txt makefile rm.c
        cat.c demo1.c hello2 ls.c
        mkdir.c try
        
### COMPILE AND RUNNING
**demo1.c** is the main file. Compile it on the terminal using **gcc  demo1.c -o main** and run the executable main as **./main** commands.  
