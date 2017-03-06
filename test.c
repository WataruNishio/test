#include <stdio.h>

int main(int argc, char *args[]){
	char str[] = "Hello, world!\n";
	
	printf("str: %.*s", 3, str);
	return 0;
}