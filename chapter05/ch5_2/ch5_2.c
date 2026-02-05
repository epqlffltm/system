#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // _SC_ARG_MAX: exec 함수 호출 시 인자와 환경 변수의 최대 합계 바이트 수
    printf("ARG_MAX: %ld\n", sysconf(_SC_ARG_MAX));

    // _SC_CLK_TCK: 초당 클록 틱 수 (times 함수 등에서 사용)
    printf("CLK_TCK: %ld\n", sysconf(_SC_CLK_TCK));

    // _SC_OPEN_MAX: 프로세스가 동시에 열 수 있는 최대 파일 수
    printf("OPEN_MAX: %ld\n", sysconf(_SC_OPEN_MAX));

    // _SC_LOGIN_NAME_MAX: 로그인 이름의 최대 길이 (널 문 포함)
    printf("LOGIN_NAME_MAX: %ld\n", sysconf(_SC_LOGIN_NAME_MAX));

    return 0;
}