/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:48:02 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/03 19:48:02 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c >= 256)
		c = c % 256;
	while (n--)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

// int main ()
// {
//     char *str = "Hello World";
//     int c = 'o';
//     char *result = ft_memchr(str, c, 5);
// 	// it searches for the charcter until n index 
//     printf("%s\n",result);
//     return (0);
// }