/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:58:44 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/12 15:43:03 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_counter(const char *s, char c);

///s: String to be split;
///c: Delimiter character/substrings NOT equal to c but separated by it;
///RETURN: SUCCESS: Array of new strings resulting from the split;
///RETURN: FAILURE: Null;

char	**ft_split(char const *s, char c)
{
	size_t		start;
	size_t		i;
	size_t		word;
	char		**split;

	start = 0;
	i = 0;
	word = 0;
	split = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[word++] = ft_substr(s, start, (i - start));
		}
	}
	split[word] = NULL;
	return (split);
}

size_t	ft_counter(const char *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word_count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word_count);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	const char *input = "  hello   world  this is 42 ";
	char delim = ' ';
	char **result = ft_split(input, delim);

	// Print each word in the result
	int i = 0;
	while (result && result[i])
	{
		printf("  [%d]: \"%s\"\n", i, result[i]);
		i++;
	}
	printf("  [%d]: NULL\n", i); // Confirm the array ends with NULL

	// Free the allocated memory
	i = 0;
	while (result && result[i])
		free(result[i++]);
	free(result);

	return 0;
}*/
