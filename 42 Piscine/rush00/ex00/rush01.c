/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyildiri <eyildiri@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:04:27 by eyildiri          #+#    #+#             */
/*   Updated: 2022/02/13 18:15:23 by eyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	e;
	int	a;

	a = 1;
	while (a <= y && x > 0)
	{
	e = 1;
		while (e <= x)
		{
			if ((e == 1 && a == 1) || (e == x && a == y && e != 1 && a != 1))
				ft_putchar('/');
			else if ((e == x && a == 1) || (e == 1 && a == y))
				ft_putchar('\\');
			else if ((e == 1) || (e == x) || (a == 1) || (a == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			e++;
		}
		ft_putchar('\n');
			a++;
	}
}
