/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:46:19 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/19 19:13:28 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void byPtr(std::string* str)
{
    *str += " and ponies";
}

void byConstPtr(const std::string* str)
{
    std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
    str += " and ponies";
}

void byConstRef(const std::string& str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "I like otters";

    std::cout << str << std::endl;

    // Passaggio per puntatore
    byPtr(&str);

    // Passaggio per puntatore constante
    byConstPtr(&str);

    str = "A me piacciono i treni";

    std::cout << str << std::endl;

    // Passaggio per riferimento
    byRef(str);

    // Passaggio per riferimento costante
    byConstRef(str);

    return 0;
}


// ### Passaggio per Puntatore (`void byPtr(std::string* str)`):
// - Il parametro `str` è un puntatore a una stringa.
// - La funzione può modificare la stringa attraverso il puntatore, ad esempio aggiungendo " and ponies".

// ### Passaggio per Puntatore Costante (`void byConstPtr(const std::string* str)`):
// - Il parametro `str` è un puntatore costante a una stringa.
// - La funzione non può modificare la stringa attraverso il puntatore, garantendo l'immutabilità.

// ### Passaggio per Riferimento (`void byRef(std::string& str)`):
// - Il parametro `str` è un riferimento a una stringa.
// - La funzione può modificare direttamente la stringa attraverso il riferimento.

// ### Passaggio per Riferimento Costante (`void byConstRef(const std::string& str)`):
// - Il parametro `str` è un riferimento costante a una stringa.
// - La funzione non può modificare direttamente la stringa attraverso il riferimento, ma può accedere a essa in modo efficiente.

// ### Differenze chiave:
// - **Puntatori:**
//   - Devi gestire esplicitamente il dereferenziamento (`*`) e l'indirizzamento (`&`).
//   - Può essere più flessibile in quanto può essere fatto puntare a nulla (`nullptr`).
//   - Può essere usato per ottenere un'efficienza maggiore nella gestione della memoria.

// - **Riferimenti:**
//   - Sintassi più pulita, senza bisogno di dereferenziamento esplicito.
//   - Non può essere reso referente a nulla, il che impedisce l'uso accidentale di indirizzi nulli.
//   - Spesso preferiti per la loro chiarezza e sicurezza.

// Entrambe le forme sono utili in diverse situazioni.
//  L'uso di riferimenti costanti è particolarmente consigliato quando si vuole evitare modifiche accidentali ai dati.
