/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 01:05:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/13 01:08:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == 32)
				i++;
			else
			{
				write(1, &av[1][i], 1);
				i++;
				if (av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == 32)
					break ;
			}
		}
	}
	write(1, "\n", 1);
}
