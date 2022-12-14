/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/12/14 10:01:04 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

void	handler(int signum);

int	main(void)
{
	pid_t	process_id;
	
	signal(SIGUSR1, handler);
	process_id = getpid();
	ft_printf("%d\n", process_id);
	while (1)
		sleep(1);
	return (0);
}

void	handler(int signum)
{
	if (signum == SIGUSR1)
		write(STDOUT_FILENO, "Hello, world\n", 13);
}

