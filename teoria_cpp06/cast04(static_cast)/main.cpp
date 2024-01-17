/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:13:31 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/17 15:22:56 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent                {};
class Child1: public Parent {};
class Child2: public Parent {};

class Unreload              {};

int     main(void)
{
    Child1          a;                  //Reference values

    Parent *        b = &a;             //Implicit upcast -> ok
    Child1 *        c = b;              //Implicit downcast -> Hell no!
    Child2 *        d = static_cast<Child2 *>(b) //Explicit downcast -> OK, I obey

    Unreload *      e = static_cast<Unreload *>(&a) //Explicit conversion -> No!

    return 0;
}

// Spiegazione del Codice:
// Upcast Implicito:

// b è un esempio di upcast implicito, in cui un puntatore alla classe derivata (Child1) viene assegnato a un puntatore alla classe base (Parent).
//  Questo è consentito senza l'uso di static_cast.
// Downcast Implicito:

// c è un esempio di downcast implicito, in cui un puntatore alla classe base (Parent) viene assegnato a un puntatore alla classe derivata (Child1). Questo è pericoloso e può portare a comportamenti indefiniti. Il compilatore potrebbe non segnalare un errore, 
// ma potrebbe causare errori a runtime.
// Downcast Esplicito con static_cast:

// d è un esempio di downcast esplicito con static_cast. In questo caso, il programmatore indica esplicitamente che è consapevole del downcast e lo esegue. Sebbene sia più sicuro di un downcast implicito, deve essere utilizzato con cautela.
// Conversione Esplicita con static_cast:

// e è un esempio di conversione esplicita con static_cast. Questo tentativo di convertire un puntatore a un oggetto di tipo Child1 a un puntatore a un oggetto di tipo Unreload non è valido e potrebbe portare a errori o comportamenti indefiniti.
// Utilità di static_cast:
// Downcast Sicuro:

// static_cast può essere utilizzato per downcast esplicito, rendendo il codice più sicuro rispetto ai downcast impliciti.
// Conversioni di Tipo Statiche:

// static_cast è utile per effettuare conversioni di tipo statiche durante la compilazione quando si conosce a priori la sicurezza dell'operazione.
// Conversioni tra Tipi Compatibili:

// Può essere utilizzato per conversioni tra tipi compatibili, come nel caso del downcast da un puntatore alla classe base a un puntatore alla classe derivata.
// Conversione di Puntatori void:

// static_cast può essere utilizzato per convertire puntatori void * in puntatori di altri tipi.
// Importanza della Comprendere e Conoscere static_cast:
// Sicurezza nelle Conversioni:

// L'utilizzo di static_cast in downcast espliciti contribuisce a rendere più sicuro il codice rispetto alle conversioni implicite.
// Chiarezza nel Codice:

// L'uso di static_cast esplicito indica chiaramente al lettore del codice che il programmatore è consapevole di ciò che sta facendo e che il downcast è intenzionale.
// Prevenzione di Errori a Runtime:

// L'utilizzo di static_cast può aiutare a prevenire errori a runtime associati a downcast non sicuri.
// Conversioni di Tipo Conoscibili:

// Quando si effettuano conversioni di tipo statiche con static_cast, si ottiene un maggiore controllo sulle conversioni e una maggiore consapevolezza di cosa sta accadendo a livello di tipo.
// Facilità di Lettura del Codice:

// La presenza esplicita di static_cast rende il codice più leggibile, poiché indica chiaramente le conversioni di tipo che si stanno svolgendo.
// In conclusione, static_cast è uno strumento utile per eseguire conversioni di tipo statiche durante la compilazione e deve essere utilizzato con attenzione, soprattutto in situazioni di downcasting, per garantire la sicurezza e la chiarezza del codice.