/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:58:26 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 11:07:15 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout<<P<<"WrongAnimal default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& original) : _type("WrongAnimal")
{
	std::cout<<P<<"WrongAnimal copy constructor called!"<<X<<std::endl;
	std::cout<<std::endl;
	*this = original;
}
/*----------------------------------------------------------------------------*/


// Default destructor
WrongAnimal::~WrongAnimal()
{
	std::cout	<<P<<"WrongAnimal default destructor called!\n"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
	std::cout<<P<<"WrongAnimal Copy assignment operator called!"<<X<<std::endl;
	if (!(this == &original))
	{
		this->_type = original._type;
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void WrongAnimal::makeSound(void) const
{
	std::cout	<<P<<"<Sounds make dont WrongAnimals!>"
				<<X<<std::endl;
}
std::string	WrongAnimal::getType(void) const
{
	return(this->_type);
}