/*
2025-12-10
디렉토리의 내용을 읽는 위치 파악하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(void)
{
  DIR *dp;
  struct dirent *dent;
  long loc;

  dp = opendir(".");

  printf("struct position : %ld\n", telldir(dp));
  while((dent = readdir(dp)))
  {
    printf("read:%s->",dent->d_name);
    printf("cur position: %ld\n", telldir(dp));
  }

  printf(("**move directory pointer**\n"));
  readdir(dp);
  loc = telldir(dp);
  seekdir(dp, loc);
  printf("cur position : %ld\n", telldir(dp));

  dent = readdir(dp);
  printf("read:%s\n",dent->d_name);

  closedir(dp);

  return 0;
}