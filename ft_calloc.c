/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim2 <mkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:52:33 by mkim2             #+#    #+#             */
/*   Updated: 2021/05/21 12:23:07 by mkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	void *ptr;

	ptr = malloc(size * cnt);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, size * cnt);
	return (ptr);
}
