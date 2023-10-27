/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:06:11 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/27 16:18:09 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destrcuctor called" << std::endl;
    return;
}

/* Il costruttore viene chiamato quando un oggetto di tipo Sample viene creato.
 In questo caso, quando un oggetto Sample viene istanziato, verrà visualizzato "Constructor called" sulla console.
  Il costruttore non restituisce un valore esplicito (return), ma è comunque considerato come se restituisse void (niente) in quanto è un costruttore. 
  Il suo scopo principale è inizializzare l'oggetto e le sue risorse, se necessario. */


/* Il distruttore viene chiamato automaticamente quando un oggetto di tipo Sample esce dallo scope (ad esempio, alla fine di una funzione) o viene eliminato.
In questo caso, quando un oggetto Sample viene distrutto, verrà visualizzato "Destructor called" sulla console.
Anche il distruttore non restituisce un valore esplicito (return). Il suo scopo principale è eseguire operazioni di pulizia o rilascio delle risorse, se necessario.

Questo codice rappresenta una classe Sample con un costruttore e un distruttore molto semplici.
La classe è utilizzata per illustrare il concetto di costruttori e distruttori in C++. 
Quando crei un oggetto Sample o lo distruggi, verranno visualizzati i messaggi appropriati sulla console per indicare quando vengono chiamati il costruttore e il distruttore.
 */

/* 
In programmazione, il "scope" (ambito o contesto) si riferisce alla porzione di codice in cui una variabile o un oggetto è visibile e può essere utilizzato. 
In altre parole, il scope determina dove una variabile è "valida" e può essere acceduta.

Ci sono principalmente due tipi di scope:

1. **Scope Globale:** Le variabili definite al di fuori di tutte le funzioni o classi hanno uno "scope globale".
 Queste variabili sono accessibili da qualsiasi parte del programma, in tutte le funzioni e classi. Ad esempio:


int variabileGlobale = 10;  // Variabile globale

int main() {
    cout << variabileGlobale;  // La variabile globale è accessibile in main()
    return 0;
}


2. **Scope Locale:** Le variabili definite all'interno di una funzione o di un blocco di codice hanno uno "scope locale". 
Queste variabili sono visibili e accessibili solo all'interno della funzione o del blocco in cui sono dichiarate. Ad esempio:


int main() {
    int variabileLocale = 20;  // Variabile locale

    // variabileLocale è visibile solo all'interno di main()
    cout << variabileLocale;

    return 0;
}


Le variabili locali all'interno di una funzione o di un blocco esistono solo mentre la funzione o il blocco sono in esecuzione e vengono distrutte quando esce dallo scope.
 Questo è particolarmente importante quando si tratta di variabili all'interno delle funzioni e oggetti che hanno un ciclo di vita limitato. 
 Gli oggetti, ad esempio, possono essere creati all'interno di una funzione e distrutti quando escono dallo scope della funzione stessa.

In sintesi, il "scope" si riferisce all'ambito o al contesto in cui una variabile o un oggetto è visibile e accessibile. 
Comprendere il concetto di scope è fondamentale per scrivere codice corretto e mantenibile in programmazione. */