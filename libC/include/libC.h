/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libC.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschwand <gschwand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:21:03 by gschwand          #+#    #+#             */
/*   Updated: 2025/06/16 15:51:27 by gschwand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

# include "../../libft/include/libft.h"
# include "get_next_line.h"

typedef struct s_link_list
{
	t_list	*first_node;
	void	(*pf_lstadd_back)(t_list **lst, t_list *new);
	void	(*pf_lstadd_front)(t_list **lst, t_list *new);
	void	(*pf_lstclear)(t_list **lst, void (*del)(void *));
	void	(*pf_lstiter)(t_list *lst, void (*f)(void *));
	t_list	*(*pf_lstlast)(t_list *lst);
	int		(*pf_lstsize)(t_list *lst);
}			t_link_list;

void		init_link_list(t_link_list *list);

#endif
