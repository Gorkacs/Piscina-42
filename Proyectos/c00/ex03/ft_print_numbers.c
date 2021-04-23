#include <unistd.h>

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
