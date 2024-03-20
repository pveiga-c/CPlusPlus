/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/20 17:48:11 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool open_copy_name(std::string fileName, std::ifstream &file_original, std::ofstream &file_replace)
{
	file_original.open(fileName.c_str());
	if(!file_original)
	{
		std::cerr << "Unable to open the file origin_file.txt";
		std::cout << std::endl;
		return (0);
	}
		
	std::string replaceFileName = fileName.substr(0, fileName.find_last_of(".")) + ".replace";

	file_replace.open(replaceFileName.c_str());
	if(!file_replace)
	{
		std::cerr << "Unable to open the file .replace " << replaceFileName;
		std::cout << std::endl;
		return (0);
	}
	return (1);
}


void ft_replace_char(std::ifstream &file_original, std::ofstream &file_replace, const std::string &s1, const std::string &s2)
{
	std::string line;
	
	while (std::getline(file_original, line, '\0'))
	{
		for (size_t pos = 0; (pos = line.find(s1, pos)) != std::string::npos; pos += s2.length()) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		file_replace << line << std::endl;
	}
	file_original.close();
	file_replace.close();
}


int main(int argc , char **argv)
{
	std::ifstream file_original;
	std::ofstream file_replace;

	if(argc != 4)
	{
		std::cout << "Must have 3 arguments" << std::endl;
		std ::cout << "Usage: ./replace file_original.txt string_to_replace string_to_replace_with" << std::endl;
		return (0);
	}
	if(!open_copy_name(argv[1], file_original, file_replace))
		return (1);
	ft_replace_char(file_original, file_replace, argv[2], argv[3]);
	return 0;
}


