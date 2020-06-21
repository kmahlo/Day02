#include <unistd.h>

void	ft_putchar(int d)

{
	write(1, &d, 1);
}

void 	ft_print_numbers()

{
	int i;
	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_numbers();
		return(0);
}
