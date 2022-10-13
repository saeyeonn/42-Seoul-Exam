#include <unistd.h>

int main(int argc, char  *argv[])
{
	if (argc >= 0 && argv[0])
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
