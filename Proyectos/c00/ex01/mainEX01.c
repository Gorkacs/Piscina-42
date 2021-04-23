#include <unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_print_alphabet(void)
{
	char	w;

	w = 'a';
	while (w <= 'z')
	{
		write(1, &w, 1);
		w++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
