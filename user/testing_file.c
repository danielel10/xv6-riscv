#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{   
    //give father 1
    //fork
    
    int pid = fork();
    if(pid == 0) {
        exit(1,"son");
        
    }
    else {
        exit(0,"father");
    }
    exit(0,"err");
    
}
