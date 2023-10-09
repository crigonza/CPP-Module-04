/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:09:13 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 17:29:58 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::string     randomIdeas[4] = {"Sleep", "Eat", "Run", "Bite"};
    srand(time(NULL));

    std::cout << "Brain default constructor called!." << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = randomIdeas[rand()%4];
}

Brain::Brain(Brain const &brain)
{
    std::cout << "Brain copy constructor called!." << std::endl;
    *this = brain;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called!." << std::endl;
}

Brain   &Brain::operator=(Brain const &brain)
{
    std::cout << "Brain assignment operator called!." << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return (*this);
}

void    Brain::getIdeas(int n)
{
    std::cout << this->_ideas[n] << std::endl;
}