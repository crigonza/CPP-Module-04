/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:23:51 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/09 13:25:00 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private:
        Brain   *_brain;
    public:
        Cat(void);
        Cat(Cat const &cat);
        ~Cat(void);

        Cat     &operator=(Cat const &cat);

        void    makeSound(void) const;
        void    showIdeas(void) const;
};

#endif
