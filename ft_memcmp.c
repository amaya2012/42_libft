/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:39:39 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 09:49:02 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;
	size_t			i;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	i = 0;
	while (uc_s1[i] && (uc_s1[i] == uc_s2[i]) && (i < n - 1))
		i++;
	return ((int)(uc_s1[i] - uc_s2[i]));
}

// #include <stdio.h>
// int	main(void)
// {
//     printf("%d\n", memcmp("Hello13546","Hello813546" , 6));
// 	printf("%d\n", ft_memcmp("Hello13546","Hello913546" , 6));

// }