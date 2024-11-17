/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damisura <damisura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:38:03 by damisura          #+#    #+#             */
/*   Updated: 2024/11/17 18:29:34 by mramazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check(int ac, char **av);
int		check_double(int tab[4][4], int pos, int num);
int		check_case(int tab[4][4], int pos, int entry[16]);
int		check_col_up(int tab[4][4], int pos, int entry[16]);
int		check_row_right(int tab[4][4], int pos, int entry[16]);
int		check_col_down(int tab[4][4], int pos, int entry[16]);
int		check_row_left(int tab[4][4], int pos, int entry[16]);

#endif
