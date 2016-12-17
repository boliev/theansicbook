#include <stdio.h>

int main() {
	int step = 40;
	int start = 40;
	int end = 300;
	int i; 
	float fahr = 0;
	float cel = 0;

	for(fahr=start; fahr<=end; fahr=fahr+step) {
		cel = (fahr-32)*(5.0/9.0);
		printf("%6.2f\t%6.2f\n", fahr, cel);
	}
}