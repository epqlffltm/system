#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(void)
{
  struct stat statbuf;

  stat("linux.txt", &statbuf);

  printf("inode = %d\n", (int)statbuf.st_ino);//파일의 inode 번호
  printf("dev = %d\n", (int)statbuf.st_dev);//파일이 위치한 장치 번호
  printf("mode = %o\n",(unsigned int)statbuf.st_mode);//파일의 유형과 접근 권한
  printf("nlink = %o\n",(unsigned int)statbuf.st_nlink);//파일에 대한 하드 링크 수
  printf("UID = %d\n", (int)statbuf.st_uid);//파일 소유자의 사용자 ID
  printf("GID = %d\n", (int)statbuf.st_gid);//파일 소유자의 그룹 ID
  printf("size = %d\n", (int)statbuf.st_size);//파일 크기(바이트 단위)
  printf("blksize = %d\n", (int)statbuf.st_blksize);//파일 시스템의 I/O 블록 크기
  printf("blocks = %d\n", (int)statbuf.st_blocks);//파일이 차지하는 블록 수

  printf("** timespec style\n");//최신 스타일
  printf("atime = %ld\n", statbuf.st_atim.tv_sec);//파일의 마지막 접근 시간
  printf("mtime = %ld\n", statbuf.st_mtim.tv_sec);//파일의 마지막 수정 시간
  printf("ctime = %ld\n", statbuf.st_ctim.tv_sec);//파일의 마지막 상태 변경 시간

  printf("** old style\n");//이전 스타일
  printf("atime = %ld\n", statbuf.st_atime);//파일의 마지막 접근 시간
  printf("mtime = %ld\n", statbuf.st_mtime);//파일의 마지막 수정 시간
  printf("ctime = %ld\n", statbuf.st_ctime);//파일의 마지막 상태 변경 시간

  return 0;
}
