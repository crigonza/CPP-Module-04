/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:11:20 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 19:09:46 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("None")
{
    std::cout << "WrongAnimal " << this->_type << " default constructor called!." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal " << this->_type << " constructor called!." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal)
{
    std::cout << "WrongAnimal " << this->_type << " copy constructor called!." << std::endl;
    *this = wronganimal;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal " << this->_type << " destructor called!." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wronganimal)
{
    std::cout << "WrongAnimal assignment operator called!." << std::endl;
    this->_type = wronganimal._type;
    return (*this);
}

std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}

void     WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sounds!." << std::endl;
}
