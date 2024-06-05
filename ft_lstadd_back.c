/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:20:02 by zamgar            #+#    #+#             */
/*   Updated: 2024/06/05 17:17:41 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	temp->next = *lst;
	//*lst = temp;
	while (temp->next != NULL)
		temp = temp->next;
	*lst = temp->next;
	new->next = *lst;
	*lst = new;
}
