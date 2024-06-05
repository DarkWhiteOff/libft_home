/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:41:05 by zamgar            #+#    #+#             */
/*   Updated: 2024/06/05 17:14:26 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int	i;
	t_list	*newlst;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	newlst = (t_list *)malloc(sizeof(t_list) * i);
	if (newlst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		newlst->content = f(lst->content);
		lst = lst->next;
		newlst = newlst->next;
	}
	newlst->next = NULL;
	return (newlst);
}
