/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:51:38 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:51:38 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;
	int				s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (!s1 && n == 0)
		return (0);
	if (!s2_len)
		return ((char *)(s1));
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] != '\0' && s1[i + j] == s2[j] && ((i + j) < n))
			{
				if (s2[j + 1] == '\0')
					return ((char *)(s1 + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {

//     char *searchhere = "xlrolfol";
//     char *keyword = "rolf";
//     // printf("%s\n", big);
//     printf("%s\n", ft_strnstr(searchhere, keyword, 6));
//     printf("%s\n", strnstr(searchhere, keyword,6));
//     return (0);
// }