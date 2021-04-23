#include <unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_print_numbers(void)
{
	char	w;

	w = '0';
	while (w <= '9')
	{
		write(1, &w, 1);
		w++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
