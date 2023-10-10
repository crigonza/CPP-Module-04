/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:59:48 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 08:11:12 by crigonza         ###   ########.fr       */
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
        AMateria    *_dropped[10];
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &character);
        ~Character(void);

        Character   &operator=(Character const &characcter);

        std::string const   &getName(void) const;
        void    equip(AMateria *m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);
};

#endif