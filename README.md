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

### 오류 처리 방법

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


### makefile과 make
대부분의 프로그램들은 다양한 소스 파일 여러개로 이뤄지고, 컴파일할떄, 이것을 하나로 묶어서 사용한다.
하지만 기존의 gcc로는 이것을 일일히 치기 어렵거니와 하나라도 뺴먹으면 컴파일 오류가 생기기에 쓰기가 힘들다.
이 문제를 해결하기 위해 여러개의 c파일들을 링크해 하나의 실행파일로 만들어 사용하는 도구로 makefile을 사용한다.

makefile은 컴파일 명령, 사용소스, 링크할 파일, 실행 명령등을 설정하는 파일로, make명령어는 ,makefile을 읽고 지정한 대로 컴파일을 실행한다.
만약 새로운 c파일이 추가되거나 코드가 수정되어도 makefile만 수정해서 재컴파일 하니 편리하다는 장점이 있다.

```main.c
#include<stdio.h>

extern int addnum(int a, int b);//외부파일에 정의돤 addnum의 사용을 선언한다.

int main(void)
{
  int sum = 0;

  sum = addnum(1,5);//addnum을 호출한다.
  printf("sum = %d\n",sum);

  return 0;
}
```

```addnum.c
int addnum(int a, int b)
{
  int sum = 0;

  for(int i = a; i <= b; i++)
  {
    sum += i;
  }

  return sum;
}
```

```Makefile
#Makefile

CC=gcc #컴파일러를 gcc로 지정
CFLAGS= #컴파일 옵션이 필요할때 지정
OBJS=main.o addnum.o #생성될 오브젝트 파일명 지정
LIBS= #기본 라이브러리외, 다른 라이브러리가 필요하면 지정
all : add.out #생성될 파일명을 지정

add.out : $(OBJS) #add.out이 어떻게 생성될지 지정
	$(CC) $(CFLAGS) -o add.out $(OBJS) $(LIBS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c
addnum.o : addnum.c
	$(CC) $(CFLAGS) -c addnum.c

clean:
	rm -f $(OBJS) add.out  core
```

make파일은 c파일을 컴파일해 오브젝트 파일을 만들고, 이를 다시 -o옵션을 사용해 링크하고 실행파일을 만들고 있음을 알수 있다.

</summary>
</details>


# 공지 및 출처
본 코드는 이종원 저자의 <시스템 프로그래밍 리눅스 & 유닉스> 서적을 기반으로 학습 목적으로 작성되었습니다.

모든 코드는 직접 수기로 작성(Hands-on)하였으며, 코드의 동작 원리에 대한 해석을 포함하고 있습니다.

학습용 코드이므로 실제 운영 환경에서의 사용에는 주의가 필요합니다.
