#include <stdio.h>                                                                      #include <unistd.h>

#include <stdlib.h>

#include <string.h>

int main(int argc, char *argv[]) {

        int i;                                                                                  printf("int i: %d",i);

        for(i = 1; i < argc; i++){

        write(1, argv[i], strlen(argv[i]));

                if(i + 1 < argc){

                        write(1, " ", 1);

                                                                                                        } else {

                        write(1,"\nargs done\n",11);                                                            }

                }                                                                               exit(0);

}
