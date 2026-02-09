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
  struct passwd *pw;

  pw = getpwuid(getuid());
  if(pw == NULL)
  {
	  perror("getpwuid 호툴 실패");
  }
  printf("UID %d\n",(unsigned int)pw->pw_uid);
  printf("name = %s\n",pw->pw_name);
  printf("home dir = %s\n",pw->pw_dir);

  return 0;
}
