/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:52:00 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 11:43:51 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!big)
		return (NULL);
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			if ((ft_strncmp(&big[i], little, len)) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	//printf("%s\n", strnstr("Hello13546", "Hello", 6));
// 	printf("%s\n", ft_strnstr("Hello13546", "lo", 1));
// }
