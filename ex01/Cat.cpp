/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:39:13 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 17:30:09 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called!." << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat const &cat)
{
    std::cout << "Cat copy constuctor called!." << std::endl;
    *this = cat; 
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat destructor Called!." << std::endl;
}

Cat     &Cat::operator=(Cat const &cat)
{
    std::cout << "Cat assignment operator called!." << std::endl;
    this->_type = cat._type;
    this->_brain = new Brain(*cat._brain);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaaauuuu!." << std::endl;
}

void    Cat::showIdeas(void) const
{
    for (int i = 0; i < 5; i++)
        this->_brain->getIdeas(i);
}