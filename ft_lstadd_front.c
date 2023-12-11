/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:10:00 by mhild             #+#    #+#             */
/*   Updated: 2022/12/31 16:20:52 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1st : add the new pointer to the beginning of linked list
// 2nd : move the starting pointer of the list to the new node at the beginning

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	new->next = *lst;
	*lst = new;
}
