/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyildiri <eyildiri@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:38:00 by eyildiri          #+#    #+#             */
/*   Updated: 2022/02/20 15:36:47 by eyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	degis;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				degis = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = degis;
			}
			i++;
		}
		size--;
	}
}
