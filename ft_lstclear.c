/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:31:22 by zamgar            #+#    #+#             */
/*   Updated: 2024/06/05 16:56:13 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (lst == 0 || del == 0)
		return ;
	new->next = *lst;
	temp->next = *lst;
	while (new->next != NULL)
	{
		del(new->content);
		free(new);
		new = new->next;
	}
	temp->next = NULL;
}
