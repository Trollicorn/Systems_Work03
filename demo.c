#include <stdio.h>
#include <string.h>

int main(){

	char demo_string[10];
	char str[] = "hello";
	char str2[] = "hi";

	strcpy(demo_string, str);
	printf("%s\n", str);
	printf("%s\n", demo_string);

	strcpy(demo_string,str2);
	printf("%s\n", demo_string);

	char s3[] = "abcdefghijklmnopqrstuvwxyz";
	char s4[] = "01234567890123456789012345";

	strncpy(s3, s4, 8);
	printf("%s\n", s3);

	strncpy(s4, s3, 16);
	printf("%s\n", s4);

	return 0;
}