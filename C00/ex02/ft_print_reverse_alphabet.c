#include <unistd.h>

void provauno(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet_reverse(void)
{
	char x;
	char y;

	x = 'a';
	y = 'z';
		while(y >= x)
		{
			provauno(y);
			y--;
		}
}

int main()
{
	ft_print_alphabet_reverse();
}
