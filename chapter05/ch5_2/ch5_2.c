#include<stdio.h>
#include<unistd.h>

int main(void)
{
  printf("%ld\n",sysconf(_SC_ARG_MAX));
  printf("%ld\n",sysconf(_SC_CLK_TCK));
  printf("%ld\n",syscinf(_SC_OPEN_MAX));
  printf("%ld\n",syscinf(_SC_LOGIN_NAME_MAX));

  return 0;
}