/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:47:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 22:34:11 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout<<LP<<"WrongCat default constructor called!"<<X<<std::endl;
	// s = new std::string[10];
}
/*----------------------------------------------------------------------------*/


// Copy constructor
WrongCat::WrongCat(const WrongCat& original) : WrongAnimal()
{
	std::cout<<LP<<"WrongCat copy constructor called!"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
WrongCat::~WrongCat()
{
	std::cout	<<LP<<"WrongCat default destructor called!"
				<<X<<std::endl;
				// delete [] s;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

WrongCat& WrongCat::operator=(const WrongCat& original)
{
	std::cout<<LP<<"WrongCat Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		WrongAnimal::operator=(original);
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{

	std::cout	<<LP<<"WOOOOEEEEM! wooeeeeeMM!"
				<<X<<std::endl;
}