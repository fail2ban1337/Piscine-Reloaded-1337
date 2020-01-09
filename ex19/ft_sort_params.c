/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:03:22 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/05 17:55:30 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (!*s1 && !*s2)
			return (0);
	}
	return (*s1 - *s2);
}

void	ft_printparam(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*ptr;
	int		i;
	int		j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ptr = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = ptr;
			}
			j++;
		}
		i++;
	}
	ft_printparam(argc, argv);
	return (0);
}
