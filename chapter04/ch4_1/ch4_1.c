/*
2026-01-29
새파일 생성하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unsistd.h>//Unix Standard
#include<fcntl.h>//File Contro
#include<sys/types.h>//System Types
#include<sys/stat.h>//System Status

int main(void)
{
  int fd;
  mode_t mode;

  mode =S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
  fd = open("txst.txt", O_CREAT, mode);
  if(fd == -1)
  {
    perror("open");
    exit(1);
  }
  close(fd);

  return 0;
}