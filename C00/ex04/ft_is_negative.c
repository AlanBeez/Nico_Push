#include <unistd.h>

void provaquattro(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if(n >= 0)
	{
		provaquattro('P');
	}

	if(n < 0)
	{
		provaquattro('N');
	}
}

<<<<<<< HEAD
int main()
{
	ft_is_negative(1);
}
=======
>>>>>>> e3dca0e (C00)
