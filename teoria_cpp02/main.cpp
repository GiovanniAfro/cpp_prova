/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:59:19 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 15:09:16 by gcavanna         ###   ########.fr       */
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