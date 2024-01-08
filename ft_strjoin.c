/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:04:43 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/29 11:29:27 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The ft_strjoin() concatenates strings 's1' & 's2' into new string.
 * Returns the newly allocated concatenated string or NULL if allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	size_t		total_len;
	char		*res;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = (len_s1 + len_s2);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len_s1 + 1);
	ft_strlcat(res + len_s1, s2, len_s2 + 1);
	return (res);
}

/*
#include <stdio.h>
int main()
{
	char *s1 = "hello";
	char *s2 = "World!";
	char *new_s;
	
	new_s = ft_strjoin(s1, s2);

	printf("s1     =      %s\n\n", s1);
	printf("s2     =      %s\n\n", s2);
	printf("new_s  =      %s", new_s);

}
*/
