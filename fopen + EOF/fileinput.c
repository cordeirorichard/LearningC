#include <stdio.h>

int main(){
	FILE *fp;
	int c;

	fp = fopen("hello.txt", "r");

	while ((c = fgetc(fp)) != EOF)
	printf("%c", c);

	fclose(fp);
}
