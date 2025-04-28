/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:49:12 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/24 13:59:03 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s1[i] >= 0)
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "Hello13546";

// 	printf("%s\n", ft_strchr(str, '0'));
// }