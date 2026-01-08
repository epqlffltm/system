#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(void)
{
  struct stat statbuf;

  stat("linux.txt", &statbuf);

  printf("inode = %d\n", (int)statbuf.st_ino);
  printf("mode = %o\n",(unsigned int)statbuf.st_mode);
  printf("nlink = %o\n",(unsigned int)statbuf.st_nlink);
  printf("UID = %d\n", (int)statbuf.st_uid);
  printf("GID = %d\n", (int)statbuf.st_gid);
  printf("size = %d\n", (int)statbuf.st_size);
  printf("blksize = %d\n", (int)statbuf.st_blksize);
  printf("blocks = %d\n", (int)statbuf.st_blocks);

  printf("** timespec style\n");
  printf("atime = %ld\n", statbuf.st_atim.tv_sec);
  printf("mtime = %ld\n", statbuf.st_mtim.tv_sec);
  printf("ctime = %ld\n", statbuf.st_ctim.tv_sec);

  print("** old style\n");
  printf("atime = %ld\n", statbuf.st_atime);
  printf("mtime = %ld\n", statbuf.st_mtime);
  printf("ctime = %ld\n", statbuf.st_ctime);

  return 0;
}