/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:42:20 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 17:48:02 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

struct Sample1
{
    int foo;

    Sample1(void);
    ~Sample1(void);

    void    bar(void) const;
};

#endif

/*Struct (Struttura):
Nelle strutture, i membri sono, per impostazione predefinita, pubblici (cioè accessibili da qualsiasi parte del codice).
Non puoi specificare esplicitamente membri privati all'interno di una struttura. Tutti i membri sono pubblici.
Le strutture sono comunemente utilizzate per rappresentare dati condivisi e semplici tipi di dati.*/