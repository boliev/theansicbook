#include <stdio.h>

void char_del(char a[], char b[]);

int main(int argc, char *argv[]) {
	char_del(argv[1], argv[2]);
	return 0;
}

void char_del(char a[], char b[]) {
	int i = 0;
	int j = 0;
	int len;
	len = (sizeof(&b)/sizeof(char));
	char newstr[100];
	while(b[i] != '\0') {
		if(b[i] != a[0]) {
			newstr[j] = b[i];
			j++;
		}
		i++;
	}

	printf("%s\n%s\n%s\n", a, b, newstr);
}