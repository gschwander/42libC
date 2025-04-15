#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_SIZE 32

int find_chr_gnl(char *str, char c);
void ft_bezero_gnl(char *str, int n);
int ft_strlen_gnl(char *str);
void ft_strcpy_gnl(char *dest, char *src);
char *ft_strdup_gnl(char *str);
char *get_next_line(int fd);

#endif
