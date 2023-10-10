/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:56 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/10 10:58:17 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string     _type;
    public:
        AAnimal(void);
        AAnimal(std::string type);
        AAnimal(AAnimal const &animal);
        virtual ~AAnimal(void);

        AAnimal  &operator=(AAnimal const &animal);

        std::string     getType(void) const;
        virtual void    makeSound(void) const = 0;
        virtual void    showIdeas(void) const = 0;
};

#endif