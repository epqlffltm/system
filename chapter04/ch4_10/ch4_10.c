/*
2026-02-02
remove() 함수로 파일 삭제하기
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int ret =-1;

  ret = remove("linux.txt");
  if(ret == -1)
  {
    perror("remove linux.txt");
    exit(1);
  }

  printf("linux.txt 파일이 삭제되었습니다.\n");

  return 0;
}