#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc >= 2)
		argv[1][0] = 'a';
	write(1, "z\n", 2);
		
}
