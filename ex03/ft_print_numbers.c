#include <unistd.h>

void provadue(int c)
{
	write (1, &c, 1);
}

void ft_print_numbers(void)
{
	int x;
	int y;

	x = '0';
	y = '9';
	while(x <= y)
	{
		provadue(x);
		x++;
	}
	return;
}

int main ()
{
	ft_print_numbers();
}
