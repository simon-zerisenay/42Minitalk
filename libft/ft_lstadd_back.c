/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:45:52 by szerisen          #+#    #+#             */
/*   Updated: 2023/01/05 19:45:52 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	else
		temp->next = new;
}

// int main()
// {
// 	t_list *lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		exit(1);
// 	lst->content = (char *)"15";
// 	lst->next = NULL;
// 	t_list *new = malloc(sizeof(t_list));
// 	if (new == NULL)
// 		exit(2);
// 	new->content = (char *)"16";
// 	new->next = NULL;
// 	ft_lstadd_back(&lst, new);
// 	t_list *curr = lst;
// 	while (curr)
// 	{
// 		printf("%s\n", (char *)curr->content);
// 		curr = curr->next;
// 	}
// }
