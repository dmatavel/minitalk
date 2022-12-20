/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:36:07 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/19 22:32:55 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/include/libft.h"

void	send_msg(char *msg, int serv_pid);
void	send_signals(int n, int serv_pid);

int	main(int argc, char *argv[])
{
	int		serv_pid;

	if (argc < 2)
	{
		ft_printf("Please, insert Server's PID and a valid message.");
		exit(EXIT_FAILURE);
	}	
	serv_pid = ft_atoi(argv[1]);
	send_msg(argv[2], serv_pid);
	return (EXIT_SUCCESS);
}

void	send_msg(char *msg, int serv_pid)
{
	int	i;

	i = 0;
	while (msg[i] != '\0')
	{
		send_signals(msg[i], serv_pid);
		i++;
	}
}

void	send_signals(int n, int serv_pid)
{
	char	c;
	int		i;

	c = n;
	i = 7;
	while (i >= 0)
	{
		if (c & (1 << i))
		{
			kill(serv_pid, SIGUSR1);
			usleep(150);
		}
		else
		{
			kill(serv_pid, SIGUSR2);
			usleep(150);
		}
		i--;
	}
}
