/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:59:19 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 15:27:32 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main(void)
{
	Sample instance;

	instance.bar('a');
	instance.bar(42);
	instance.bar(3.14f);

	Sample anotherInstance;
	instance.bar(anotherInstance);

	return 0;
}

/* L'overloading delle funzioni è un concetto chiave nella programmazione orientata agli oggetti e nel linguaggio di programmazione C++.
Consiste nella definizione di più funzioni con lo stesso nome all'interno di una classe, ma con firme diverse in termini di tipo o numero di parametri.
Il compilatore, in base al contesto in cui viene chiamata la funzione, selezionerà automaticamente la versione appropriata da eseguire.

In questo esempio, la classe Sample ha quattro versioni della funzione bar, ciascuna con un tipo di parametro diverso.
 Quando chiami la funzione bar nell'oggetto instance nel main, il compilatore seleziona automaticamente la versione corretta in base al tipo di argomento passato.

Quindi, l'overloading delle funzioni consente di scrivere codice più flessibile e comprensibile, 
permettendo alle funzioni di avere lo stesso nome ma di comportarsi in modo diverso a seconda del contesto in cui vengono chiamate. */


/* L'overloading delle funzioni è collegato al polimorfismo nel senso che entrambi sono concetti chiave della programmazione orientata agli oggetti e contribuiscono a rendere il codice più flessibile e estendibile.

    Polimorfismo: Il polimorfismo è il concetto di utilizzare un'interfaccia unificata per rappresentare oggetti di diverse classi. Ci sono due tipi principali di polimorfismo in C++: polimorfismo di compilazione (o polimorfismo statico) e polimorfismo di esecuzione (o polimorfismo dinamico).

        Polimorfismo di compilazione: Si ottiene attraverso il sovraccarico di funzioni e operator overloading. Il compilatore seleziona automaticamente la versione appropriata di una funzione o di un operatore in base al tipo degli argomenti in fase di compilazione.

        Polimorfismo di esecuzione: Si ottiene attraverso funzioni virtuali e ereditarietà. Qui, il binding delle funzioni avviene a tempo di esecuzione. Le funzioni virtuali consentono alle classi derivate di sovrascrivere le funzioni della classe base.

    Overloading delle funzioni: Consiste nella definizione di più funzioni con lo stesso nome all'interno di una classe, ma con firme diverse in termini di tipo o numero di parametri. L'overloading delle funzioni contribuisce al polimorfismo di compilazione, poiché il compilatore seleziona automaticamente la versione appropriata della funzione in base ai tipi di argomenti forniti.

In breve, l'overloading delle funzioni è una forma di polimorfismo di compilazione, che consente di scrivere codice più flessibile e comprensibile. Mentre il polimorfismo di esecuzione (usando funzioni virtuali) consente una flessibilità ancora maggiore durante l'esecuzione del programma, l'overloading delle funzioni è un modo di ottenere polimorfismo a livello di compilazione, che è risolto dal compilatore prima dell'esecuzione del programma. Entrambi contribuiscono a una progettazione più efficiente e modularità del codice in C++. */