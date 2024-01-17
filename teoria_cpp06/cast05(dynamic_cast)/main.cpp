/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:10:08 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/17 16:53:41 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent        {public: virtual ~Parent(void) {}};
class Child1: public Parent{};
class Child2: public Parent{};


int     main(void)
{
    Child1          a;                  //Reference value
    Parent *        b = &a;             //Implicit upcast ->OK

    //Explicit Downcast -> Suspence...
    Child1 *    c = dynamic_cast<Child1 *>(b);
    if (c == NULL)
        std::cout << "Conversion is NOT Ok" <<std::endl;
    else
        std::cout << "Conversion is ok" << std::endl;


    //Explcit downcast -> Suspence..
    try
    {
        Child2 & d = dynamic_cast<Child2 &>(*b);
        std::cout << "Conversion is Ok" << std::endl;
    }
    catch(const std::bad_cast &bc)
    {
        std::cout << "Conversion is NOT ok: " << bc.what() <<std::endl;
        return 0;
    }

    return 0;
    
}

// Spiegazione del Codice:
// Upcast Implicito:

// b è un esempio di upcast implicito, dove un puntatore alla classe derivata (Child1) viene assegnato a un puntatore alla classe base (Parent).
// Downcast Esplicito con dynamic_cast:

// c è un esempio di downcast esplicito con dynamic_cast. La chiave qui è che Parent deve avere almeno una funzione virtuale per poter utilizzare dynamic_cast. In questo caso, Parent ha un distruttore virtuale.
// Se la conversione riesce, il puntatore c sarà diverso da nullptr. Altrimenti, c sarà nullptr, e il programma può gestire questo fallimento.
// Downcast Esplicito con Gestione delle Eccezioni:

// d è un esempio di downcast esplicito con dynamic_cast utilizzando anche la gestione delle eccezioni (std::bad_cast).
// Se la conversione riesce, verrà eseguito il blocco try e la conversione sarà considerata riuscita. Se la conversione fallisce, verrà gestita l'eccezione e verrà eseguito il blocco catch corrispondente.
// Utilità di dynamic_cast:
// Downcast Sicuro:

// dynamic_cast viene utilizzato per downcast sicuri in situazioni di ereditarietà, soprattutto quando si lavora con classi polimorfiche.
// Verifica Dinamica del Tipo:

// dynamic_cast fornisce una verifica dinamica del tipo durante l'esecuzione, consentendo al programma di effettuare conversioni sicure in base al tipo effettivo dell'oggetto.
// Gestione delle Eccezioni:

// In combinazione con la gestione delle eccezioni, dynamic_cast permette di affrontare in modo più robusto i fallimenti di conversione e di gestire la situazione di errore in modo controllato.
// Classi Polimorfiche:

// È particolarmente utile quando si lavora con classi polimorfiche, poiché consente al programma di effettuare downcast in base al tipo reale degli oggetti durante l'esecuzione.
// Importanza di Capire e Conoscere dynamic_cast:
// Sicurezza nelle Conversioni:

// dynamic_cast è essenziale per eseguire downcast in modo sicuro, riducendo il rischio di comportamenti indefiniti associati ai downcast non sicuri.
// Gestione dei Tipi in Gerarchie Complesse:

// Quando si lavora con gerarchie di classi più complesse e polimorfiche, dynamic_cast diventa cruciale per gestire i tipi in modo efficace durante l'esecuzione.
// Robustezza del Codice:

// Utilizzando dynamic_cast, il codice diventa più robusto e meno suscettibile agli errori associati ai downcast non sicuri.
// Prevenzione di Problemi a Runtime:

// L'utilizzo di dynamic_cast può prevenire errori a runtime associati a downcast non sicuri, fornendo una verifica dinamica del tipo durante l'esecuzione.
// Utilizzo con Classi Polimorfiche:

// dynamic_cast è particolarmente utile quando si lavora con classi polimorfiche, poiché consente di effettuare conversioni basate sul tipo reale dell'oggetto durante l'esecuzione.
// In conclusione, dynamic_cast è uno strumento essenziale quando si lavora con classi polimorfiche e si desidera eseguire downcast in modo sicuro durante l'esecuzione. La sua comprensione è cruciale per scrivere codice robusto e sicuro nelle situazioni di ereditarietà.