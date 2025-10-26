/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmerli <lemmerli@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:43:27 by lemmerli          #+#    #+#             */
/*   Updated: 2025/10/26 16:51:42 by lemmerli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_all(char **array, size_t count)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*ft_next_word(const char *s, size_t *i, char c)
{
	size_t	start;
	size_t	len;
	size_t	j;
	char	*word;

	while (s[*i] == c)
		(*i)++;
	if (s[*i] == '\0')
		return (NULL);
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = s[start + j];
		j++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	k;
	char	**array;

	if (!s)
		return (NULL);
	n = ft_count_words(s, c);
	array = malloc((n + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	k = 0;
	while (k < n)
	{
		array[k] = ft_next_word(s, &i, c);
		if (!array[k])
		{
			ft_free_all(array, k);
			return (NULL);
		}
		k++;
	}
	array[k] = NULL;
	return (array);
}
