/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyildiri <eyildiri@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:45:20 by eyildiri          #+#    #+#             */
/*   Updated: 2022/02/13 17:51:12 by eyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{	
	int	xv;
	int	yv;

	yv = 1;
	while (yv <= y && x > 0)
	{
				xv = 1;
		while (xv <= x)
		{
			if ((xv != 1 && xv != x) && (yv == 1 || yv == y))
				ft_putchar('-');
			else if ((yv != 1 && yv != y) && (xv == 1 || xv == x))
				ft_putchar('|');
			else if ((xv == 1) || (xv == x) || (yv == 1) || (yv == y))
				ft_putchar ('o');
			else
				ft_putchar(' ');
				xv++;
		}
		ft_putchar('\n');
				yv++;
	}
}
