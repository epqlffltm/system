/*
2025-12-09
디렉토리 삭제하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
  if(rmdir("han")==-1)
  {
    perror("han");
    return 1;
  }

  return 0;
}