// Горизонтальная гистограммма
#include <stdio.h>
int main(int argc, char *argv[]) {
	 char c;
	 int i = 0;
	 int j = 0;
	 int whilespaces = 0;
	 int enters = 0;
	 int chars = 0;
	 int integers[10];

	 for(i=0; i<(sizeof(integers)/sizeof(int)); i++) {
	 	integers[i]=0;
	 }
	 
	 while((c = getchar()) != 'E') {
	 	if(c == ' ') {
	 		whilespaces ++;
	 	} else if(c == '\n') {
	 		enters ++;
	 	}else if(c >= '0' && c <= '9') {
	 		integers[c-'0'] ++;
	 	} else {
	 		chars ++;
	 	}
	 }
	 for(i=0; i<(sizeof(integers)/sizeof(int)); i++) {
	 	printf("\t%d:", i);
	 	for(j=0; j<integers[i]; j++) {
	 		printf("-");
	 	}
	 	printf("\n");
	 }
	 printf("\t Whitespaces: %d \tEnters: %d \tChars: %d \n", whilespaces, enters, chars);

}