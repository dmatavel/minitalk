/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:36:07 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/14 10:14:55 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

int	main(int argc, char *argv[])
{
	int	server_pid;
	int r = 0;
	
	server_pid = ft_atoi(argv[1]);
	ft_printf("server pid: %d\n", server_pid);
	if (argc == 2)
	{
		r = kill(server_pid, SIGUSR1);
		ft_printf("kill return: %d\n", r);
	}
	return (0);
}
