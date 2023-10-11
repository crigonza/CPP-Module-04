/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:52:03 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 12:31:07 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria *Character::dropped[100];

Character::Character(void) : _name()
{
    for  (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
    for  (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    std::cout << "Character " << name << " created." << std::endl;
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
    {
        if (this->_inventory[i])
        {
            std::cout << "AMateria " << this->_inventory[i]->getType();
            std::cout << " equiped in slot " << i << " destroyed." << std::endl;
        }
        delete this->_inventory[i];
    }
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
        if (i == 3)
            delete m;
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        for (int i = 0; i < 100; i++)
        {
            if (!Character::dropped[i])
            {
                Character::dropped[i] = this->_inventory[idx];
                break;
            }
        }
        std::cout << "AMateria " << this->_inventory[idx]->getType();
        std::cout << " unequiped." << std::endl;
        this->_inventory[idx] = nullptr;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}