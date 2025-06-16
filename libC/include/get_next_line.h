/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschwand <gschwand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:04:18 by gschwand          #+#    #+#             */
/*   Updated: 2025/06/16 16:04:19 by gschwand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 32

int		find_chr_gnl(char *str, char c);
void	ft_bezero_gnl(char *str, int n);
int		ft_strlen_gnl(char *str);
void	ft_strcpy_gnl(char *dest, char *src);
char	*ft_strdup_gnl(char *str);
char	*get_next_line(int fd);

#endif
