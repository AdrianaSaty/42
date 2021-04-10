#include <stdio.h>

int main(int argc, char **argv)
{
	char *commands = argv[1];

	printf("%s\n", commands);
	return (0);
}

// use command:
// gcc main.c 
// and then:
// ./a.out "hello!"