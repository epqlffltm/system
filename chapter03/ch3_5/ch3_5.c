/*
2026-01-09
ch3_5.c
상수를 이용해 파일의 접근 권한 검색하기
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(void)
{
  struct stat statbuf;

  stat("linux.txt", &statbuf);
  printf("Mode = %o\n", (unsigned int)statbuf.st_mode);

  if((statbuf.st_mode & S_IREAD) != 0)
    printf("User has read permission.\n");

  if((statbuf.st_mode & (S_IREAD >> 3)) != 0)
    printf("Group has read permission.\n");

  if((statbuf.st_mode & S_IROTH)!=0)
    printf("Others have read permission.\n");

  return 0;
}