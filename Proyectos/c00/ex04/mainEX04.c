#include <unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_is_negative(int n)
{
	char	w;

	w = 'P';
	if (n < 0)
	{
		w = 'N';
	}
	write(1, &w, 1);
}

int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(10);
	ft_is_negative(-10);
	ft_is_negative(8);
	ft_is_negative(-8);
}
