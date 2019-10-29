/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:51:34 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/25 14:42:59 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fresh;

	i = 0;
	if (s)
	{
		if (!(fresh = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i])
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		return (fresh);
	}
	return (NULL);
}
