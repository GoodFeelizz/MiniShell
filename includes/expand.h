/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <togomez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:15:19 by togomez           #+#    #+#             */
/*   Updated: 2025/05/21 08:10:44 by togomez          ###   ########.fr       */
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
void		heredoc_treatment(t_minishell *minishell);
void		handle_heredoc(char *s, int *fd, int *exit_s, int n_line);
void		red_treatment(t_minishell *minishell);
int			is_env(char *s);
int			env_size(t_env *env);
bool		is_delimiter(char c);
bool		is_whitspace(char c);
bool		check_heredoc_quote(t_cmd *cmd);
char		*ft_strjoin_char(char *s1, char c, bool free_data);
char		*slash_quotes(char *arg);
char		*supp_quotes(char *join);
char		*supp_dollars(char *s);
t_list		*split_in_lst(char *s);
t_list		*split_on_whitespace(char *s);
t_list		*ft_lstnew_empty(void);

#endif