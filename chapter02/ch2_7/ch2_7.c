/*
2025-12-10
디렉토리 이동하기2
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  char *cwd;
  int fd;

  cwd = getcwd(NULL, BUFSIZ);
  printf("1. current dorectory: %s\n",cwd);

  fd = open("bit",O_RDONLY);
  fchdir(fd);

  cwd = getcwd(NULL,BUFSIZ);
  printf("2. current directory: %s\n",cwd);

  close(fd);
  free(cwd);

  return 0;
}