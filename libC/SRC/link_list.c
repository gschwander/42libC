/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschwand <gschwand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:26:03 by gschwand          #+#    #+#             */
/*   Updated: 2025/06/16 15:50:39 by gschwand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libC.h"

void	init_link_list(t_link_list *list)
{
	list->first_node = NULL;
	list->pf_lstadd_back = ft_lstadd_back;
	list->pf_lstadd_front = ft_lstadd_front;
	list->pf_lstclear = ft_lstclear;
	list->pf_lstiter = ft_lstiter;
	list->pf_lstsize = ft_lstsize;
	list->pf_lstlast = ft_lstlast;
}
