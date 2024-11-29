/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:01:15 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 19:49:25 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Dog::Dog() : AAnimal()
{
	std::cout<<O<<"Dog default constructor called!"<<X<<std::endl;
	_type = "Dog";
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Dog::Dog(const Dog& original) : AAnimal(original)
{
	std::cout<<O<<"Dog copy constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Dog::~Dog()
{
	std::cout	<<O<<"Dog default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Dog& Dog::operator=(const Dog& original)
{
	std::cout<<O<<"Dog Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		AAnimal::operator=(original);
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{

	std::cout	<<O<<"Woof Woof WOOOF WOOOF WOFF Wof woff!!"
				<<X<<std::endl;
}
