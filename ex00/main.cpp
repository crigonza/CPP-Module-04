/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:20:22 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 11:07:47 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal    *meta = new Animal();
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const WrongAnimal    *w = new WrongCat();
    const WrongCat      wc;
    Animal  inst("Unicornio");


    std::cout << "-------------------------------" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;
    std::cout << wc.getType() << " " << std::endl;
    std::cout << inst.getType() << " " << std::endl;
    std::cout << "-------------------------------" << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    w->makeSound();
    wc.makeSound();
    inst.makeSound();
    std::cout << "-------------------------------" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete w;
    
    return (0);
}