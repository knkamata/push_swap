/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:13:20 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 11:24:10 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# define ERRMSG "Error"
# define SIZELIMIT 1000

typedef enum e_bool
{
	FALSE,
	TRUE,
}	t_bool;

typedef enum e_exit
{
	SUCCESS,
	FAILURE,
}	t_exit;

typedef enum e_operation
{
	PA,
	PB,
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
}	t_operation;

typedef struct s_count
{
	int				pa;
	int				pb;
	int				ra;
	int				rb;
}	t_count;

typedef struct s_pivot
{
	int				small;
	int				large;
}	t_pivot;

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	struct s_node	*a;
	struct s_node	*b;
	struct s_node	*ans;
}	t_stack;

#endif
