/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ci1.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:06:42 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/08 15:08:14 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Cat
{
	public:
	class Leg
	{
		//[...]
	};
};

class Dog
{
	public:
	class Leg
	{
		//[...]
	};
};

int	main()
{
	Cat		somecat;
	Cat::Leg somecatsLeg;
}


/* Le classi nidificate in C++ sono classi definite all'interno di un'altra classe.
Questa tecnica offre diversi vantaggi in termini di organizzazione del codice, incapsulamento e visibilità.
Ecco alcuni dei motivi principali per cui le classi nidificate vengono utilizzate:

1. **Organizzazione del Codice:**
   - Le classi nidificate possono essere utilizzate per organizzare logicamente il codice,
   raggruppando insieme le classi che hanno una relazione stretta o condividono uno scopo comune.
   - Questo rende più facile comprendere la struttura del codice, specialmente quando si lavora con progetti complessi.

2. **Incapsulamento:**
   - Una classe nidificata ha accesso completo ai membri privati della classe contenente, consentendo un alto grado di incapsulamento.
   - Ciò significa che i dettagli interni delle classi nidificate possono essere nascosti all'esterno della classe contenente, favorendo la modularità e la manutenibilità del codice.

3. **Scoping:**
   - Le classi nidificate creano uno scope separato. Ciò significa che è possibile utilizzare lo stesso nome per le classi nidificate in classi diverse senza conflitti.
   - Ad esempio, nel tuo esempio, sia la classe `Created` che la classe `Dog` possono avere una classe `Leg` senza che ciò crei ambiguità.

4. **Riutilizzo del Codice:**
   - Le classi nidificate possono essere utilizzate per implementare concetti che sono specifici per la classe contenente, contribuendo al riutilizzo del codice.
   - Ad esempio, entrambe le classi `Created` e `Dog` possono avere una classe `Leg`, ma ognuna può implementare il concetto di "gamba" in modo specifico per la sua logica interna.

5. **Design Orientato agli Oggetti:**
   - Le classi nidificate possono riflettere in modo più accurato la struttura gerarchica di un sistema, contribuendo a un design più orientato agli oggetti.
   - Ad esempio, potresti avere una classe principale `Vehicle` che contiene classi nidificate come `Engine`, `Wheel`, ecc.

In generale, l'utilizzo delle classi nidificate dipende dalla struttura e dalle esigenze specifiche del progetto.
Possono essere una potente tecnica di progettazione quando utilizzate in modo appropriato per migliorare la chiarezza, la modularità e la manutenibilità del codice. */