#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main() {
/*
	*   Real use mkdirat, change a little bit to use this with openat
	*   int mkdir(const char *pathname, mode_t mode);
	*   int mkdirat(int dirfd, const char *pathname, mode_t mode);
	*   Working code mkdirat.

*/
	int fd1, fd2,fd3;
	fd1 = open("../imp/dummy",O_DIRECTORY);
	printf("Now sleeping for 14 seconds\n");
	sleep(14);
	printf("Now 1second left\n");
	sleep(1);
	fd2 = mkdirat(fd1,"./test",0777);
	fd3 = mkdirat(fd1,"./test4",0777);
/*
	This code was not working...
	fd1 = mkdir("../imp/dummy/test",0777);
	printf("Now sleeping for 14 seconds\n");
	sleep(14);
	printf("Now 1second left\n");
	sleep(1);
	fd2 = mkdir("../imp/dummy/test1",0777);
*/
	return 0;
}
