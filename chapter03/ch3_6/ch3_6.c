#include<stdio.h>
#include<unistd.h>
#include<sys/errno.h>

int main(void)
{
  int perm;

  if(access("linux.bak",F_OK)==-1 && errno==ENOENT)
    printf("File does not exist.\n");
  else
    printf("File exists.\n");

  perm=access("linux.bak",R_OK);
  if(perm == 0)
    printf("Read permission granted.\n");
  else
    printf("Read permission denied.\n");
}