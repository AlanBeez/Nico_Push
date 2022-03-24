#include <unistd.h>

void provauno(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char x;
	char y;

	x = 'a';
	y = 'z';

		while(x <= y)
		{
			provauno(x);
			x++;
		}
}

<<<<<<< HEAD
int main()
{
	ft_print_alphabet();
}
=======
>>>>>>> e3dca0e (C00)
