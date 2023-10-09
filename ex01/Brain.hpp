/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:07:37 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 13:28:40 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

class   Brain
{
    private:
        std::string     _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &brain);
        ~Brain(void);

        Brain   &operator=(Brain const &brain);

        void    getIdeas(int n);
};

#endif