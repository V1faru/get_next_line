/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:55:32 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/25 10:40:12 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_next_word(const char *s, char c, int skip)
{
	if (skip)
		while (*s != '\0' && *s == c)
			s++;
	else
		while (*s != '\0' && *s != c)
			s++;
	return (s);
}

static int			ft_count_words(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s = ft_next_word(s, c, 1);
		if (*s != '\0')
		{
			i++;
			s = ft_next_word(s, c, 0);
		}
	}
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**fresh;
	int			i;
	const char	*next_w;

	if (!*s || !(fresh = (char**)malloc(sizeof(char*) *
										(ft_count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_next_word(s, c, 1);
		if (*s != '\0')
		{
			next_w = ft_next_word(s, c, 0);
			fresh[i] = ft_strsub(s, 0, next_w - s);
			i++;
			s = next_w;
		}
	}
	fresh[i] = 0;
	return (fresh);
}
