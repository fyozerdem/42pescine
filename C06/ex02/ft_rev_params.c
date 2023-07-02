/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fozerdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:55:40 by fozerdem          #+#    #+#             */
/*   Updated: 2023/02/16 11:10:01 by fozerdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	j = 0;
	if (ac > 1)
	{
		while (i >= 1)
		{
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
