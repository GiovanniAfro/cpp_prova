/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:09:10 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/27 15:47:03 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

/* int main(void)
{
    Sample instance;

    return 0;
} */

int main(void)
{
    Macchina mia;
    Sample joejoe;

    mia.marca = "Ferrari";
    mia.anno = 2022;
    mia.accelera();

    return 0;
}

/* Classe come Modello:
In C++, una classe è come un modello da cui puoi creare oggetti.
 Immagina che una classe sia come il disegno tecnico o il progetto di una macchina, mentre un oggetto è l'auto effettiva costruita in base a quel progetto.

Dichiarazione di una Classe:
Nella 42, imparerai a dichiarare una classe utilizzando la parola chiave class. 
All'interno della classe, puoi definire variabili (membri dati) e funzioni (metodi) che saranno associati a oggetti creati dalla classe.

Creazione di Oggetti:
Una volta dichiarata una classe, puoi creare oggetti basati su di essa utilizzando il nome della classe seguito da un nome di variabile. 
Ad esempio, Auto miaAuto; crea un oggetto chiamato miaAuto basato sulla classe Auto.

Accesso ai Membri:
Nella 42, verrai probabilmente insegnato che i membri di una classe possono avere diversi livelli di accesso.
 Puoi dichiararli come public, private, o protected.
  Con public, i membri possono essere accessibili ovunque nel codice, con private, i membri sono accessibili solo all'interno della classe stessa.

Membri Dati e Metodi:
I membri dati sono le variabili all'interno di una classe che memorizzano informazioni.
 I metodi sono funzioni che definiscono il comportamento dell'oggetto.
  Ad esempio, una classe Auto potrebbe avere membri dati come marca e anno, e metodi come accelera().

Costruttori e Distruttori:
Nella 42, ti insegneranno a utilizzare costruttori e distruttori per inizializzare e rilasciare risorse legate agli oggetti. 
Il costruttore è chiamato quando un oggetto viene creato, mentre il distruttore è chiamato quando un oggetto viene distrutto.
 Questi sono importanti per la gestione delle risorse.

Le classi in C++ sono un concetto fondamentale che ti aiuterà a organizzare il tuo codice in modo più strutturato e a creare oggetti
 che rappresentano concetti del mondo reale.
  Alla 42, avrai molte opportunità per esercitarti nell'utilizzo delle classi e acquisire familiarità con i concetti legati all'orientamento agli oggetti. */