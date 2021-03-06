/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:56:08 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 15:18:14 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	lstadd_back(t_node *sentinel, t_node *new)
{
	if (!sentinel || !new)
		return ;
	new->prev = sentinel->prev;
	sentinel->prev->next = new;
	new->next = sentinel;
	sentinel->prev = new;
}

void	lstadd_front(t_node *sentinel, t_node *new)
{
	if (!sentinel || !new)
		return ;
	new->next = sentinel->next;
	sentinel->next->prev = new;
	new->prev = sentinel;
	sentinel->next = new;
}
