/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:50:25 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 13:52:49 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*p;
	char	*dup;

	size = ft_strlen(s1);
	dup = (char *)malloc(size * sizeof(char) + 1);
	if (!dup)
		return (0);
	p = dup;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = '\0';
	return (dup);
}
// int	main(void)
// {
// 	char	*str = "Hello";
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }