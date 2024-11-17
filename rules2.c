/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:19:38 by mramazzo          #+#    #+#             */
/*   Updated: 2024/11/17 18:26:34 by mramazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int     check_double(int tab[4][4], int pos, int num)
{
        int     i;

        i = -1;
        while (++i < pos / 4)
                if (tab[i][pos % 4] == num)
                        return (1);
        i = -1;
        while (++i < pos % 4)
                if (tab[pos / 4][i] == num)
                        return (1);
        return (0);
}

int     check_case(int tab[4][4], int pos, int entry[16])
{
        if (check_row_left(tab, pos, entry) == 1)
                return (1);
        if (check_row_right(tab, pos, entry) == 1)
                return (1);
        if (check_col_down(tab, pos, entry) == 1)
                return (1);
        if (check_col_up(tab, pos, entry) == 1)
                return (1);
        return (0);
}
