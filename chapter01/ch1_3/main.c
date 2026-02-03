/*
2025-12-06
make 명령 사용하기
*/

#include<stdio.h>

extern int addnum(int a, int b);

int main(void)
{
  int sum = 0;

  sum = addnum(1,5);
  printf("sum = %d\n",sum);

  return 0;
}