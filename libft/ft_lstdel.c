/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:24:53 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/28 12:31:29 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *tmp;

	node = *alst;
	while (node)
	{
		tmp = node;
		ft_lstdelone(&node, del);
		node = tmp->next;
	}
	*alst = NULL;
}
