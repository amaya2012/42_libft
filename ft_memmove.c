/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:57:50 by amweyer           #+#    #+#             */
/*   Updated: 2025/04/29 13:47:46 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char		*d;
	const char	*s;

	if (!destination || !source)
		return (NULL);
	d = (char *)destination;
	s = (const char *)source;
	if (d < s)
	{
		while (size--)
			*(d++) = *(s++);
	}
	else
	{
		d += size;
		s += size;
		while (size--)
			*(--d) = *(--s);
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
