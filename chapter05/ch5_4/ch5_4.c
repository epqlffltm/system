/*
2026-02-09
getuid(), feteuid()함수로 UID, EUID 검색하기
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
  uid_t uid = getuid(), euid = geteuid();
  char *name = getlogin();

  printf("name = %s, UID = %d, EUID = %d\n",name,(int)uid,(int)euid);

  return 0;
}
