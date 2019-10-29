/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:48:11 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/24 12:23:15 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ptr;
	int		n_len;

	ptr = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return (ptr);
	while (*ptr)
	{
		if (*ptr == *needle)
		{
			if (ft_strncmp(needle, ptr, n_len) == 0)
				return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
