#include "do_op.h"

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
	

		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);

		if (argv[2][0] == 43)
			printf("%d", num1 + num2);

		if (argv[2][0] == 45)
			printf("%d", num1 - num2);
	
		if (argv[2][0] == 42)
			printf("%d", num1 * num2);
	
		if (argv[2][0] == 47)
			printf("%d", num1 / num2);
	
		if (argv[2][0] == 37)
			printf("%d", num1 % num2);
	}
	printf("\n");
}
