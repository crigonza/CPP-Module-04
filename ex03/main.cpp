/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:58:02 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 10:31:27 by crigonza         ###   ########.fr       */
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
    return (0);
}