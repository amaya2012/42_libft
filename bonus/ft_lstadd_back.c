/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:07:50 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 14:30:55 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	while (lst)
	{
		if ((*lst)->next == NULL)
		{
			(*lst)->next = new;
		}
		else
			lst = (*lst)->next;
	}
	return (NULL);
}
