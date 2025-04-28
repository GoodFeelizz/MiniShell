/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <togomez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:15:19 by togomez           #+#    #+#             */
/*   Updated: 2025/04/28 09:33:25 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPAND_H
# define EXPAND_H

# include <stdbool.h>
# include "minishell.h"

typedef struct s_minishell	t_minishell;

typedef struct s_env
{
	char			*name;
	char			*val;
	struct s_env	*next;
}				t_env;

t_env		*env_new(char	*var_name, char	*var_val);
t_env		*env_last(t_env *lst);
void		env_add_back(t_env **lst, t_env *new);
void		env_clear(t_env *lst);
int			env_size(t_env *env);

#endif
