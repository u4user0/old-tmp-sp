#include <stdio.h>
#include <stdlib.h>
/*
	*		*
	* In Lec: 9	*
	*		*
*/
int main() {
	char * histSIZE = getenv("HISTSIZE");
	printf("histsize is: %s \n", histSIZE);
	histSIZE = getenv("HISTSIZE");
/*	************************	*/
	putenv("HISTSIZE=10");
	printf("putenv, histsize: %s \n",histSIZE);
	histSIZE = getenv("HISTSIZE");
/*	************************	*/
	setenv("HISTSIZE","50",1);
	printf("Now HISTSIZE changed: %s \n", histSIZE);
	histSIZE = getenv("HISTSIZE");
	printf("histsize is: %s \n", histSIZE);
	return 0;
}
