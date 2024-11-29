/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:22:42 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 15:05:10 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int main (void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;

	Animal *cat = new Cat;
	Animal *dog = new Dog;
	Animal *kitty = new Cat;
	Animal *doggy = new Dog;
	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;

	Animal pip(*cat);
	

	cat->haveIdea("Oh im so hungry!");
	cat->haveIdea("Oh im so thirsty!");
	cat->haveIdea("Man this is tideous!");
	cat->haveIdea("Im so annoyed!");
	cat->haveIdea("OMG what is this horrendous monster there?");
	cat->haveIdea("Shit its coming closer, i cant stand that at all!");
	cat->haveIdea("Get the hell away from me!!");
	cat->makeSound();
	dog->haveIdea("Woof Woof!");
	dog->haveIdea("Im so happy!");
	dog->haveIdea("Oh look a Ball!");
	dog->haveIdea("What was that a Cat?? MUST CATCH CAT!");
	dog->haveIdea("I must tell her to stop!");
	dog->makeSound();
	std::cout<<std::endl;
	
	std::cout<<P<<"cat is thinking:"<<X<<std::endl;
	cat->think();
	std::cout<<P<<"dog is thinking:"<<X<<std::endl;
	dog->think();
	std::cout<<"hallo"<<std::endl;
	*kitty = *cat;
	*doggy = *dog;
	std::cout<<"hallo"<<std::endl;
	
	delete cat;
	delete dog;
	std::cout<<std::endl;

	std::cout<<P<<"kitty is thinking:"<<X<<std::endl;
	kitty->think();
	std::cout<<P<<"doggy is thinking:"<<X<<std::endl;
	doggy->think();
	Animal copycat(*kitty);
	Animal copydog(*doggy);
	delete kitty;
	delete doggy;
	std::cout<<std::endl;
	std::cout<<P<<"copycat is thinking:"<<X<<std::endl;
	copycat.think();
	std::cout<<P<<"copydog is thinking:"<<X<<std::endl;
	copydog.think();
	std::cout<<std::endl;
	
	Animal **horde = new Animal*[100];

	std::cout<<R<<"\n\n-------------HORDE:----------------------"<<X<<std::endl;

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			horde[i] = new Cat;
		else
			horde[i] = new Dog;
		std::cout<<"\n";
	}
	std::cout<<R<<"\n\n-------------HORDE DESTRUCT:----------------------"<<X<<std::endl;
	for (int i = 0; i < 100; i++)
	{
		delete horde[i];
		std::cout<<"\n";
	}
	delete[] horde;
	std::cout<<R<<"\n\n-------------GENERAL DESTRUCTORS:----------------------"<<X<<std::endl;

}