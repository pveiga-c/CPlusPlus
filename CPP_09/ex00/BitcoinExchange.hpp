/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:59:50 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 18:13:19 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <iomanip>
# include <map>
#include <algorithm>

class BitcoinExchange
{
	private:
	
		std::map<std::string, float> _bitcoinMap;
	
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);

		void parsingCsv();
		float checkPriceCsv(std::string priceStr);
		void checkDateCsv(std::string& date, tm& time);
		void checkFileCsv(const std::string buf);
		
		void parsingTxt(char *path);
	//	float checkPriceTxt(std::string priceStr);
		int checkDateTxt(std::string& date, tm& time);
		void checkFileTxt(const std::string buf);


	class OpeningFile : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return("Error: could not open file.\n");
			}
	};

	class InvalidDate : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Error: Invalid date.\n");
			}
	};

	class InvalidPrice : public std::exception
	{
		public:
			InvalidPrice(const char* errorMessage) : errorMessage(errorMessage){};
			
			const char *what() const throw()
			{
				return errorMessage;
			}
		private:
			const char* errorMessage;
	};
};

/* double checkPrice(std::string priceStr);
void checkDate(std::string& date, tm& time);
void checkFile(const std::string buf, int flag);
 */