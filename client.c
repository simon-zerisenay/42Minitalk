/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:00:03 by szerisen          #+#    #+#             */
/*   Updated: 2023/02/24 21:38:52 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
  
#include <signal.h> 
#include <stdlib.h> 
#include <unistd.h>   
#include "libft/libft.h"  
 
static void	signal_handler(int sig) 
{
	static int	received = 0;  

	if (sig == SIGUSR1)  
		++received;
	else 
	{
		ft_putnbr_fd(received, 1); 
		ft_putchar_fd('\n', 1); 
		ft_putstr_fd("Bits received:   ", 1);
		ft_putnbr_fd(received * 8, 1); 
		ft_putchar_fd('\n', 1);    
		exit(0); 
	} 
}

static void	sendbitbybit(int pid, char *memo)
{
	int		i;
	char	a;

	while (*memo) 
	{
		i = 7;
		a = *memo++;  
		while (i >= 0) 
		{
			if (a >> i & 1) 
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1); 
			i--;
			usleep(100);
		}
	}  
	i = 8; 
	while (i--)
	{
		kill(pid, SIGUSR1); 
		usleep(100);
	} 
}

int	main(int argc, char **argv) 
{
	if (argc != 3 || !ft_strlen(argv[2]))
	{
		ft_putstr_fd("Follow this structure: [./client] pid <string>\n", 1);
		return (1);
	}	
	ft_putstr_fd("Characters Sent    : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Bits Sent          : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]) * 8, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Characters Received: ", 1); 
	signal(SIGUSR1, signal_handler); 
	signal(SIGUSR2, signal_handler);
	sendbitbybit(ft_atoi(argv[1]), argv[2]);
}
