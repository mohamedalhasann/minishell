/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:45:04 by mohamed           #+#    #+#             */
/*   Updated: 2026/02/15 17:42:36 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <string.h>

int is_builtin(const char *s)
{
    if (!s || !*s)
        return 0;
    return (strcmp(s, "echo") == 0
        ||  strcmp(s, "cd") == 0
        ||  strcmp(s, "pwd") == 0
        ||  strcmp(s, "export") == 0
        ||  strcmp(s, "unset") == 0
        ||  strcmp(s, "env") == 0
        ||  strcmp(s, "exit") == 0);
}
int main(void)
{
    char    *line;
    t_cmd *pipeline;

    while(1)
    {
        line = readline("minishell$ ");
        if (!line)
        {
            printf("exit\n");
            break;
        }
        // parser
        // deciding if its builtin r not    
        
        printf("line %s is %d\n",line,is_builtin((line)));
        
        free(line);
    }
    return (0);
}