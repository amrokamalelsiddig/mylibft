#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{	
	ft_putnbr_fd(ft_atoi(av[1]), 1);
}
