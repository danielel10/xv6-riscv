#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{   
    set_ps_priority(7);
    exit(0,"Goodbye World xv6");
}
