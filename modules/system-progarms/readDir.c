#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
int main(int argc, char *argv[]) {
	struct dirent *myDirFiles;
	DIR *myDirP;
	myDirP = opendir(argv[1]);
	if (myDirP) {
            while ((myDirFiles = readdir(myDirP)))
                printf("%s\n", myDirFiles->d_name);
	}
}
