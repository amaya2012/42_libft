/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:03:14 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/24 17:31:17 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	while ((dst[i]) && (i < siz))
		i++;
	while ((src[j]) && (j + i < siz))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (i < siz)
		return (len_src + i);
	return (len_src + siz);
}

// int main()
// {
//     char dst[30], dst2[30] = "abcdefg";
//     char src[30], src2[30] = "1234567";
//     int num,num2 = 5;

//     printf("%d\n", strlcat(dst, src, num));
//     //printf("%d\n", ft_strlcat(dst2, src2, num2));
//     printf("%s\n", dst);
//     //printf("%s\n", dst2);
// }
