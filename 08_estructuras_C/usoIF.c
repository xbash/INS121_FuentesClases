#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
int i;
    for(i=0; i<argc; i++){
        printf("arg %d :  %s\n",i,argv[i]);
    }
    return 0;
    //Return EXIT_SUCESS;
}
