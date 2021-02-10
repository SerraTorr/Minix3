#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>
#include<stdlib.h>

const char* s = "Hello World";

int main(){
    // processesPrint(0);
    int pid = getpid();
    for(int i=0;i<11;i++){
        if(fork()){
            sleep(1);
            exit(0);
        }
        else printf("%c %d parent : %d\n",s[i],getpid(),getppid());   
    }
    return 0;
}