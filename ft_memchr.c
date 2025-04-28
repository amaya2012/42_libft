/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:25:57 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 09:53:59 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	void			*out;
	size_t			i;

	uc_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (uc_s[i] == (unsigned char)c)
		{
			return ((void *)&uc_s[i]);
		}
		i++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "ello";

// 	printf("%s\n", (char *) ft_memchr(str, 'u', 40));
// }