/*
2026-02-02
파일 기술자 복사하기
*/

#include<stdil.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  int fd = 0, fd_copy = 0;

  fd = open("tam.aaa", O_CREAT | O_WRONLY, O_TRUNC);
  if (fd == -1)
  {
    perror("create tam.aaa");
    exit(1);
  }
  close(1);

  fd1 = dup(fd);
  printf("DUP FD=%d\n", fd1);
  printf("Hello, World!\n");
  close(fd);

  return 0;
}