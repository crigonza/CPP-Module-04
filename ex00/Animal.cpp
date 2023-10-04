/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:11:20 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/04 21:18:32 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
    std::cout << "Animal " << this->_type << " default constructor called!." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << this->_type << " default constructor called!." << std::endl;
}
