/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:22:04 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/25 14:43:08 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			fresh[i] = f(s[i]);
			i++;
		}
		return (fresh);
	}
	return (NULL);
}
