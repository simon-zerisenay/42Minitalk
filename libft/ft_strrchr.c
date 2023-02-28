/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:52:14 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:52:14 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c >= 256)
		c = c % 256;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)(s + i));
	while (i--)
	{
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (0);
}

// int main()
// {
//     char *s = "hello0";
//     // char c = (char)608;
// 	// char c = '\0';
// 	char c  = "e";
//     printf("%s\n", ft_strrchr(s, c));
//     printf("%s\n", strrchr(s, c));
//     return (0);
// }