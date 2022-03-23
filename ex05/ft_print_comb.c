#include <unistd.h>

void provacinque(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(char x, char y, char z)
{
	provacinque(x);
	provacinque(y);
	provacinque(z);
}

void ft_print_comb()
{
	char x;
	char y;
	char z;

	x = '0';
	y = '1';
	z = '2';

	while(x <= '9')
	{
		y = x + 1;
		while(y <= '9')
		{
			z = y + 1;
			while(z <= '9')		
			{		

				ft_print_numbers(x, y, z);
				if(x != '7')

				{
					write(1, ", ", 2);
				}

				z++;
			}
			y++;
		}
		x++;
	}
	return;
}

int main()
{
	ft_print_comb();
}
