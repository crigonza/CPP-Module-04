/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:23:51 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/05 10:45:45 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat: public virtual Animal
{
    Cat(void);
    Cat(Cat const &cat);
    ~Cat(void);

    Cat     &operator=(Animal const &cat);
};

#endif
