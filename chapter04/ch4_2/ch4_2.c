/*
2026-01-29
O_EXCL플레그 사용하기
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
  fd = open("text.txt", O_CREAT | O_EXCL,0644);
  if(fd == -1)
  {
    perror("open");
    exit(1);
  }
  close(df);

  return 0;
}