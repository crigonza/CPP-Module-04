/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:59:48 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 12:26:08 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string     _name;
        AMateria    *_inventory[4];
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &character);
        ~Character(void);

        Character   &operator=(Character const &character);

        std::string const   &getName(void) const;
        void    equip(AMateria *m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);
        static  AMateria    *dropped[100];
};

#endif