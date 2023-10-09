/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:56 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 14:00:59 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string     _type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &animal);
        virtual ~Animal(void);

        Animal  &operator=(Animal const &animal);

        virtual std::string     getType(void) const;
        virtual void    makeSound(void) const;
        virtual void    showIdeas(void) const;
};

#endif