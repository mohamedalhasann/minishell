/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:45:04 by mohamed           #+#    #+#             */
/*   Updated: 2026/02/16 19:10:07 by malhassa         ###   ########.fr       */
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
    int status;
    t_env *pipeline;

    while(1)
    {
        line = readline("minishell$ ");
        if (!line)
        {
            printf("exit\n");
            break;
        }
        if (is_builtin(pipeline->cmd_head->argv[0]))
            status = execute_builtin(pipeline->cmd_head,pipeline-);
        else
            status = execute_command(pipeline->cmd_head,pipeline->envp);
        free(line);
    }
    return (0);
}