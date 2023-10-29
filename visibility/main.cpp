/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:49:25 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 17:02:29 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.publicFoo = 42;
    //instance._privateFoo = 24;

    std::cout << "This is the public variabile = " << instance.publicFoo << std::endl;
    //std::cout << "This is the private variabile = " << instance._privateFoo << std::endl;

    instance.publicBar();
    //instance._privateBar();

    return 0;
}

/*
In C++, il concetto di visibilità si riferisce alla capacità di accedere agli elementi di una classe,
 come le variabili e le funzioni, da altre parti del codice. 
 Ci sono due livelli principali di visibilità in C++: public e private.

Public (Pubblico):
Gli elementi dichiarati come pubblici all'interno di una classe sono accessibili da qualsiasi parte
 del codice che ha accesso all'oggetto di quella classe.
Questo livello di visibilità è utilizzato per le funzioni e le variabili che dovrebbero
 essere accessibili da altre parti del programma che utilizzano l'oggetto della classe.
Ad esempio, se dichiari una funzione come pubblica all'interno di una classe,
 puoi chiamare quella funzione da altre parti del programma.

 Private (Privato):
Gli elementi dichiarati come privati all'interno di una classe non sono accessibili 
da altre parti del codice al di fuori della classe stessa.
Questo livello di visibilità è utilizzato per nascondere i 
dettagli interni di una classe e proteggerli da accessi non autorizzati.
Solo le funzioni membro della stessa classe possono accedere agli elementi privati.

Quindi, in sintesi, public e private sono modificatori di accesso che consentono di 
controllare quali parti del codice possono accedere agli elementi di una classe. 
I membri pubblici sono accessibili da qualsiasi parte del programma,
 mentre i membri privati sono accessibili solo dalla stessa classe.*/