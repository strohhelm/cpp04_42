/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:01:15 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 21:06:58 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout<<O<<"Dog default constructor called!"<<X<<std::endl;
	_type = "Dog";
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Dog::Dog(const Dog& original) : Animal(), _brain(new Brain(*(original._brain)))
{
	
	_type = original._type;
	std::cout<<O<<"Dog copy constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Dog::~Dog()
{
	delete _brain;
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
		Animal::operator=(original);
		*(this->_brain) = *(original._brain);
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

void	Dog::haveIdea(std::string idea)
{
	std::cout<<O<<_type<<" Dog has a new idea!"<<std::endl;
	_brain->setIdea(idea);
}
void	Dog::think(void)
{
	_brain->printIdeas();
}
