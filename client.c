/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:17:19 by zel-kach          #+#    #+#             */
/*   Updated: 2023/01/24 22:17:20 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft/libft.h"

int	g_i;

void	handler(int sig)
{
	if (sig == SIGUSR2)
		write(1, "\x1b[32mMessage received!\n", 24);
}

int	main(int argc, char **argv)
{
	int	a;

	a = -1;
	signal(SIGUSR2, handler);
	if (argc != 3)
		return (write(1, "Bad Ps ID\n", 10), 0);
	while (g_i < ft_strlen(argv[1]))
		if (!ft_isdigit(argv[1][g_i++]))
			return (write(1, "Bad Ps ID\n", 10), 0);
	while (++a <= ft_strlen(argv[2]))
	{
		g_i = 8;
		while (--g_i > -1)
		{
			usleep(600);
			if (((argv[2][a] >> g_i) & 1) == 0)
			{
				if ((kill(ft_atoi(argv[1]), SIGUSR1)) == -1)
					return (write(1, "No Ps\n", 6), 0);
			}
			else
				kill(ft_atoi(argv[1]), SIGUSR2);
		}
	}
	return (pause(), 0);
}
