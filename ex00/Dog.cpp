/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:39:13 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 18:09:41 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor called!." << std::endl;
}

Dog::Dog(Dog const &dog)
{
    std::cout << "Dog copy constuctor called!." << std::endl;
    *this = dog; 
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor Called!." << std::endl;
}

Dog     &Dog::operator=(Dog const &dog)
{
    std::cout << "Dog assignment operator called!." << std::endl;
    this->_type = dog._type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Guau! Guauu!." << std::endl;
}