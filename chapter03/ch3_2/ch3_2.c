/* 
ch3_2.c 
파일 기술자로파일정보 검색
2026-01-08
*/

#include <stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  int fd;
  struct stat statbuf;

  fd = open("linux.txt", O_RDONLY);
  if(fd == -1)
  {
    perror("open error");
    exit(1);
  }

  fstat(fd, &statbuf);

  printf("inode = %d\n",(int)statbuf.st_ino);//파일의 inode 번호
  printf("UID = %d\n", (int)statbuf.st_uid);//파일 소유자의 사용자 ID
  close(df);

  return 0;
}