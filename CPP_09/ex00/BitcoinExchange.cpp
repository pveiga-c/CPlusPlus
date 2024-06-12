/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:04:42 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 10:18:55 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	(void)copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	(void)copy;
	return(*this);
}

void BitcoinExchange::parsingCsv()
{
	std::ifstream fileCsv("data.csv");
	std::string buf;

	if(fileCsv.fail())
		throw BitcoinExchange::OpeningFile();
		
	std::getline(fileCsv, buf);
	while(!fileCsv.eof())
	{
		std::getline(fileCsv, buf);
		if(fileCsv.eof())
			break;
		checkFileCsv(buf);
	}
}

void BitcoinExchange::checkFileCsv(const std::string buf)
{
	size_t commaPos;
	tm time;
	
	size_t commaCout = std::count(buf.begin(), buf.end(), ',');
	
	if(commaCout != 1)
		throw BitcoinExchange::InvalidPrice("Error : Format invalid");
		
	commaPos = buf.find(',');
	std::string date(buf.substr(0, commaPos));
	checkDateCsv(date, time);
	std::string priceStr(buf.substr(commaPos + 1));
	double price = checkPriceCsv(priceStr);
	_bitcoinMap[date] = price;
}

void BitcoinExchange::checkDateCsv(std::string& date, tm& time)
{
	memset(&time, 0, sizeof(struct tm));
	
	if(std::sscanf(date.c_str(), "%d-%d-%d", &time.tm_year, &time.tm_mon, &time.tm_mday) != 3)
		throw BitcoinExchange::InvalidDate();
	if(time.tm_year < 2009)
		throw BitcoinExchange::InvalidDate();
	if(time.tm_mon < 1 || time.tm_mon > 12)
		throw BitcoinExchange::InvalidDate();
	if(time.tm_mon == 2 && time.tm_year % 4 != 0 && time.tm_mday > 28)
		throw BitcoinExchange::InvalidDate();
	if(time.tm_mon == 2 && time.tm_year % 4 == 0 && time.tm_mday > 29)
		throw BitcoinExchange::InvalidDate();
	if((time.tm_mon == 4 || time.tm_mon == 6 || time.tm_mon == 9 || time.tm_mon == 11) && time.tm_mday > 30)
		throw BitcoinExchange::InvalidDate();
	if((time.tm_mon == 1 || time.tm_mon == 3 || time.tm_mon == 5 || time.tm_mon == 7 || time.tm_mon == 8 || time.tm_mon == 10 || time.tm_mon == 12) && time.tm_mday > 31)
		throw BitcoinExchange::InvalidDate();
	
}

float BitcoinExchange::checkPriceCsv(std::string priceStr)
{
	std::istringstream ss(priceStr);
	float price;
	ss >> price;

	if (price < 0)
		throw BitcoinExchange::InvalidPrice("Error: not a positive number.");
	else if (price > 2147483647.0)
		throw BitcoinExchange::InvalidPrice("Error: too large a number.");
	return (price);
}

void BitcoinExchange::parsingTxt(char *path)
{
	std::ifstream fileTxt(path);
	std::string buf;

	if(fileTxt.fail())
		throw BitcoinExchange::OpeningFile();
	
	while(!fileTxt.eof())
	{
		std::getline(fileTxt, buf);
		if(buf == "date | value")
			continue;
		checkFileTxt(buf);
		if(fileTxt.eof())
			break;
	}
	
}



void BitcoinExchange::checkFileTxt(const std::string buf)
{
	size_t pipePos;
	tm time;
	std::map<std::string, float>::iterator lowerDate;
	float multiplier;
	float result;
	
	size_t pipeCout = std::count(buf.begin(), buf.end(), '|');
	
	if(pipeCout != 1)
		throw BitcoinExchange::InvalidPrice("Error : Format invalid");
	
	pipePos = buf.find('|');
	std::string date(buf.substr(0, pipePos));
	
	if(!checkDateTxt(date, time))
	{
		std::string multiplierStr(buf.substr(pipePos + 1));
		std::istringstream ss(multiplierStr);
		ss >> multiplier;
		
		if (multiplier < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (multiplier > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			lowerDate = _bitcoinMap.lower_bound(date);
			if(lowerDate->first != date)
				--lowerDate;
			result = lowerDate->second * multiplier;
			std::cout << date << " => " << multiplier << " = " <<  result << std::endl;
		}
	}
	else
		std::cout << "Error: bad input => " << date << std::endl;
}


int BitcoinExchange::checkDateTxt(std::string& date, tm& time)
{
	memset(&time, 0, sizeof(struct tm));
	int flag = 0;

	if(std::sscanf(date.c_str(), "%d-%d-%d", &time.tm_year, &time.tm_mon, &time.tm_mday) != 3)
		flag = 1;
	if(time.tm_year < 2009)
		flag = 1;
	if(time.tm_mon < 1 || time.tm_mon > 12)
		flag = 1;
	if(time.tm_mon == 2 && time.tm_year % 4 != 0 && time.tm_mday > 28)
		flag = 1;
	if(time.tm_mon == 2 && time.tm_year % 4 == 0 && time.tm_mday > 29)
		flag = 1;
	if((time.tm_mon == 4 || time.tm_mon == 6 || time.tm_mon == 9 || time.tm_mon == 11) && time.tm_mday > 30)
		flag = 1;
	if((time.tm_mon == 1 || time.tm_mon == 3 || time.tm_mon == 5 || time.tm_mon == 7 || time.tm_mon == 8 || time.tm_mon == 10 || time.tm_mon == 12) && time.tm_mday > 31)
		flag = 1;
	return (flag);
}


