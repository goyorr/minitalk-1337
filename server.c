/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:17:12 by zel-kach          #+#    #+#             */
/*   Updated: 2023/01/24 22:17:15 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft/libft.h"

void	sighandler(int signal, siginfo_t *info, void *s)
{
	static pid_t	pid;
	static int		i;
	static char		c;

	s = NULL;
	if (info->si_pid != pid)
	{
		i = 0;
		c = 0;
	}
	pid = info->si_pid;
	if (signal == SIGUSR2)
		c += 128 >> i++;
	else if (signal == SIGUSR1)
		i++;
	if (i == 8)
	{
		if (!c)
			kill(pid, SIGUSR2);
		else
			write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("PID: %d\n", getpid());
	sa.sa_sigaction = sighandler;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
