/*
2025-12-08
디렉토리 생성하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>

int main(void)
{
  if(mkdir("han",0755) == -1)
  {
    perror("han");
    return 1;
  }

  return 0;
}