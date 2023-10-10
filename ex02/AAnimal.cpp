/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:11:20 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 13:36:06 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("None")
{
    std::cout << "AAnimal " << this->_type << " default constructor called!." << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal " << this->_type << " constructor called!." << std::endl;
}

AAnimal::AAnimal(AAnimal const &aanimal)
{
    std::cout << "AAnimal " << this->_type << " copy constructor called!." << std::endl;
    *this = aanimal;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal " << this->_type << " destructor called!." << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &aanimal)
{
    std::cout << "AAnimal assignment operator called!." << std::endl;
    this->_type = aanimal._type;
    return (*this);
}

std::string     AAnimal::getType(void) const
{
    return (this->_type);
}

void     AAnimal::makeSound(void) const
{
}

void    AAnimal::showIdeas(void) const
{
}
