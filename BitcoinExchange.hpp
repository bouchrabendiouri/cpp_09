/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbendiou <bbendiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:06:44 by bbendiou          #+#    #+#             */
/*   Updated: 2024/05/17 11:04:01 by bbendiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>

class BitcoinExchange {
public:
	BitcoinExchange(const std::string &filename);
	BitcoinExchange(const BitcoinExchange &copy);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	BitcoinExchange();
	~BitcoinExchange();
    void ProcessInput(const std::string &filename);
    bool ValidateDate(const std::string& date);
    bool ValidateValue(const double &value);
    double GetExchangeValue(const std::string &date);
private:

	std::map<std::string, double> data_;
};

#endif