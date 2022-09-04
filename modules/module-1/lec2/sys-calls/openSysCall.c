#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main() {
	int n,fd,fd1;
	char buff[10];
// open return File Descriptor of file
// and we are opening it in Read mode only
	fd = open("file",O_RDONLY);
// n is: nunber of bytes we are reading
	n = read(fd,buff,10);
	printf("%d", n,"\n");
// create this ddd file if not exists
// we are opening it in write mode, for writing
// last is Permission's
	fd1 = open("exe",O_CREAT|O_RDWR,0700);
	write(fd1,buff,n);
	return 0;
}
