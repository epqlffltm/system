/*
2025-12-06
시스템의 호출의 오류 처리하기
*/

#include<stdio.h>
#include<unistd.h>
#include<errno.h>

extern int errno;

int main(void)
{
  if(access("test.txt",F_OK)==-1)
  {
    printf("errno=%d\n",errno);
  }
}