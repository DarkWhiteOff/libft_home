/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:34:04 by zamgar            #+#    #+#             */
/*   Updated: 2024/06/05 16:26:19 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}
