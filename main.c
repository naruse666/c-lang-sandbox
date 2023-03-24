#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(){
  int fd = open("./test.txt", O_RDWR);
  if (fd == -1){
    printf("open Error\n");
    return 1;
  }

  printf("%s \n", myfgets(fd));

  char buf[10];
  int rd = read(fd, buf, 9);
  if ( rd == -1){
    printf("read Error\n");
    return 1;
  }

  write(fd, "\n", 1);
  write(fd, "new", 3);
  write(STDOUT_FILENO, buf, 8);

  if (close(fd) == -1){
    printf("close Error\n");
    return 1;
  }
}