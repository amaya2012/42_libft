/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:54:52 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 14:33:05 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_lstsize(t_list *lst)
{
	int nb;

	nb = 0;
	while (lst)
	{
		nb++;
		lst = lst->next;
	}
	return (nb);
}
