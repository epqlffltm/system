/*
2026-02-09
getpwuid()함수로 저장하기
*/

#include<stdio.h>
#include<pwd.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
  int passed *pw;

  pw = getpwuid*(getuid());
  printf("UID %s\n",(int)pw->pw_uid);
  printf("name = %s\n",pw->pw_name);

  return 0;
}