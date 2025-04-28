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
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (src[i] && i < (siz - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (siz > 0)
		dst[i] = '\0';
	return (src_len);
}

// if (siz > 0) necessaire sinon si siz=0 renvoie chaine vide au lieu de dst
// #include <stdio.h>

// int main()
// {
//     char dst[5] = " ";
//    	//printf("%zu\n", ft_strlcpy(dst, "lalaala", 5));
// 	printf("%zu\n", strlcpy(dst, "lalaala", 5));

//     printf("%s\n", dst);
// }