/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:43:23 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 18:49:57 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &ice);
        ~Ice(void);

        Ice     &operator=(Ice const &ice);

        AMateria    *clone() const;
};

#endif