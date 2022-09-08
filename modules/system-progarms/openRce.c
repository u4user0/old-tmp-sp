#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main() {
/*
	*   Working code of openat
	*   int open(const char *pathname, int flags);
	*   int openat(int dirfd, const char *pathname, int flags);
*/
	int fd,fd1, fd2,fd3;
	char buffer1[15];
	char buffer2[15];
	fd = open("../imp/dummy/",O_DIRECTORY);
	fd1 = openat(fd,"crash.txt",O_RDONLY);
	read(fd1,buffer1,15);
	write(1,buffer1,15);
	printf("\nNow sleeping for 14 seconds\n");
	sleep(14);
	fd2 = openat(fd,"crash.txt",O_RDONLY);
	read(fd2,buffer2,15);
	write(1,buffer2,15);
	printf("\nNow 1second left\n");
	sleep(1);

	return 0;
}
