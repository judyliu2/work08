#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void print_size(off_t size){
  char *units[4] = {"B", "KB", "MB", "GB"};
  int count = 0;

  while(size = (size / 1000)){
    count++;
  }

  printf("Size of file: %d%s\n", (int) size, units[count]);
}

int main(){
  int err;
  struct stat meta;
  err = stat("stat.c", &meta);  
  
  printf("Size of file: %d\n", (int) meta.st_size);
  printf("Mode of file: %o\n", (int) meta.st_mode);
  printf("Time of access: %s\n",ctime(&(meta.st_atime)) );

  print_size((int) meta.st_size);


}
