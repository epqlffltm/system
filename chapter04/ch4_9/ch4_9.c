/*
2026-02-02
fcnt() 함수로 파일 기술자 복사하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(void)
{
  int fd = -1, flags = 0;
  fd = open("linux.txt", O_RDWR);
  if(fd == -1)
  {
    perror("open linux.txt");
    exit(1);
  }

  if((flags = fcntl(fd, F_GETFL)) == -1)
  {
    perror("F_GETFL");
    close(fd);
    exit(1);
  }

  flags |= O_APPEND;

  if(fcntl(fd, F_SETFL, flags) == -1)
  {
    perror("F_SETFL");
    close(fd);
    exit(1);
  }

  if(write(fd, "Hello, Linux!\n", 15) != 15)
  {
    perror("write");
    close(fd);
    exit(1);
  }

  close(fd);

  return 0;
}