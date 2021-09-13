/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:32:42 by mkim2             #+#    #+#             */
/*   Updated: 2021/05/16 16:37:33 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*new;
	unsigned char	src;
	size_t			i;

	new = ptr;
	src = value;
	i = 0;
	while (i++ < num)
		*new++ = src;
	return (ptr);
}
