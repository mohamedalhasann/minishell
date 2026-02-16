/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhassa <malhassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:59:52 by malhassa          #+#    #+#             */
/*   Updated: 2026/02/16 19:13:19 by malhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
int execute_builtin(t_cmd *cmd, t_env *env)
{
	if (!strcmp(cmd->argv[0], "cd"))
		return (execute_cd(cmd, env));
	if (!strcmp(cmd->argv[0], "exit"))
		return (execute_exit(cmd, env));
	if (!strcmp(cmd->argv[0], "export"))
		return (execute_export(cmd, env));
	if (!strcmp(cmd->argv[0], "unset"))
		return (execute_unset(cmd, env));
	if (!strcmp(cmd->argv[0], "echo"))
		return (execute_echo(cmd));
	if (!strcmp(cmd->argv[0], "pwd"))
		return (execute_pwd());
	if (!strcmp(cmd->argv[0], "env"))
		return (execute_env(env));
	return (1);
}

int execute_command(t_cmd *cmd,char **envp)
{
    char    *command;
    char    *path;
    int pid;
    
    path = find_command_path(cmd->argv[0], find_full_path(envp));
    if (!path)
        return (127);
    command = cmd->argv[0];
    pid = fork();
    if (pid == -1)
        return (-1);
    if (pid == 0)
    {
        
    }
    else {
        wait(NULL);
    }
     
}