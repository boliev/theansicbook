// Вертикальная гистограммма
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
	 // getmax
	 int max = 0;
	 for(i=0; i<(sizeof(integers)/sizeof(int)); i++) {
	 	if(integers[i] > max) {
	 		max = integers[i];
	 	}
	 }

	 for (j=max; j>0; j--) {
	 	for(i=0; i<(sizeof(integers)/sizeof(int)); i++) {
	 		if(integers[i] >= j) {
	 			printf("\t |");
	 		} else {
	 			printf("\t");
	 		}
	 	}
	 	printf("\n");
	 }
	 for(i=0; i<(sizeof(integers)/sizeof(int)); i++) {
	 		printf("\t %d", i);
	 	}
	 printf("\t Whitespaces: %d \tEnters: %d \tChars: %d \n", whilespaces, enters, chars);
}