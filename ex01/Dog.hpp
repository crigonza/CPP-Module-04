/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:23:51 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 13:32:42 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog(void);
        Dog(Dog const &dog);
        ~Dog(void);

        Dog     &operator=(Dog const &dog);

        void    makeSound(void) const;
        void    showIdeas(void) const;
};

#endif
