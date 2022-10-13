#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
	int tab[2048] = {0};
	int *ptr;
	int loop_count;

	ptr = tab;
	loop_count = 0;
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			++(*ptr);
		else if (*str == '-')
			--(*ptr);
		else if (*str == '.')
			write(1, ptr, 1);
		else if (*str == '[' && *ptr == 0)
		{
			loop_count += 1;
			while (loop_count != 0)
			{
				str++;
				if (*str == ']')
					loop_count--;
				if (*str == '[')
					loop_count++;
			}
		}
		else if (*str == ']' && *ptr != 0)
		{
			loop_count = 1;
			while (loop_count != 0)
			{	str--;
				if (*str == '[')
					loop_count--;
				if (*str == ']')
					loop_count++;
			}
		}
		str++;
	}
}

int main()
{
   char *code1 = "+++++[>++++[>++++H>+++++i<< -]>>>++\n<<<< -]>> --------.>+++++.>.";
   char *code2 = "++++++++++[>+++++++>++++++++++>+++>+<<<< -] >++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.> +.>.";
   brainfuck(code1);
   brainfuck(code2);

   return 0;
}
