/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:03:45 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/24 14:10:20 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	len_s;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	len_s = ft_strlen(s);
	while (len_s--)
	{
		if (s1[len_s] == c)
			return (&s1[len_s]);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "Hello1354e6";
// 	printf("%s\n", ft_strrchr(str, '\0'));
// }