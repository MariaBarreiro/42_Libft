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
#include <stdio.h>

size_t	ft_counter(const char *s, char c);
char	**ft_alloc_split(const char *s, char c);
size_t ft_count(char const *s, int *start, size_t i, char c);
void	free_split(char **split, size_t filled);
///s: String to be split;
///c: Delimiter character/substrings NOT equal to c but separated by it;
///RETURN: SUCCESS: Array of new strings resulting from the split;
///RETURN: FAILURE: Null;

char	**ft_split(char const *s, char c)
{
	int		start;
	size_t		i;
	size_t		word;
	char		**split;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	split = ft_alloc_split(s, c);
	if (!split)
		return(0);
	while (s[i])
	{
		if (s[i])
		{
			i = ft_count(s, &start, i, c);
			if (s[i] == '\0' && start == -1 )
				break ;
			split[word++] = ft_substr(s, start, (i - start));
			start = -1;
		}
	}
	split[word] = NULL;
	return (split);
}

size_t ft_count(char const *s, int *start, size_t i, char c) {
		*start = -1;
		while (s[i] == c)
			i++;
		if (s[i])
		{
			*start = i;
			while (s[i] && (s[i] != c))
				i++;
		}
	return (i);
}

char	**ft_alloc_split(const char *s, char c)
{
	char	**split;
	size_t	count;

	count = ft_counter(s, c);
	split = (char **)malloc((count + 1) * sizeof(char *));
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

void	free_split(char **split, size_t filled)
{
	size_t	i;

	i = 0;
	while (i < filled)
		free(split[i++]);
	free(split);
}

/*
#include <stdio.h>


int	main(void)
{
	const char *input = "            ";
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
}
*/
