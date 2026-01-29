/*
2026-01-30
파일 읽기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  int fd = 0;
  char buf[10];

  cd = open("linux.txt", O_RDONLY);
  if(fd == -1)
  {
    preer("open() error");
    exit(1);
  }

  int n = read(fd, buf, sizeof(buf)-1);//문자열을은 맨 뒤에 널문자 넣어야 함
  if(n ==-1)
  {
    preer("read() error");
    exit(1);
  }

  buf[n] = '\0';//널문자 넣기
  printf("read %d bytes : %s\n", n, buf);

  close(fd);
  return 0;
}
