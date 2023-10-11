/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:58:02 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 12:30:29 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int     main(void) 
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("fire");
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->unequip(2);
    me->unequip(3);
    me->use(3, *bob);
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    delete bob;
    delete me;
    delete src;
    for (int i = 0; i < 100; i++)
    {
        if (Character::dropped[i])
        {
            std::cout << "AMateria " << Character::dropped[i]->getType();
            std::cout << " dropped in the floor destroyed." << std::endl;
            delete Character::dropped[i];
        }
    }
    return (0);
}