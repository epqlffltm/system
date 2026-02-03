/*
2025-12-06
strerror()함수로 오류 메세지 출력하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<errno.h>

extern int errno;

int main(void)
{
  char *err;

  if(access("text.txt",R_OK)==-1)
  {
    err=strerror(errno);
    printf("error: %s(text.tet)\n",err);
    return 1;
  }

  return 0;
}