/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:34:01 by crigonza          #+#    #+#             */
/*   Updated: 2023/10/11 11:28:49 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_materias[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &materia);
        ~MateriaSource(void);

        MateriaSource   &operator=(MateriaSource const &materia);

        void    learnMateria(AMateria *m);
        AMateria    *createMateria(std::string const &type);
};

#endif