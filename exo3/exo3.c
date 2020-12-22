#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
    
    if(argc == 1){
        printf("Aucun argument \n");
        return 1;
    }else{
        
        for(int i=1;i<argc;i++){
        pid_t fils=fork();
        if(fils==-1){
            perror("Erreur Fork\n");
            exit(errno);
        }
        if (fils>0){
            printf("Ouvreture du fichier %s en cours\n",argv[i]);
            sleep(2);
        }else{
            char *args[]={
                "gedit",
                argv[i],
                NULL 
            };
            execvp("gedit",args);
            exit(0);
            };
        }
    }
    
    
 
   
 
return 0;
}
