/*
2025-12-09
현재 디렉토리 위치 검색하기
*/

#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
  char *cwd;

  cwd = get_current_dir_name();
  printf("%s\n",cwd);
  free(cwd);

  return 0;
}