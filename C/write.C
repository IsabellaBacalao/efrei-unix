#include <unistd.h>

// ssize_t write(int fildes, const void *buf, size_t nbyte);

int main(int ac, char **av){

  write(1, "Hello, world!\n", 14);

  return(0);
}
