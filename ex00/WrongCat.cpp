/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:39:13 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 18:08:26 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called!." << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat)
{
    std::cout << "WrongCat copy constuctor called!." << std::endl;
    *this = wrongcat; 
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor Called!." << std::endl;
}

WrongCat     &WrongCat::operator=(WrongCat const &wrongcat)
{
    std::cout << "WrongCat assignment operator called!." << std::endl;
    this->_type = wrongcat._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Miaaauuuu!." << std::endl;
}
