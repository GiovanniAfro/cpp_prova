/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:24:26 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 17:36:03 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{

    Sample      instance;
    Sample *    instancep = &instance;

    int         Sample::*p = NULL;          // Dichiarazione di un puntatore a membro di variabile
    void        (Sample::*f)(void) const;   // Dichiarazione di un puntatore a membro di funzione

    p = &Sample::foo; // Assegnamento del puntatore a membro alla variabile "foo" di "Sample"

    std::cout << "Value of member foo = " << instance.foo << std::endl;
    instance.*p = 21;   // Modifica il membro "foo" dell'istanza "instance" utilizzando il puntatore
    std::cout << "Value of member foo = " << instance.foo << std::endl;
    instancep->*p = 42; // Modifica il membro "foo" di "instance" utilizzando un puntatore all'istanza
    std::cout << "Value of member foo = " << instance.foo << std::endl;


    f = &Sample::bar;   // Assegnamento del puntatore a membro alla funzione "bar" di "Sample"

    (instance.*f)();    // Chiamata della funzione membro "bar" sull'istanza "instance"
    (instancep->*f)();  // Chiamata della funzione membro "bar" su "instance" utilizzando un puntatore all'istanza

    return 0;

}
/* 
int Sample::*p è un puntatore a membro di variabile.
È utilizzato per fare riferimento alla variabile "foo" all'interno di un'istanza di "Sample".

void (Sample::*f)(void) const è un puntatore a membro di funzione.
È utilizzato per fare riferimento alla funzione membro "bar" all'interno di un'istanza di "Sample".

p = &Sample::foo assegna il puntatore p alla variabile membro "foo" della classe "Sample".

instance.*p e instancep->*p vengono utilizzati per accedere e
modificare il membro "foo" di "instance" utilizzando rispettivamente un oggetto e un puntatore all'oggetto.

f = &Sample::bar assegna il puntatore f alla funzione membro "bar" della classe "Sample".

(instance.*f)() e (instancep->*f)() vengono utilizzati per chiamare la funzione membro "bar" su "instance"
utilizzando un oggetto e un puntatore all'oggetto.

In sintesi, i puntatori a membri consentono di lavorare con i membri delle classi in modo dinamico, 
fornendo un meccanismo flessibile per accedere alle variabili e alle funzioni dei membri di un'istanza di classe.

 */