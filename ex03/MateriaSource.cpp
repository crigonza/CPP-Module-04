/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:43:01 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 11:28:31 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia._materias[i])
            this->_materias[i] = materia._materias[i]->clone();
        else
            this->_materias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
        {
            std::cout << "MateriaSource " << this->_materias[i]->getType();
            std::cout << " unlearned." << std::endl; 
        }
        delete this->_materias[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &materia)
{
    if (this != &materia)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->_materias[i];
            if (materia._materias[i])
                this->_materias[i] = materia._materias[i]->clone();
            else
                this->_materias[i] = nullptr;
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == nullptr)
        {
            this->_materias[i] = m;
            std::cout << "MateriaSource " << m->getType() << " learned." << std::endl;
            break;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
        {
            std::cout << "MateriaSource " << type << " created." << std::endl;
            return (this->_materias[i]->clone());
        }
    }
    return (nullptr);
} 