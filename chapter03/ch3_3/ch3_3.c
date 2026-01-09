/* 
ch3_3.c 
상수를 이용해 파일 종류 검색하기
2026-01-09
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(void)
{
  struct stat statbuf;
  int kind;

  stat("linux.txt", &statbuf);

  printf("mode = %o\n",(unsigned int)statbuf.st_mode);//파일의 유형과 접근 권한
  kind = statbuf.st_mode & S_IFMT;//파일 종류 마스크
  printf("kind = %o\n", kind);

  switch (kind)
  {
    case S_IFLNK:
      printf("This is a symbolic link file.\n");
      break;
    case S_IFDIR:
      printf("This is a directory file.\n");
      break;
    case S_IFREG:
      printf("This is a regular file.\n");
      break;
    default:
      printf("Unknown file type.\n");
      break;
  }

  return 0;
}