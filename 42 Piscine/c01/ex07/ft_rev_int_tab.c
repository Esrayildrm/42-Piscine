/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyildiri <eyildiri@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:30:20 by eyildiri          #+#    #+#             */
/*   Updated: 2022/02/21 14:46:08 by eyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	degis;

	i = 0;
	while (i < (size / 2))
	{
		degis = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = degis;
		i++;
	}
}
