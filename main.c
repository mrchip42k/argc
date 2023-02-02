#include <stdio.h>

int main (int argc, char **argv)
{
	printf("Arg count: %d\n", argc - 1);

	for (int i = 1; i < argc; i++)
	{
		printf("\n(%d)\t>%s<\n", i, argv[i]);
	}
}
