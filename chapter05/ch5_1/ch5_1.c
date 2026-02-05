/*
2026-02-04
uname()함수로 운영체제 정보 검색하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/utsname.h>

int main(void)
{
  struct utsname uts;

  if(uname(&uts) == -1)
  {
    perror("uname");
    exit(1);
  }

  printf("OS name %s\n", uts.sysname);
  printf("node name %s\n",uts.nodename);
  printf("release %s\n",uts.release);
  printf("version %s\n",uts.version);
  printf("machine %s\n", uts.machine);

  return 0;
}
