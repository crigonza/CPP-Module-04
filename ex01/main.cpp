/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:20:22 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 11:16:34 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal    *catsAndDogs[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            catsAndDogs[i] = new Cat();
        else 
            catsAndDogs[i] = new Dog();
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    for (int i = 0; i < 4; i++)
        delete catsAndDogs[i];
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    Cat     a;
    Cat     b = a;
    std::cout << "-------Cat a ideas:------" << std::endl; 
    a.showIdeas();
    std::cout << "-------Cat b ideas:------" << std::endl; 
    b.showIdeas();
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    return (0);
}