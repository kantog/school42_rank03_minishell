/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:48:11 by bclaeys           #+#    #+#             */
/*   Updated: 2024/10/30 13:42:48 by bclaeys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int	main(int ac, char **av, char **envp)
{
	t_var_data	*var_data;

	if (ac != 1)
		return (1);
	var_data = init_var_data(envp);
	if (!var_data)
		return (ft_print_error("Error: malloc failed\n"));
	free_var_data(var_data);
	(void)av;
}
