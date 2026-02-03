/*
2025-12-06
라이브러리 함수의 오류 처리하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

extern int errno;

int main(void)
{
  FILE *fp;

  if((fp=fopen("test.txt","r"))==NULL)
  {
    printf("erron=%d\n",errno);
    return 1;
  }
  fclose(fp);
  
  return 0;
}