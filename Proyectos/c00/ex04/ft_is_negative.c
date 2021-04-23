#include <unistd.h>

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
