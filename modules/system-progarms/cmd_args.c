#include <stdio.h>
#include <string.h>
/*
	* Lec: 9 cmd_args
*/
int main( int argc, char *argv[]) {
	if(strcmp(argv[0],"./prog")==0) {
		printf("Im called with: prog\n");
	}
	if(strcmp(argv[0],"./exe")==0) {
		printf("Im called with: exe\n");
	}
	if(strcmp(argv[0],"./test")==0) {
		printf("Im called with: test\n");
	}
	return 0;
}
