/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:23:54 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 14:36:11 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Brain::Brain() 
{
	std::cout<<D<<"Brain default constructor called!"<<X<<std::endl;
	for (std::string s : _ideas)
	{
		s = "";
	}
}
/*----------------------------------------------------------------------------*/

// Copy constructor
Brain::Brain(const Brain& original)
{
	std::cout<<D<<"Brain copy constructor called!"<<X<<std::endl;
	*this = original;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Brain::~Brain()
{
	std::cout	<<D<<"Brain default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Brain& Brain::operator=(const Brain& original)
{
	std::cout<<D<<"Brain Copy assignment operator called!"<<X<<std::endl;
	if (!(this == &original))
	{
		int i = -1;
		while (++i < 100)
			this->_ideas[i] = original._ideas[i];
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	Brain::setIdea(std::string newIdea)
{
	int i = 0;
	std::string *s = &_ideas[0];
	while (*s != "" && i < 100)
	{
		s++;
		i++;
		if (i == 100)
		{
			std::cout<<R<<"Brain is too full, cant hold more ideas!"<<std::endl;
			return ;
		}
	}
	*s = newIdea;
	std::cout<<D<<"New idea added to Brain at index: "<<B<<i<<X<<std::endl;
}

void	Brain::printIdeas(void) const
{
	int i = 0;
	for (std::string s: _ideas)
	{
		if (s != "")
			std::cout<<B<<i<<": "<<D<<s<<X<<"\n";
		i++;
	}
	std::cout<<std::endl;
}