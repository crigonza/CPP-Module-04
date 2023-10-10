/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:57:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 09:59:38 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) : _type("None")
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &amateria)
{
    *this = amateria; 
}

AMateria::~AMateria(void)
{
}

AMateria    &AMateria::operator=(AMateria const &amateria)
{
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
