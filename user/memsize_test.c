#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  fprintf(1, "Curr proc size is:%x\n", memsize());
  void* pt = malloc(20000);
  fprintf(1, "Curr proc size is:%x\n", memsize());
  
  free(pt);
  fprintf(1, "Curr proc size is:%x\n", memsize());
  // char* str;
  //wait(ch,str)
  //print(str)
  exit(0,"");
}
