/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:52:03 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 08:42:27 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name()
{
    for  (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    for  (int i = 0; i < 10; i++)
        this->_dropped[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
    for  (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    for  (int i = 0; i < 10; i++)
        this->_dropped[i] = nullptr;
}

Character::Character(Character const &character) : _name(character._name)
{
    for  (int i = 0; i < 4; i++)
    {
        if (character._inventory[i])
            this->_inventory[i] = character._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    for (int i = 0; i < 10; i++)
        delete this->_dropped[i];
}

Character   &Character::operator=(Character const &character)
{
    if (this != &character)
    {
        this->_name = character._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if (character._inventory[i])
                this->_inventory[i] = character._inventory[i]->clone();
            else
                this->_inventory[i] = nullptr;
        }
    }
    return (*this);
}

std::string const   &Character::getName(void) const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            std::cout << "AMateria " << m->getType() << " equiped on slot: ";
            std::cout << i << std::endl;
            break;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        for (int i = 0; i < 10; i++)
        {
            if (!this->_dropped[i])
                this->_dropped[i] = this->_inventory[idx];
                break;
        }
        this->_inventory[idx] = nullptr;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}