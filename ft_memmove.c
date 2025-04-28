/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:57:50 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/28 11:06:09 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char		*d;
	const char	*s;
	int			s_len;

	if (!destination || !source)
		return (NULL);
	d = (char *)destination;
	s = (const char *)source;
	s_len = ft_strlen(s) - 1;
	d[s_len] = '\0';
	while (s_len >= 0 && d[s_len] && size >= 0)
	{
		d[s_len] = s[size];
		s_len--;
		size--;
	}
	return ((void *)d);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "memmove can be very useful......";
// 	memmove(str + 20, str + 15, 11);
// 	puts(str);
// 	return (0);
// }