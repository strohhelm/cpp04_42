/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:58:26 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 21:14:39 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout<<Y<<"AAnimal default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
AAnimal::AAnimal(const AAnimal& original) : _type(original._type)
{
	std::cout<<Y<<"AAnimal copy constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
AAnimal::~AAnimal()
{
	std::cout	<<Y<<"AAnimal default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

AAnimal& AAnimal::operator=(const AAnimal& original)
{
	std::cout<<Y<<"AAnimal Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		this->_type = original._type;
	}
	return *this;
}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

std::string	AAnimal::getType(void) const
{
	return(this->_type);
}

void AAnimal::makeSound(void) const
{
	std::cout	<<Y<<"<AAnimals dont make sounds!>"
				<<X<<std::endl;
}