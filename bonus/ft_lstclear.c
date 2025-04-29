/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:02:23 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/29 13:51:15 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_current;
	t_list	*tmp_next;

	if (!lst || !*lst || !del)
		return ;
	tmp_current = *lst;
	while (tmp_current)
	{
		tmp_next = tmp_current->next;
		del(tmp_current->content);
		free(tmp_current);
		tmp_current = tmp_next;
	}
	*lst = NULL;
}
