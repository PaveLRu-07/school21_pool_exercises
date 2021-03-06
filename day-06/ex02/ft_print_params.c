/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:44:18 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/11 13:44:19 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = *(str + i);
		if (c == '\0')
			break ;
		ft_putchar(c);
		i++;
	}
}

int		main(int argc, char const *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr((char*)(argv[i]));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
