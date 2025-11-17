/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumbert <mhumbert@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:37:28 by mhumbert          #+#    #+#             */
/*   Updated: 2025/11/17 16:25:15 by mhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lsnew(void *content)
{
	*new;

	new = malloc(sizeof(t_lis));
	if(!)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
}
