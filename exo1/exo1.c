#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){

char filename[255];

printf("Veuillez saisir le nom du fichier\n");
scanf("%[^\n]",&filename);
execlp("vim","vim",filename,NULL);

return 0;
}
