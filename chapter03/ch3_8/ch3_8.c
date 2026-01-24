#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(void)
{
  struct stat statbuf;

  stat("linux.txt", &statbuf);
  printf("before link count =%d\n",(int)statbuf.st_nlink);

  link("linux.txt","linux.ln");

  stat("linux.txt", &statbuf);
  printf("after link count =%d\n",(int)statbuf.st_nlink);

  return 0;
}