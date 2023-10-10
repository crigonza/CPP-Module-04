/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:51:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 08:38:13 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &cure)
{
    *this = cure;
}

Cure::~Cure(void)
{
}

Cure     &Cure::operator=(Cure const &cure)
{
    this->_type = cure._type;
    return (*this);
}

AMateria    *Cure::clone(void) const 
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}