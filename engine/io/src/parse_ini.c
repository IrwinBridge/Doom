/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:09:14 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 18:28:52 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

int		next_line(char *str, int i)
{
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*extract_name(char *str)
{
	int		i;
	char	*name;

	i = 0;
	while (str[i] != ' ')
		i++;
	name = malloc(sizeof(char) * (i + 1));
	name[i] = '\0';
	i = 0;
	while (str[i] != ' ')
	{
		name[i] = str[i];
		i++;
	}
	return (name);
}

char	*extract_value(char *str)
{
	int		i;
	char	*value;

	i = 0;
	while (str[i] != '\'' && str[i] != '\"')
		i++;
	value = malloc(sizeof(char) * (i + 1));
	value[i] = '\0';
	i = 0;
	while (str[i] != '\'' && str[i] != '\"')
	{
		value[i] = str[i];
		i++;
	}
	return (value);
}

int		ini_count_vars(char *str)
{
	int	i;
	int	vars_count;

	i = 0;
	vars_count = 0;
	while (str[i] && str[i] != '[')
	{
		if (str[i] == '#')
			i = next_line(str, i);
		if (str[i] == '=')
			vars_count++;
		i++;
	}
	return (vars_count);
}

char	*ini_next_name(char *str, bool fresh)
{
	static int	i = 0;
	char		*name;

	if (fresh)
		i = 0;
	while (str[i] && str[i] != '[')
	{
		if (str[i] == '#')
			i = next_line(str, i);
		if (isalpha(str[i]))
		{
			name = extract_name(&str[i]);
			i = next_line(str, i);
			return (name);
		}
		else
			i++;
	}
}

char	*ini_next_value(char *str, bool fresh)
{
	static int	i = 0;
	char		*value;

	if (fresh)
		i = 0;
	while (str[i] && str[i] != '[')
	{
		if (str[i] == '#')
			i = next_line(str, i);
		if (str[i] == '=')
		{
			while (str[i] != '\'' && str[i] != '\"')
				i++;
			++i;
			value = extract_value(&str[i]);
			i = next_line(str, i);
			return (value);
		}
		else
			i++;
	}
}
