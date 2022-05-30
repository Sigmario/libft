/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_split.c                                       :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/23 13:56:31 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/25 17:37:11 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_char_count(char *s, char c, int *i)
{
	int len;

	len = 0;
	printf("Begins at s[%d] %c\n", *i, c);
	while (s[*i] && s[*i] == c)
		s++;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}
	return (len);
}

static int	ft_word_count(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		i++;
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

// char	ft_delim(char *s, char c)
// {

// }

// static char	*ft_strtok_r(char *s, const char c, char **end)
// {
// 	char	*res;

// 	if (s == NULL)
// 		s = *end;
// 	while (*s && ft_strchr(&c, *s))
// 		++s;
// 	if (*s == '\0')
// 		return (NULL);
// 	res = s;
// 	while (*s && !ft_strchr(&c, *s))
// 		++s;
// 	if (*s)
// 		*s++ = '\0';
// 	*end = s;
// 	return (res);
// }

// static char	*ft_strtok(char *s, const char c)
// {
// 	static char	*last;

// 	return (ft_strtok_r(s, c, &last));
// }

char	**ft_split(char *s, char const c)
{
	int 	index_words;
	int 	index_chars;
	int		nb_words;
	int 	nb_chars;
	char	**tab;

	nb_words = ft_word_count(s, c);
	tab = ft_calloc(sizeof(char **), (nb_words));
	index_words = 0;
	index_chars = 0;
	// printf("nb_words =  %d\n",nb_words);
	while (index_words < nb_words)
	{
		nb_chars = ft_char_count(s, c, &index_chars);
		printf("%d/%d\n", index_chars, nb_chars);
		tab[index_words] = ft_substr(s, index_chars, nb_chars);
		index_words++;
	}
	return (tab);
}

///*

int main()
{
    int		i;
	char	**ptr;
	char	*str = "----ghsaefr-dfvf---fd--ghffxdd";
    char	chr = '-';
	i = 0;
	ptr = ft_split(str, chr);
	while (ptr[i] != NULL)
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return 0;
}

//*/