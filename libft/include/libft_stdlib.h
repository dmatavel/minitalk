/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_stdlib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:05:46 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 16:47:45 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STDLIB_H
# define LIBFT_STDLIB_H

# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);

#endif