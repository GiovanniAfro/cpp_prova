/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:34:46 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/28 17:53:55 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) //inizializzo pi a f non il contrario è diferso
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Desctrucor called" << std::endl;
    return;
}

void    Sample::bar(void) const
{
    std::cout << "this->pi" << this->pi << std::endl;
    std::cout << "this->qd" << this->qd << std::endl;

    //this->qd;

    return;
}
/*float const pi; dichiara una variabile membro pi di tipo float costante.
 Ciò significa che, una volta assegnato un valore a pi, non potrà più essere modificato. Questo è un esempio di variabile membro costante.

void bar(void) const; dichiara una funzione membro bar che è costante, cioè non modificherà lo stato dell'oggetto chiamante.
 All'interno di una funzione membro costante, è possibile accedere solo a membri dati costanti o leggere i membri non costanti,
  ma non è possibile modificarli. Nella tua funzione bar, puoi vedere che this->pi può essere letto, ma this->qd non può essere modificato.

L'uso di const è importante quando si vuole garantire l'integrità dei dati e quando si definiscono funzioni che devono essere chiamate su oggetti costanti senza modificarli.*/
