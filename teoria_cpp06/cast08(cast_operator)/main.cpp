/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:04:00 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/19 11:14:47 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Foo
{
    public:

    Foo (float const v) : _v(v) {}

    float  getV(void)       {return this -> _v;}

    operator float()        {return this->_v;}
    operator int()          {return static_cast<int>(this->_v); }

    private:
        float _v;
};


int main(void)
{
    Foo a(420.024f);
    float   b = a;
    int     c = a;

    std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0 ;
}

// Spiegazione del Codice:
// Costruttore di Foo:

// La classe Foo ha un costruttore che prende un parametro float e lo assegna al membro dati _v.
// Operatori di Conversione:

// La classe ha due operatori di conversione di tipo: uno che converte l'oggetto Foo a float e un altro che lo converte a int.
// Gli operatori di conversione sono definiti con la stessa sintassi di una funzione, ma senza un nome specifico. Possono essere chiamati implicitamente dal compilatore quando si effettuano conversioni di tipo.
// Uso degli Operatori di Conversione:

// Nel blocco main, vengono creati un oggetto Foo chiamato a e vengono dichiarate variabili b e c.
// Le variabili b e c vengono inizializzate utilizzando gli operatori di conversione implicita a float e int definiti nella classe Foo.
// Stampa dei Risultati:

// Vengono stampati il valore originale (a.getV()), la conversione a float (b) e la conversione a int (c).
// Utilità degli Operatori di Conversione:
// Sintassi Pulita:

// Gli operatori di conversione consentono di ottenere una sintassi più pulita quando si desidera effettuare conversioni di tipo. Il compilatore può chiamare automaticamente l'operatore di conversione quando necessario.
// Conversioni Impliciti:

// Gli operatori di conversione permettono di definire conversioni implicithe, che vengono eseguite automaticamente dal compilatore quando necessario.
// Conversioni Esplicite:

// Possono essere utilizzati anche come conversioni esplicite, quando è necessario forzare una conversione di tipo.
// Facilita l'Uso di Oggetti Personalizzati:

// Nelle classi personalizzate, gli operatori di conversione possono facilitare l'uso degli oggetti, consentendo la conversione implicita o esplicita in altri tipi.

// Quando Utilizzare Operatori di Conversione (Continuazione):
// Evitare Conversioni Ambigue o Inconsapevoli:

// Gli operatori di conversione possono essere utilizzati per evitare conversioni ambigue o inconsapevoli tra tipi di dati, garantendo che le conversioni avvengano in modo controllato.
// Nei Tipi di Dati Personalizzati:

// Sono particolarmente utili quando si lavora con tipi di dati personalizzati e si desidera semplificare l'interazione con oggetti di tali classi.
// Per Aggiungere Compatibilità:

// Possono essere utilizzati per aggiungere compatibilità con altre parti del codice che richiedono un tipo specifico.
// Considerazioni Importanti:
// Evitare Ambiguità:

// Gli operatori di conversione possono portare a situazioni ambigue. Assicurarsi che la conversione abbia senso nel contesto in cui viene utilizzata e che non porti a comportamenti inaspettati.
// Consapevolezza della Conversione Implicita:

// L'uso di operatori di conversione implicita può rendere il codice più conciso ma anche meno esplicito. Assicurarsi di essere consapevoli delle conversioni implicite che possono avvenire.
// Considerazioni sulle Prestazioni:

// Le conversioni di tipo implicite possono comportare un overhead in termini di prestazioni. Valutare attentamente l'impatto sulla performance, specialmente in situazioni in cui la conversione viene eseguita frequentemente.
// Utilizzo Ragionato:

// Utilizzare gli operatori di conversione con saggezza. Non abusarne e considerare alternative se ci sono modi più chiari e sicuri per esprimere la conversione di tipo.
// In conclusione, gli operatori di conversione forniscono uno strumento potente ma che deve essere usato con attenzione. Consentono di migliorare la leggibilità del codice, semplificare l'utilizzo di classi personalizzate e fornire un meccanismo di conversione controllato. Tuttavia, è essenziale utilizzarli con saggezza per evitare ambiguità e comportamenti inattesi nel codice.






