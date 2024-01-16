/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeptions1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:11:47 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/08 15:45:31 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Le eccezioni in C++ sono un meccanismo che consente di gestire 
situazioni anomale o errori durante l'esecuzione di un programma in modo più strutturato ed elegante.
Esse offrono un modo di separare il normale flusso di esecuzione dal trattamento degli errori.
Vediamo come funziona il codice fornito e poi approfondiremo il concetto di eccezioni.
 */
#include <stdexcept>

void test1()
{
    try
    {
        // Esegui qualche operazione qui
        if (/* c'è un errore */)
        {
            throw std::exception();
        }
        else
        {
            // Fai altro
        }
    }
    catch (std::exception e)
    {
        // Gestisci l'errore qui
    }
}

void test2()
{
    // Esegui qualche operazione qui
    if (/* c'è un errore */)
    {
        throw std::exception();
    }
    else
    {
        // Fai altro
    }
}

void test3()
{
    try
    {
        test2();
    }
    catch (std::exception& e)
    {
        // Gestisci l'errore
    }
}

void test4()
{
    class PEBKACException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Problem exists between keyboard and chair";
        }
    };

    try
    {
        test3();
    }
    catch (PEBKACException& e)
    {
        // Gestisci il fatto che l'utente è un idiota
    }
    catch (std::exception& e)
    {
        // Gestisci altre eccezioni simili a std::exception
    }
}

/* **Spiegazione:**

1. **`throw`:**
   - La parola chiave `throw` viene utilizzata per lanciare un'eccezione. Quando si verifica un errore o una situazione anomala, puoi "lanciare" un oggetto eccezione.
   Nel tuo caso, stai lanciando un oggetto di tipo `std::exception`.

2. **`try-catch`:**
   - L'istruzione `try` delimita un blocco di codice in cui potrebbe verificarsi un'eccezione. Se un'eccezione viene lanciata all'interno del blocco `try`,
   il controllo passa al blocco `catch` corrispondente.
   - Il blocco `catch` specifica il tipo di eccezione che si desidera gestire e fornisce un blocco di codice che verrà eseguito solo se viene lanciata un'eccezione di quel tipo.

3. **Tipi di Eccezioni:**
   - Nel tuo codice, viene utilizzata `std::exception` come eccezione generica. Tuttavia, è comune definire eccezioni personalizzate (come `PEBKACException` nel tuo esempio)
   derivando dalla classe `std::exception`.

4. **`what()` e `throw()`:**
   - La funzione `what()` è virtuale e viene utilizzata per ottenere una descrizione dell'eccezione. Nel caso della tua eccezione personalizzata `PEBKACException`,
   essa restituisce una stringa che indica un errore specifico.
   - `throw()` specifica che la funzione `what()` non solleverà eccezioni.

5. **Riferimenti:**
   - Quando si gestiscono eccezioni, è comune utilizzare riferimenti anziché copiare l'oggetto eccezione.
   Questo è più efficiente e inoltre consente di manipolare l'oggetto eccezione all'interno del blocco `catch`.

6. **Quando Usare le Eccezioni:**
   - Le eccezioni sono spesso utilizzate per segnalare situazioni di errore gravi o eccezionali. Ad esempio, errori di runtime, problemi di allocazione di memoria,
   o situazioni impreviste che potrebbero compromettere l'integrità del programma.
   - Dovresti evitare di utilizzare eccezioni per il controllo del flusso normale del programma, poiché possono avere un impatto sulle prestazioni.

7. **Gestione delle Eccezioni:**
   - La gestione delle eccezioni consente di separare la logica normale del programma dalla logica di gestione degli errori. Ciò rende il codice più pulito e più leggibile.

8. **Multi-Level Catch:**
   - Puoi utilizzare più blocchi `catch` per gestire diversi tipi di eccezioni. L'ordine è importante: i blocchi `catch` più specifici dovrebbero precedere quelli più generici.

In sintesi, le eccezioni in C++ forniscono un modo strutturato per gestire situazioni anomale,
migliorando la manutenibilità del codice e la sua capacità di gestire errori in modo elegante.
Tuttavia, è importante utilizzare le eccezioni con attenzione e in modo appropriato per evitare impatti negativi sulle prestazioni e mantenere un codice pulito e comprensibile.  */