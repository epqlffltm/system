/*
2025-12-08
getopt()함수로 옵션 처리하기
*/

#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
  int i=0;
  extern char *optarg;
  extern int optind;

  printf("current optind : %d\n", optind);
  while((i = getopt(argc, argv, "abc"))!=-1)
  {
    switch(i)
    {
      case 'a':
        printf("Option : a\n");
        break;
      case 'b':
        printf("Option : b\n");
        break;
      case 'c':
        printf("Option : c\n");
        break;
    }
    printf("next optind: %d\n",optind);
  }

  return 0;
}