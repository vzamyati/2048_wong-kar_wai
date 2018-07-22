/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pause.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 14:52:14 by vzamyati          #+#    #+#             */
/*   Updated: 2018/07/22 14:52:15 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void		pause_menu(t_data *data)
{
	int		ch;

	while (42)
	{
		check_size();
		get_clear();
		get_border();
		pause_menu_text();
		timeout(0);
		ch = getch();
		usleep(33333);
		ch == '1' ? continue_game(data) : 0;
		ch == '2' ? new_game(data) : 0;
		if (ch == 27)
		{
			endwin();
			break ;
		}
	}
	exit(0);
}

void		pause_menu_text(void)
{
	attron(COLOR_PAIR(1));
	mvprintw(C_J - 11, C_I - 21, "   #######    #####   ##         #######  ");
	mvprintw(C_J - 10, C_I - 21, "  ##     ##  ##   ##  ##    ##  ##     ## ");
	mvprintw(C_J - 9, C_I - 21, "         ## ##     ## ##    ##  ##     ## ");
	mvprintw(C_J - 8, C_I - 21, "   #######  ##     ## ##    ##   #######  ");
	mvprintw(C_J - 7, C_I - 21, "  ##        ##     ## ######### ##     ## ");
	mvprintw(C_J - 6, C_I - 21, "  ##         ##   ##        ##  ##     ## ");
	mvprintw(C_J - 5, C_I - 21, "  #########   #####         ##   #######  ");
	mvprintw(C_J, C_I - (ft_strlen("Press 1 to CONTINUE") / 2),
		"Press 1 to CONTINUE");
	attron(COLOR_PAIR(3));
	mvprintw(C_J + 3, C_I - (ft_strlen("Press 2 to NEW GAME") / 2),
		"Press 2 to NEW GAME");
	attron(COLOR_PAIR(2));
	mvprintw(C_J + 6, C_I - (ft_strlen("Press ESC to EXIT") / 2),
		"Press ESC to EXIT");
}
