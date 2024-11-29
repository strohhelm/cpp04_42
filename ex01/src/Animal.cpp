/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:58:26 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 21:14:39 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Animal::Animal() : _type("Animal")
{
	std::cout<<Y<<"Animal default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
Animal::Animal(const Animal& original) : _type(original._type)
{
	std::cout<<Y<<"Animal copy constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Animal::~Animal()
{
	std::cout	<<Y<<"Animal default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Animal& Animal::operator=(const Animal& original)
{
	std::cout<<Y<<"Animal Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		this->_type = original._type;
	}
	return *this;
}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void Animal::makeSound(void) const
{
	std::cout	<<Y<<"<Animals dont make sounds!>"
				<<X<<std::endl;
}