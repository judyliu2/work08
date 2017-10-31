#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
  int size;
  struct stat meta ;
  int err;
  err = stat ("stat.c", &meta);
  
  
  printf("Size of file: %d\n", (int) meta.st_size);
  printf("Mode of file: %o\n", (int) meta.st_mode);
  printf("Time of access: %s\n",ctime(&(meta.st_atime)) );
}
