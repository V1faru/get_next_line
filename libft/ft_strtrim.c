/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:31:18 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/24 17:32:02 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	size_t	i;
	size_t	index_end;

	i = 0;
	index_end = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (i < index_end && (s[index_end] == ' ' || s[index_end] == '\n' ||
							s[index_end] == '\t'))
		index_end--;
	index_end++;
	if (i == index_end)
		fresh = ft_strnew(1);
	if (!(fresh = ft_strsub(s, (unsigned int)i, index_end - i)))
		return (NULL);
	return (fresh);
}
