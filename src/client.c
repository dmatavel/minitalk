/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:36:07 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/10 15:58:15 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

void	send_msg(char *msg, int serv_pid);
void	send_signals(int n, int serv_pid);

int	main(int argc, char *argv[])
{
	int		serv_pid;
	int		i;

	if (argc != 3)
	{
		ft_printf("Please, insert Server's PID and a valid message.\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!ft_isdigit(argv[1][i]))
		{
			ft_printf("PIDs are composed of digits only.\n");
			exit(EXIT_FAILURE);
		}
		i++;
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
