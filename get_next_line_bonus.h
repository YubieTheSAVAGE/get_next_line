/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudiba <aboudiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:10:19 by aboudiba          #+#    #+#             */
/*   Updated: 2023/11/20 00:26:41 by aboudiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef MAX_FD
#  define MAX_FD 1024
# endif // !MAX_FD

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif // BUFFER_SIZE

# define SIZE_MAX 18446744073709551615UL

size_t	ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		ft_strnl(char *s);
char	*get_line(char *buffer);
char	*get_rest(char *buffer, size_t line_size);
char	*get_read(int fd, char *buffer);
char	*get_next_line(int fd);

#endif // !GET_NEXT_LINE_BONUS_H