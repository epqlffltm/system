/*
2025-01-29
파일 기술자 할당하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//Unix Standard
#include<fcntl.h>//File Control
#include<sys/types.h>//System Types
#include<sys/stat.h>//System Status

int main(void)
{
  int fd;
  
  close(0);

  fd = open("text.txt", O_RDWR);
  if(fd == -1)
  {
    perror("open");
    exit(1);
  }
  printf("fd = %d\n", fd);
  
  close(fd);

  return 0;
}