/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:24:03 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/26 12:13:38 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str);
int	ft_isdigit(char *str);

int	ft_isalnum(char	*str)
{
	if (ft_isalpha(str))
		return(0);
	if (ft_isdigit(str))
		return(0);
	return(1);
}