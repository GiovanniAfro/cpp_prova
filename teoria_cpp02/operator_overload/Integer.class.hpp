/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:21:13 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 16:58:02 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>

class Integer
{
public:
    // Costruttore
    Integer(int const n);

    // Distruttore
    ~Integer(void);

    // Funzione per ottenere il valore dell'oggetto
    int getValue(void) const;

    // Operatore di assegnazione
    Integer & operator=(Integer const & rhs);

    // Operatore di addizione
    Integer operator+(Integer const & rhs) const;

private:
    // Variabile membro per memorizzare il valore
    int _n;
};

// Operatore di output per la stampa su stream
std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif
