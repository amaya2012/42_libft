/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:12:00 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/24 17:31:56 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	while ((src[i]) && (i < siz))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

// #include <stdio.h>

// int main()
// {
//     char dst[5] = "test";
//     printf("%d\n", ft_strlcpy(dst, "srccd", 12));
//     printf("%s\n", dst);
// }