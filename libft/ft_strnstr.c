/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:25:53 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/24 16:03:07 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	n_len;

	ptr = (char *)haystack;
	n_len = (size_t)ft_strlen(needle);
	if (needle[0] == '\0')
		return (ptr);
	while (*ptr && len-- >= n_len)
	{
		if (*ptr == *needle)
			if (ft_memcmp(needle, ptr, n_len) == 0)
				return ((char *)ptr);
		ptr++;
	}
	return (NULL);
}
