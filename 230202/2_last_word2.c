/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_last_word2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:26:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 20:46:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i = i - 1;
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i--;
		while(av[1][i] > 33)
			i--;
		i++;
		while(av[1][i] && av[1][i] != 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
