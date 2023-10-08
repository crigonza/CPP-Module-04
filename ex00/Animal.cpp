/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:11:20 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 19:09:21 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("None")
{
    std::cout << "Animal " << this->_type << " default constructor called!." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << this->_type << " constructor called!." << std::endl;
}

Animal::Animal(Animal const &animal)
{
    std::cout << "Animal " << this->_type << " copy constructor called!." << std::endl;
    *this = animal;
}

Animal::~Animal(void)
{
    std::cout << "Animal " << this->_type << " destructor called!." << std::endl;
}

Animal &Animal::operator=(Animal const &animal)
{
    std::cout << "Animal assignment operator called!." << std::endl;
    this->_type = animal._type;
    return (*this);
}

std::string     Animal::getType(void) const
{
    return (this->_type);
}

void     Animal::makeSound(void) const
{
    std::cout << "Animal Sounds!." << std::endl;
}
