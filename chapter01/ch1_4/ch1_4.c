/*
2025-12-06
perror()함수로 오류 메세지 출력하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>

int main(void)
{
  if(access("test.txt",R_OK)==-1)
  {
    perror("text.txt");
    return 1;
  }

  return 0;
}