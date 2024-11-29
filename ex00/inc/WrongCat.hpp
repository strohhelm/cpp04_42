/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:37:21 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 11:49:51 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS
#define COLOURS
#define X	"\033[0m"
#define R	"\033[31m"
#define P	"\033[38;2;255;20;200m"
#define LP	"\033[38;2;200;50;160m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;155;220;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"
#endif

#ifndef WrongCAT_HPP
#define WrongCAT_HPP
#include <string>
#include <iostream>
#include "./WrongAnimal.hpp"

class WrongCat	: public WrongAnimal
{
	public:
			WrongCat();
			~WrongCat();
			WrongCat(const WrongCat& original);
			WrongCat& operator=(const WrongCat &original);
	void	makeSound(void) const;
};

#endif