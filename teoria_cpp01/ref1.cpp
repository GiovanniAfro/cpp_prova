/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:31:23 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 12:41:22 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int NumeroDiPalle = 42;

    // Puntatore
    int* PtrPalle = &NumeroDiPalle;

    // Riferimento
    int& RefPalle = NumeroDiPalle;

    // Stampa il valore di NumeroDiPalle, ottenuto in tre modi diversi
    std::cout << NumeroDiPalle << " " << *PtrPalle << " " << RefPalle << std::endl;

    // Modifica il valore attraverso il puntatore
    *PtrPalle = 21;
    std::cout << NumeroDiPalle << std::endl; // Stampa 21

    // Modifica il valore attraverso il riferimento
    RefPalle = 69;
    std::cout << NumeroDiPalle << std::endl; // Stampa 69

    return 0;
}

// ### Puntatori (`int* PtrPalle`):
// - Un puntatore è una variabile il cui valore è l'indirizzo di memoria di un'altra variabile.
// - L'operatore `&` viene utilizzato per ottenere l'indirizzo di memoria di una variabile.
// - L'operatore `*` viene utilizzato per accedere al valore memorizzato all'indirizzo di memoria puntato dal puntatore.

// ### Riferimenti (`int& RefPalle`):
// - Un riferimento è un alias (un altro nome) per una variabile esistente. (o come dice nel video un puntatore const, che non puo essere void)
// - Un riferimento viene dichiarato utilizzando `&` dopo il tipo di dato.
// - Una volta che un riferimento è stato inizializzato, non può essere fatto puntare a un'altra variabile.
// - L'operatore `&` in questo contesto non è l'operatore di indirizzo, ma fa parte del tipo di dato del riferimento.

// ### Differenze:
// - **Modifica del valore:**
//   - Attraverso il puntatore, puoi modificare il valore puntato utilizzando l'operatore `*`.
//   - Attraverso il riferimento, puoi modificare direttamente il valore della variabile a cui fa riferimento senza usare un operatore specifico.

// - **Inizializzazione:**
//   - Un puntatore può essere inizializzato in un secondo momento per puntare a un altro oggetto o può essere inizializzato subito con l'indirizzo di una variabile esistente.
//   - Un riferimento deve essere inizializzato quando viene dichiarato, e una volta che è stato inizializzato, non può essere reso referente a un'altra variabile.

// Entrambi i puntatori e i riferimenti sono utilizzati per manipolare indirettamente i dati in memoria e hanno situazioni in cui sono più appropriati. 
// I riferimenti sono spesso considerati più sicuri e convenienti, mentre i puntatori offrono maggiore flessibilità.