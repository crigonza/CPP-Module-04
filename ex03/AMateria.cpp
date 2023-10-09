/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:57:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 19:21:35 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("None")
{
    std::cout << "AMateria type default constructor called!." << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria type " << this->_type << " constructor called!." << std::endl;
}

AMateria::AMateria(AMateria const &amateria)
{
    std::cout << "AMateria copy constructor called!." << std::endl;
    *this = amateria; 
}

AMateria    &AMateria::operator=(AMateria const &amateria)
{
    std::cout << "AMateria assignment operator called!." << std::endl; 
    this->_type = amateria._type;
    return (*this);
}

std::string const   &AMateria::getType(void) const
{
    return  this->_type;
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "AMateria used on target " << target.getName() << std::endl;
}
