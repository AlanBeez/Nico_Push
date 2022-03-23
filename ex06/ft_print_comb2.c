#include <unistd.h>

void provasei(char c)
{
	write(1, &c, 1);
}

void ft_propriononloso(char x, char y, char a, char b)
{
	provasei(x);
	provasei(y);
	provasei(' ');
	provasei(a);
	provasei(b);
	provasei(',');
	provasei(' ');

}

void ft_print_comb2()
{
	char x;
	char y;
	char a;
	char b;
	char k;

	x = '0';
	y = '0';
	a = '0';
	b = '0';
	k = '0';
	
	x = k + 0;	
	while(x <= '9')
	{
		y = k + 0;
		while(y <= '9')
		{
			a = k + 0;
			while(a <= '9')
			{
				b = k + 0;
				while(b <= '9')
				{
				
					ft_propriononloso(x, y, a, b);
					b++;		
					
				}
				a++;
			}
			y++;
		}
		x++;
	}

}

int main()
{
	ft_print_comb2();
}




