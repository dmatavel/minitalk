/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:26 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/10 15:58:01 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"

void	handler(int signum);

int	main(void)
{
	pid_t	process_id;

	process_id = getpid();
	ft_printf("%d\n", process_id);
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (EXIT_SUCCESS);
}

void	handler(int signum)
{
	static int	i;
	static char	c;

	if (i < 8)
	{
		c = c << 1;
		if (signum == SIGUSR1)
			c = c | 1;
		i++;
		if (i == 8)
		{
			ft_printf("%c", c);
			i = 0;
		}
	}
}
