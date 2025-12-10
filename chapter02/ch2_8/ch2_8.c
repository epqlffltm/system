/*
2025-12-10
디렉토리 내용 읽기
*/

#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(void)
{
  DIR *dp;
  struct dirent *dent;

  dp = opendir(".");

  while((dent = readdir(dp)))
  {
    printf("name: %s",dent->d_name);
    printf("Inodo : %d\n",(int)dent->d_ino);
  }

  closedir(dp);

  return 0;
}