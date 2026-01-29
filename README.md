# 리눅스/유닉스 시스템 프로그래밍 공부

### 이 저장소는 한빛아카데미 <시스템 프로그래밍: 리눅스 & 유닉스(이종원 저)>를 학습하며 작성한 코드와 분석 내용을 담고 있습니다. 단순히 예제를 타이핑하는 것에 그치지 않고, 시스템의 동작 원리를 이해하고 문서화하는 것을 목표로 합니다.

## 개발 및 실행 환경
학습의 효율성을 위해 로컬 개발 환경과 실행 환경을 분리하여 구성하였습니다.

* Development: Windows 10/11 (VS Code)

* Deployment: Raspberry Pi (Ubuntu)

* Connection: Git & SSH (Remote Development)


## 빌드 및 실행 방법
프로그램의 구성에 따라 두 가지 방식으로 빌드할 수 있습니다.

1. 개별 컴파일 (Chapter 1.1 ~ 1.2)
별도의 Makefile이 없는 초기 예제는 gcc를 통해 직접 컴파일합니다.
```
gcc -o ch1_1 ch1_1.c
./ch1_1
```

2. Makefile 활용 (Chapter 1.3 이후)
프로젝트 구조가 복잡해지는 1.3 장부터는 make 도구를 사용하여 효율적으로 관리합니다.
<details>

<summary>## chapter01 - 리눅스/유닉스 시스템 프로그래밍의 이해</summary>

```ch1_1.c
#include<stdio.h>
#include<unistd.h>
#include<errno.h>

extern int errno;

int main(void)
{
  if(access("test.txt",F_OK)==-1)
  {
    printf("errno=%d\n",errno);
  }
}
```

access()함수의 return값을 받아 -1이면 오류가 발생한 것이니 errno를 출력한다.
그리고 이 코드를 출력하면 2가 반환될 것이다.
이것을 의미하는 것을 알기위해서는 헤더파일을 알아봐야 한다.
asm-generic/errno-base.h에서는
```
vim /usr/include/asm-generic/errno-base.h
```
를 입력해보자
그럼 #define ENOENT           2      /* No such file or directory */를 찾을 수 있다.
이것은 test.txt가 없다는 의미다.

비슷하게
```ch1_2.c
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

extern int errno;

int main(void)
{
  FILE *fp;

  if((fp=fopen("test.txt","r"))==NULL)
  {
    printf("erron=%d\n",errno);
    return 1;
  }
  fclose(fp);
  
  return 0;
}
```
에서도 errno=2를 출력할 것이다.
test.txt가 없기 떄문이다.

</summary>
</details>


# 공지 및 출처
본 코드는 이종원 저자의 <시스템 프로그래밍 리눅스 & 유닉스> 서적을 기반으로 학습 목적으로 작성되었습니다.

모든 코드는 직접 수기로 작성(Hands-on)하였으며, 코드의 동작 원리에 대한 해석을 포함하고 있습니다.

학습용 코드이므로 실제 운영 환경에서의 사용에는 주의가 필요합니다.
