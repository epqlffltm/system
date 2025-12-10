/*
2025-12-10
디렉토리 이동하기1
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
  char *cwd;

  cwd = getcwd(NULL, BUFSIZ);
  printf("1. current directory: %s\n",cwd);

  chdir("bit");

  cwd = getcwd(NULL, BUFSIZ);

  printf("2. current directory: %s\n",cwd);

  free(cwd);

  return 0;
}