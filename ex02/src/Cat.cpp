/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:47:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:57:17 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Cat::Cat() : AAnimal()
{
	std::cout<<M<<"Cat default constructor called!"<<X<<std::endl;
	_type = "Cat";
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Cat::Cat(const Cat& original) : AAnimal(original)
{
	std::cout<<M<<"Cat copy constructor called!"<<X<<std::endl;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Cat::~Cat()
{
	std::cout	<<M<<"Cat default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Cat& Cat::operator=(const Cat& original)
{
	std::cout<<M<<"Cat Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		AAnimal::operator=(original);
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{

	std::cout	<<M<<"Meooooow! Meeeeooww!"
				<<X<<std::endl;
}