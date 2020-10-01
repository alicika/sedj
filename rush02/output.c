/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:34:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/09/27 22:29:52 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "output.h"

void output_ans(char *ans)
{
	
}

void dict_err(void)
{
	write(1,"Dict Error\n", 11);
}

void arg_err(void)
{
	write(1, "Error\n", 6);
}
