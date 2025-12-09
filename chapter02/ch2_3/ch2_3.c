/*
2025-12-09
핸제 디렉토리 위치 검사하기1
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
  char *cwd;
  char wd1[BUFSIZ];
  char wd2[10];

  getcwd(wd1, BUFSIZ);
  printf("wd1 = %s\n",wd1);

  cwd = getcwd(NULL, BUFSIZ);
  printf("cwd1 = %s\n",cwd);
  free(cwd);

  cwd = getcwd(NULL, 0);
  printf("cwd2");

  if(getcwd(wd2, 10)==NULL)
  {
    perror("getcwd");
    return 1;
  }

  return 0;
}