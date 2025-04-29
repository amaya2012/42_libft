/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:33:28 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/29 12:12:43 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

static t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return ;
}

static void	ft_lstclear(t_list **lst, void (*del)(void *))
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_dup;
	t_list	*new;

	lst_dup = NULL;
	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst_dup, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_dup, new);
		lst = lst->next;
	}
	return (lst_dup);
}
