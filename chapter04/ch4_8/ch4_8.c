/*
2026-02-02
dup2() 함수로 파일 기술자 복사하기
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  int fd = -1;//유효하지 않는 파일 기술자 값으로 초기화, 0은 표준 입력 장치로 잘못된 값

  fd = open("tam.txt", O_CREAT | O_WRONLY, O_TRUNC, 0644);
  if (fd == -1)
  {
    perror("create tam.txt");
    exit(1);
  }

  if(dup2(fd, STDOUT_FILENO) == -1)
  {
    perror("dup2");
    close(fd);
    exit(1);
  }
  printf("DUP2 FD=%d\n", fd);

  close(fd);

  return 0;
}