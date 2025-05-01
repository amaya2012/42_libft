/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:59:51 by amweyer           #+#    #+#             */
/*   Updated: 2025/05/01 18:05:37 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_nb_strs(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || c == s[i - 1]))
			nb++;
		i++;
	}
	return (nb);
}

static int	get_len_str(char const *s, char c, int start)
{
	int	len;

	len = start;
	while ((s[len] != c) && (s[len] != '\0'))
		len++;
	return (len - start);
}

static int	fill_array(char const *s, char c, char **array, int strs, int i)
{
	int	j;
	int	len_str;

	j = 0;
	len_str = get_len_str(s, c, i) + 1;
	array[strs] = malloc((len_str + 1) * sizeof(char));
	if (!array[strs])
	{
	}
	ft_strlcpy(array[strs], &s[i], len_str + 1);
	return (len_str);
}

static void	free_array(char **array, int strs)
{
	int	j;

	j = 0;
	while (j < strs)
		free(array[j++]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		nb_strs;
	int		i;
	int		strs;

	if (!s)
		return (NULL);
	strs = 0;
	i = 0;
	nb_strs = get_nb_strs(s, c);
	array = malloc((nb_strs + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			i += fill_array(s, c, array, strs, i);
			strs++;
		}
		else
			i++;
	}
	array[nb_strs] = NULL;
	return (array);
}

void	visualize_split(char **split_result)
{
	int	i;

	i = 0;
	if (split_result == NULL)
	{
		printf("Erreur: Split échoué\n");
		return ;
	}
	while (split_result[i] != NULL)
	{
		printf("Mot %d: %s\n", i + 1, split_result[i]);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", get_nb_strs(" ceci   re     est     un test   ", ' '));
	printf("%d\n", get_len_str("ceci re     est     un test   ", ' ', 6));
	visualize_split(ft_split("    ce  ci re     est     un test   ", ' '));
	visualize_split(ft_split("", ' '));
	visualize_split(ft_split("                                ", ' '));
}