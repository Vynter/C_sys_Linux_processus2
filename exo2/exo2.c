#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    if(argc == 1){
        printf("Aucun argument \n");
        return 1;
    }else if (argc<2){
        printf("Il manque un argument \n");
        return 1;     
    }else{
    char *args[]={
        "cp",
        "-rTv",
        argv[1],
        argv[2],
        NULL
    };
    
    execv("/bin/cp",args);
    };
   
    
return 0;
}
