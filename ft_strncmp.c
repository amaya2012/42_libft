/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:11:14 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 12:29:04 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	//printf("%d\n", ft_strncmp("test1", "test", 5));
// 	printf("%d\n", strncmp("test1", "test", 5));
// }