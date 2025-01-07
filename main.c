/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikim2 <yikim2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:06:38 by yikim2            #+#    #+#             */
/*   Updated: 2025/01/07 14:21:01 by yikim2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void    parse(char* line){
    m_list *t_list;
    while(line){
        printf("type: %d, str: %s", t_list->content.type, t_list->content.str);
        
    }
}

int main(int argc, char **argv, char **envp)
{
    char *str;
    set_signal();
    while (1)
    {
        str = readline("miniii애옹$ ");
        if(str == NULL){
            printf("exit\n");
            break;
        }
        add_history(str);
        printf("str : %s\n", str);
        free(str);
    }
    return (0);
}
