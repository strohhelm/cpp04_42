/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 22:22:42 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 12:17:54 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

int main (void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;
	Animal	an;
	std::cout<<std::endl;
	Cat		pinky;
	std::cout<<std::endl;
	Dog		milli;
	std::cout<<std::endl;

	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;

	an.makeSound();
	std::cout<<std::endl;

	pinky.makeSound();
	std::cout<<std::endl;
	
	Dog *hubble = new Dog();
	hubble->makeSound();
	delete hubble;
	std::cout<<std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "meta is a " << meta->getType() << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " <<i->getType() <<  std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout<<std::endl;
	
	milli.makeSound();
	std::cout<<std::endl;

	WrongAnimal wAnimal;
	WrongAnimal *wc= new WrongCat();
	std::cout << "wAnimal is a " <<wAnimal.getType() <<  std::endl;
	std::cout << "wc is a " <<wc->getType() <<  std::endl;
	wAnimal.makeSound();
	wc->makeSound();
	
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;

	delete meta;
	delete i;
	delete j;
	delete wc;
}