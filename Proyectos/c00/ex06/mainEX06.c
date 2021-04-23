#include <unistd.h>

void	ft_putchar (char x)
{
	write (1, &x, 1);
}

void	ft_selchar (int a, int b)
{
	char	c;
	char	d;

	c = ',';
	d = ' ';
	ft_putchar (48 + a / 10);
	ft_putchar (48 + a % 10);
	ft_putchar (d);
	ft_putchar (48 + b / 10);
	ft_putchar (48 + b % 10);
	if (a != 98)
	{
		ft_putchar (c);
		ft_putchar (d);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_selchar (a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
