/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirections_setup.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mohamed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:59:45 by malhassa          #+#    #+#             */
/*   Updated: 2026/02/18 17:32:06 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
static int open_function(t_cmd *cmd)
{
    if (cmd->redirs->type == R_IN)
        
}

int check_redirection(t_cmd *cmd,t_env *env)
{
    // echo > outfile
    // echo < infile
    int fd;

    fd = open_function(cmd->redirs->target, O_WRONLY | O_CREAT | O_TRUNC, 0644);
}