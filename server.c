/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:20:54 by szerisen          #+#    #+#             */
/*   Updated: 2023/02/24 20:06:16 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void	act(int sig, siginfo_t *container, void *ucontext)
{
	static int				i = 0;
	static pid_t			cprocessid = 0;
	static unsigned char	a = 0;

	(void)ucontext;
	if (!cprocessid)
		cprocessid = container->si_pid;
	a |= (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!a)
		{
			kill(cprocessid, SIGUSR2);
			cprocessid = 0;
			return ;
		}
		ft_putchar_fd(a, 1);
		a = 0;
		kill(cprocessid, SIGUSR1);
	}
	else
		a <<= 1;
}

int	main(void)
{
	struct sigaction	sa;

	ft_putstr_fd("Server Process Identification: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	sa.sa_sigaction = act;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, 0);
	sigaction(SIGUSR2, &sa, 0);
	while (1)
		pause();
	return (0);
}
