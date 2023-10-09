/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:23:51 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/08 19:07:21 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &wrongcat);
        ~WrongCat(void);

        WrongCat     &operator=(WrongCat const &wrongcat);

        void    makeSound(void) const;
};

#endif
