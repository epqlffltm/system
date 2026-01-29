#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
  int rfd = 0, wfd = 0, n = 0;
  char buf[20];

  rfd = open("linux.txt", O_RDONLY);
  if(rfd == -1)
  {
    perror("open() error for read linux.txt");
    exit(1);
  }

  wfd = open("copy.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if(wfd == -1)
  {
    perror("open() error for write copy.txt");
    exit(1);
  }

  while  ((n = read(rfd, buf, sizeof(buf)))>0)
  {
    if (write(wfd, buf, n) != n)
    {
      perror("write() error");
      exit(1);
    } 
  }

  if (n == -1)
  {
    perror("read() error");
    exit(1);
  }
  
  close(rfd);
  close(wfd);

  return 0;
}
