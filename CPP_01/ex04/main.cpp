/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 20:30:47 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool open_copy_file(std::string file_name, std::ifstream &file_original, std::ofstream &file_replace)
{
	file_original.open(file_name.c_str());
	if(!file_original)
	{
		std::cerr << "Não foi possível abrir o arquivo arquivo_origem.txt";
		std::cout << std::endl;
		return (1);
	}
		
	std::string replaceFileName = file_name.substr(0, file_name.find_last_of(".")) + ".replace";

	file_replace.open(replaceFileName.c_str());
	if(!file_replace)
	{
		std::cerr << "Não foi possível abrir o arquivo " << replaceFileName;
		std::cout << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(file_original, line)) {
		file_replace << line << std::endl;
	}

	file_original.close();
	file_replace.close();
	return (1);
	
}

int main(int argc, char **argv)
{
	std::ifstream file_original;
	std::ofstream file_replace;

(void)argc;
	// if(argc < 3)
	// {
	// 	std::cout << "tem que ter 3 argumentos" << std::endl;
	// 	return (0);
	// }
	if(!open_copy_file(argv[1], file_original, file_replace))
		return (1);
	

	return 0;
}


