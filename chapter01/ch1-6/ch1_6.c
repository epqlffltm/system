/*
2025-12-08
명렬행 인자 출력하기
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
  printf("argc=%d\n",argc);

  for(int i=0;i<argc;i++)
  {
    printf("argv[%d]=%s\n",i,argv[i]);
  }

  return 0;
}