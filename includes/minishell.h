/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <togomez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:39:17 by togomez           #+#    #+#             */
/*   Updated: 2025/04/28 08:20:48 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft/libft.h"
# include "parsing.h"
# include "stdio.h"
# include "expand.h"

typedef struct s_minishell
{
	t_cmd	*commands;
	t_env	*envi;
	int		exit_status;
	int		n_line;
}				t_minishell;

#endif