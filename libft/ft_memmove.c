/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:51:52 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/25 15:16:31 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!len || dst == src)
		return (dst);
	d = (unsigned char *)dst + (len - 1);
	s = (unsigned char *)src + (len - 1);
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
