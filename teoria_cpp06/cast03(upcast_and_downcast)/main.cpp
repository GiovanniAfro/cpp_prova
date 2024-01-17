/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:41:28 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/17 15:03:45 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent                {};
class Child1: public Parent {};
class Child2: public Parent {};

int     main(void)
{
    Child1          a;                  //Reference values

    Parent *        b = &a;             //Explicit reinterpretation const
    Parent *        c = (Parent *) &a;  //Explicit reinterpretation const

    Parent *        d = &a;             //Implicit upcast   -> Ok
    Child1 *        e = d;              //Implicit downcast -> Hell no !
    Child2 *        f = (Child2 *) d;   //Explicit downcast -> Ok, but really ?

    return 0;
}

// L'upcast è una conversione implicita da un tipo derivato a un tipo base. 
// Questo significa che è possibile assegnare un oggetto di una classe derivata a un puntatore o a un riferimento di una classe base. 
// Ad esempio, nella riga Parent *b = &a;, l'oggetto a di tipo Child1 viene assegnato a un puntatore di tipo Parent. 
// Questo è un upcast implicito e viene eseguito senza problemi.

// Il downcast, d'altra parte, è una conversione esplicita da un tipo base a un tipo derivato. 
// Questo significa che è possibile assegnare un puntatore o un riferimento di una classe base a un puntatore o un riferimento di una classe derivata.
// Tuttavia, il downcast può essere rischioso perché non è garantito che l'oggetto puntato sia effettivamente un'istanza della classe derivata. 
// Ad esempio, nella riga Child1 *e = d;, si sta cercando di eseguire un downcast del puntatore d di tipo Parent a un puntatore di tipo Child1. 
// Questo è un downcast implicito e genera un errore perché non è possibile garantire che d punti effettivamente a un oggetto di tipo Child1.

// Nel codice fornito, viene anche mostrato un downcast esplicito nella riga Child2 *f = (Child2 *) d;. 
// Qui, viene eseguito un downcast del puntatore d di tipo Parent a un puntatore di tipo Child2. 
// Anche se questo downcast è esplicito, è comunque rischioso perché non è garantito che d punti effettivamente a un oggetto di tipo Child2.

// In generale, l'upcast è sicuro perché un oggetto di una classe derivata è sempre anche un oggetto della classe base. 
// Tuttavia, il downcast può essere rischioso e dovrebbe essere eseguito solo se si è sicuri che l'oggetto puntato sia 
// effettivamente un'istanza della classe derivata.


// Spiegazione del Codice:
// Upcast:

// Un upcast avviene quando un puntatore o un riferimento a una classe derivata viene implicitamente o esplicitamente convertito in un puntatore o un riferimento alla classe base.
// In questo caso, d è un esempio di upcast implicito, mentre b e c sono esempi di upcast esplicito.
// Downcast:

// Un downcast avviene quando un puntatore o un riferimento a una classe base viene convertito in un puntatore o un riferimento a una classe derivata. 
// Il downcast è considerato più rischioso perché il puntatore potrebbe non puntare effettivamente a un oggetto della classe derivata.
// In questo caso, e è un esempio di downcast implicito, mentre f è un esempio di downcast esplicito.
// Perché Capire e Conoscere Questi Concetti:
// Sicurezza e Correttezza del Codice:

// Capire upcast e downcast è fondamentale per scrivere codice sicuro. 
// I downcast impliciti possono comportare comportamenti indefiniti e errori difficili da individuare.
// Polimorfismo:

// L'upcasting è spesso utilizzato in situazioni di polimorfismo, 
// dove un puntatore alla classe base può essere utilizzato per accedere agli oggetti delle classi derivate. 
// Questo consente un uso flessibile dei tipi senza la necessità di conoscere il tipo specifico a tempo di compilazione.
// Gestione di Classi Derivate:

// Downcasting esplicito può essere utile quando si sa con certezza che un oggetto è di un tipo specifico. 
// Tuttavia, deve essere utilizzato con attenzione, poiché non è garantito che un oggetto sia effettivamente di un tipo specifico.
// Strutture a Gerarchia Multipla:

// Quando si lavora con gerarchie di classi multiple, la comprensione di upcast e downcast è ancora più importante. 
// Si possono verificare situazioni in cui un oggetto può essere trattato come un'istanza di più di una classe.
// Dynamic Cast (C++):

// In C++, si può utilizzare l'operatore dynamic_cast per eseguire downcast in modo sicuro. 
// Questo operatore verifica dinamicamente il tipo dell'oggetto e restituisce un puntatore valido alla classe derivata se l'oggetto è effettivamente di quel tipo.
// Utilità Pratica:
// Evitare Errori di Runtime:

// La comprensione di upcast e downcast è essenziale per evitare errori di runtime quando si lavora con classi derivate e base.
// Sfruttare il Polimorfismo:

// L'upcasting consente l'utilizzo flessibile di oggetti derivati attraverso puntatori o riferimenti alla classe base, sfruttando il polimorfismo.
// Sicurezza nel Downcasting:

// L'utilizzo di downcast esplicito e sicuro (ad esempio, attraverso dynamic_cast) è importante per garantire che il puntatore punti effettivamente a un oggetto della classe derivata desiderata.
// Comprensione delle Relazioni di Ereditarietà:

// Capire questi concetti contribuisce a una migliore progettazione delle classi e alla gestione delle relazioni di ereditarietà all'interno del tuo codice.
// In breve, la comprensione di upcast e downcast è cruciale per garantire la sicurezza e la correttezza del codice quando si lavora con ereditarietà in programmazione orientata agli oggetti. 
// Essere consapevoli di questi concetti aiuta a scrivere codice più robusto e manutenibile.