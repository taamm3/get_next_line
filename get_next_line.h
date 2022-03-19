/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:20:50 by tapetros          #+#    #+#             */
/*   Updated: 2021/02/17 15:18:26 by tapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

int			get_next_line(int fd, char **line);
int			ft_strchr(const char *s, int c);
char		*ft_strjoin_hamzachiman(char *s1, char *s2);
size_t		ft_strlen(const char *str);
char		*vline(char *s);
char		*afterlineslife(char *s);

#endif
