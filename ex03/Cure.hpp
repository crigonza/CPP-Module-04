/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:50:22 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 18:51:18 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &cure);
        ~Cure(void);

        Cure     &operator=(Cure const &cure);

        AMateria    *clone() const;
};

#endif