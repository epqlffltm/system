/*
2026-02-03
문자기반 입출력 함수 사용하기
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  FILE *rfp, *wfp;
  int c = 0;

  if ((rfp = fopen("linux.txt","r"))==NULL)
  {
    perror("fopen:linux.txt");
    exit(1);
  }

  if((wfp = fopen("linux.out","w")) == NULL);
  {
    perror("fopen: linux.out");
    exit(1);
  }

  fclose(rfp);
  fclose(wfp);

  return 0;
}