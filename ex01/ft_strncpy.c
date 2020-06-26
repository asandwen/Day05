/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:37:01 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/26 15:44:14 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int a;

	a = 0;
	while(src[a] !='\0')
	{
		dest [a] = src [a];
		a++;
	}
	dest[n] = '\0';
	return (dest);
}

