/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:36:07 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/14 14:07:45 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

void	messenger(char *msg, int serv_pid);
void	bits(int n, int serv_pid);

int	main(int argc, char *argv[])
{
	int	serv_pid;
	char	*msg;
	int i;
	int	msg_len;
	if (argc < 2)
	{
		ft_printf("Please, insert Server's PID and a valid message.");
		return (1);
	}	
	i = 0;
	serv_pid = ft_atoi(argv[1]);
	msg = malloc(sizeof(char) * (ft_strlen(argv[2]) + 1));
	if (!msg)
		return (0);
	ft_strcpy(msg, argv[2]);
	msg_len = ft_strlen(msg);
	messenger(msg, serv_pid);
	return (0);
}

void	messenger(char *msg, int serv_pid)
{
	int	i;

	i = 0;
	while(msg[i] != '\0')
	{
		bits(msg[i], serv_pid); 
		i++;
	}
}

void	bits(int n, int serv_pid)
{
	char	c;
	int		i;

	c = n;
	i = 7;
	while(i >= 0)
	{
		if (c & (1 << i))
		{
			kill(serv_pid, SIGUSR1);
			usleep(150);
			ft_printf("1");
		}
		else
		{
			kill(serv_pid, SIGUSR2);
			usleep(150);
			ft_printf("0");
		}
		i--;
	}
}
