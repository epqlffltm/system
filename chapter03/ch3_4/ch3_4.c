/*
ch3_4.c
메크로를 이용한 파일 종류 검색하기
2026-01-09
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(void)
{
  struct stat statbuf;
  int kint;

  stat("linux.txt", &statbuf);

  printf("mode = %o\n",(unsigned int)statbuf.st_mode);//파일의 유형과 접근 권한

  if(S_ISLNK(statbuf.st_mode))
    printf("This is a symbolic link file.\n");
  else if(S_ISDIR(statbuf.st_mode))
    printf("This is a directory file.\n");
  else if(S_ISREG(statbuf.st_mode))
    printf("This is a regular file.\n");
  else
    printf("Unknown file type.\n");

  return 0;
}