/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:45:56 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/30 18:36:43 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*out;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ("");
	if (len > s_len - start)
		len = s_len - start;
	i = 0;
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}


// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
	

// 	printf("%s\n", ft_substr("", 0, 0));
// 	printf("-----------------------------");
// 	printf("%s\n", ft_substr("hola", 4, 0));
// 	printf("-----------------------------");

// 	printf("%s\n", ft_substr("hola", 4, 1));
// 	printf("-----------------------------");

// 	printf("%s\n", ft_substr("hola", 4, 20));
// 	printf("-----------------------------");

// 	printf("%s\n", ft_substr("hola", 5, 2));

// }