/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzanchi <tzanchi@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:25:52 by tzanchi           #+#    #+#             */
/*   Updated: 2023/05/10 13:45:41 by tzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (start == NULL)
	{
		ft_lstclear(&start, del);
		return (NULL);
	}
	temp = start;
	while (lst->next)
	{
		lst = lst->next;
		ft_lstadd_back(&temp, ft_lstnew(f(lst->content)));
		if (temp->next == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (start);
}
