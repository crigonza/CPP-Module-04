/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:39:13 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 17:59:37 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    std::cout << "Dog default constructor called!." << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog const &dog)
{
    std::cout << "Dog copy constuctor called!." << std::endl;
    *this = dog; 
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog destructor Called!." << std::endl;
}

Dog     &Dog::operator=(Dog const &dog)
{
    std::cout << "Dog assignment operator called!." << std::endl;
    this->_type = dog._type;
    this->_brain = new Brain(*dog._brain);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Guau! Guauu!." << std::endl;
}

void    Dog::showIdeas(void) const
{
    for (int i = 0; i < 5; i++)
        this->_brain->getIdeas(i);
}