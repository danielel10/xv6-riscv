#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int i;
    i = fork();
    if(i == 0){
        while(i < 3000){
            i = i + 1;
        }
        exit(7,"exit from child");
    }
    if(i > 0){
        int status;
        char str[32];
        wait(&status,str);
        printf("Child process exited with status %d\n", status);
        printf("%s\n", str);
    }
    else {
        // fork failed
        printf("fork() failed\n");
        exit(1,"");
    }
    
    exit(8,"exit from procedure");
}
