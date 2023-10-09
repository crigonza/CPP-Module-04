/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:11:25 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 18:56:38 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string     _type;
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(AMateria const &amateria);
        virtual ~AMateria(void);

        AMateria    &operator=(AMateria const &amateria);

        std::string const   &getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void    use(ICharacter  &target);
};

#endif