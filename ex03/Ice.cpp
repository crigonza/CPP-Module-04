/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:27:15 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 08:38:34 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &ice)
{
    *this = ice;
}

Ice::~Ice(void)
{
}

Ice     &Ice::operator=(Ice const &ice)
{
    this->_type = ice._type;
    return (*this);
}

AMateria    *Ice::clone(void) const 
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}