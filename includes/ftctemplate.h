/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftctemplate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 23:01:24 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/18 23:02:05 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTCTEMPLATE_H
# define FTCTEMPLATE_H

# include <libft.h>

# include <defines.h>

typedef struct s_ftctemplate
{
	t_list		*lalloc;
}				t_ftctemplate;

/******************************************************************************\
 * ERRORS
\******************************************************************************/

void			die(void);

#endif
