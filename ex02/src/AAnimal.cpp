/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:58:26 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 19:47:53 by pstrohal         ###   ########.fr       */
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
	_brain = new Brain;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
AAnimal::AAnimal(const AAnimal& original) : _type(original._type)
{
	std::cout<<Y<<"AAnimal copy constructor called!"<<X<<std::endl;
	_brain = new Brain(*(original._brain));
}
/*----------------------------------------------------------------------------*/


// Default destructor
AAnimal::~AAnimal()
{
	delete _brain;
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
		*(this->_brain) = *(original._brain);
	}
	return *this;
}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void AAnimal::makeSound(void) const
{
	std::cout	<<Y<<"<AAnimals dont make sounds!>"
				<<X<<std::endl;
}

std::string	AAnimal::getType(void) const
{
	return(this->_type);
}

void	AAnimal::haveIdea(std::string idea)
{
	std::cout<<Y<<_type<<" has a new idea!"<<std::endl;
	_brain->setIdea(idea);
}
void	AAnimal::think(void)
{
	_brain->printIdeas();
}
