/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:20:22 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 19:05:54 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal    *meta = new Animal();
    const Animal    *j = new Dog();
    const Animal    *i = new Cat();
    const WrongAnimal    *w = new WrongCat();

    std::cout << "-------------------------------" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;
    std::cout << "-------------------------------" << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    w->makeSound();
    std::cout << "-------------------------------" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete w;
    return 0;
}