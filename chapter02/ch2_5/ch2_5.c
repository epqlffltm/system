/*
2025-12-10
디렉토리명 변경하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>

int main(void)
{
  if(mkdir("han",0755)==-1)
  {
    perror("han");
    return 1;
  }

  if(rename("han","bit")==-1)
  {
    perror("rename");
    return 1;
  }

  return 0;
}