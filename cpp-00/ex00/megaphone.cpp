/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:52:13 by mreis-me          #+#    #+#             */
/*   Updated: 2023/01/31 01:21:11 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (size_t i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			if ((argv[i][j] == '\"') || (argv[i][j] == '\''))
				j++;
			std::cout << (char)toupper(argv[i][j]);
		}
		if (argv[i+1] != NULL) // Falta arrumar os espaços
			std::cout << " ";
		if (argv[i][0] == ' ')
			std::cout << " ";
	}
	std::cout<<"\n";
	return 0;
}
