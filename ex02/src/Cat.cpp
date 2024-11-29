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
Cat::Cat() : AAnimal(), _brain(new Brain())
{
	std::cout<<M<<"Cat default constructor called!"<<X<<std::endl;
	_type = "Cat";
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Cat::Cat(const Cat& original) : AAnimal(), _brain(new Brain(*(original._brain)))
{
	_type = original._type;
	std::cout<<M<<"Cat copy constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Cat::~Cat()
{
	delete _brain;
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
		*(this->_brain) = *(original._brain);
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

void	Cat::haveIdea(std::string idea)
{
	std::cout<<M<<_type<<"Cat has a new idea!"<<std::endl;
	_brain->setIdea(idea);
}
void	Cat::think(void)
{
	_brain->printIdeas();
}
