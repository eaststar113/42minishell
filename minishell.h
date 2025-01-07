/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikim2 <yikim2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:22:57 by yikim2            #+#    #+#             */
/*   Updated: 2025/01/04 17:40:36 by yikim2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <signal.h>
# include <stdio.h>
# include <readline/readline.h>
# include <unistd.h>
# include <stdlib.h>

# define M_REDIRECT 1
# define M_PIPE 2
# define M_WORD 3

typedef struct c_token{
    int     type; //word,pipe,redirection
    char    str;
} c_token;

typedef struct m_list{
    c_token content;
    m_list *next;
} m_list;


void	sigint_handler(int sig);
void	set_signal();

#endif