/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:25:38 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 13:43:05 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
    Sample joejoe;

    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    
    return;
}

void f1(void)
{
    Sample joejoe;

    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    f0();

    return;
}

int main()
{
    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;

    return 0;
}



/* Gli attributi non membri e le funzioni non membri si riferiscono a membri di una classe 
che non sono associati a un'istanza specifica di quella classe, 
ma piuttosto sono condivisi tra tutte le istanze della classe stessa.

Nel tuo codice, la classe "Sample" ha un attributo non membro e una funzione non membro:

1. Attributo non membro:
   
   static int _nbInst;

   Questo è un attributo statico, il che significa che è condiviso tra tutte le istanze della classe "Sample".
    In questo caso, "_nbInst" tiene traccia del numero di istanze create della classe "Sample". Viene inizializzato a 0.

2. Funzione non membro:
 
   static int getNbInst(void);

   Questa è una funzione statica, il che significa che può essere chiamata senza creare un'istanza della classe.
    La funzione restituisce il valore dell'attributo statico "_nbInst", che rappresenta il numero di istanze create della classe "Sample".

Ora, vediamo come vengono utilizzati questi concetti nel tuo codice:

- Nel costruttore di "Sample" (Sample::Sample(void)), ogni volta che viene creata un'istanza della classe,
 "_nbInst" viene incrementato di 1, tenendo traccia del numero di istanze.

- Nel distruttore di "Sample" (Sample::~Sample(void)), 
ogni volta che un'istanza viene distrutta, "_nbInst" viene decrementato di 1, in modo da riflettere l'eliminazione dell'istanza.

- La funzione statica "Sample::getNbInst(void)" 
viene utilizzata per ottenere il valore corrente di "_nbInst" in qualsiasi momento.

- Nel codice principale (funzione "main"),
 vengono create istanze della classe "Sample" e chiamate le funzioni per mostrare il conteggio delle istanze create e distrutte.
 */