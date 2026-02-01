/*
2026-02-01
파일 오프셋 사용하기
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(void)
{
  int fd;
  off_t static, cur;
  char buf[256];
  fd = open("data.txt", O_RDONLY);
  if (fd == -1)
  {
    perror("open");
    exit(1);
  }

  static = lseek(fd, 0, SEEK_SET);
  n = read(fd, buf, sizeof(buf) - 1);
  buf[n] = '\0';
  printf("static: %ld, data: %s\n", static, buf);
  cur = lseek(fd, 0, SEEK_CUR);
  printf("cur: %ld\n", (int)cur);

  start = lseek(fd, 10, SEEK_SET);
  n = read(fd, buf, sizeof(buf) - 1);
  buf[n] = '\0';
  printf("start: %ld, data: %s\n", start, buf);

  close(fd);
  return 0;
}