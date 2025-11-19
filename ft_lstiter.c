/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:30:57 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/19 11:18:23 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;	

	if (!lst || !f)
		return ;
	while (lst)
	{
		tmp = lst-> next;
		f(lst-> content);
		lst = tmp;
	}
}
