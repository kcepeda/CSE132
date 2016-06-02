#include <stdio.h>
#include <stdlib.h>

int convert (char c){
int num = c;

return num-48;

}

int main(int argc, char** argv){
char  message[] = "Howdy";

int bottles = atoi(argv[1]);

char bottlesong [] = "%i bottles of beer on the wall, %i bottles of beer, \n take one down, pass it around, %i bottles of beer on the wall.";
char final [] = "We're all out man...";

int i = bottles;
for (i; i>0; i=i-1){
printf(bottlesong,i,i,i);

}

printf(final);
}