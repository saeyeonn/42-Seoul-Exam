#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc >= 0 && argv[0])
		write(1, "0123456789\n", 11);
}
