/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:10:06 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 15:32:11 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main()
{
    // Leggere da un file
    std::ifstream ifs("numbers");  // Apre il file "numbers" in modalità lettura

    unsigned int dts;
    unsigned int dst2;

    // Legge due interi dal file
    ifs >> dts >> dst2;

    // Stampa i valori letti
    std::cout << dts << " " << dst2 << std::endl;

    // Chiude il file dopo l'uso
    ifs.close();

    //-------------------

    // Scrivere su un file
    std::ofstream ofs("test.out");  // Apre o crea il file "test.out" in modalità scrittura

    // Scrive una stringa nel file
    ofs << "I like a whole damn lot" << std::endl;

    // Chiude il file dopo l'uso
    ofs.close();

    return 0;
}


// ### Lettura da un File (`std::ifstream`):
// - `std::ifstream` è utilizzato per la lettura da un file.
// - Viene creato un oggetto `ifs` di tipo `std::ifstream` associato al file "numbers".
// - `ifs >> dts >> dst2;` legge due interi dal file.

// ### Scrittura su un File (`std::ofstream`):
// - `std::ofstream` è utilizzato per la scrittura su un file.
// - Viene creato un oggetto `ofs` di tipo `std::ofstream` associato al file "test.out".
// - `ofs << "I like a whole damn lot" << std::endl;` scrive una stringa nel file seguita da un carattere di nuova linea.

// ### Chiusura dei File:
// - Entrambi i file vengono chiusi dopo l'utilizzo mediante i metodi `close()` delle rispettive classi.

// ### Modalità di Apertura:
// - Quando il costruttore di `std::ifstream` o `std::ofstream` è chiamato con un nome di file, il file viene aperto in modalità predefinita:
//   - `std::ifstream` si apre in modalità lettura (`std::ios::in`).
//   - `std::ofstream` si apre in modalità scrittura (`std::ios::out`).

// ### Altre Modalità di Apertura:
// - Per aprire un file in modalità specifica, puoi fornire un secondo argomento al costruttore, ad esempio:
//   - `std::ifstream ifs("numbers", std::ios::binary);` per aprire in modalità binaria.
//   - `std::ofstream ofs("test.out", std::ios::app);` per aprire in modalità append.

// ### Controllo di Apertura:
// - È buona pratica controllare se l'apertura del file ha avuto successo, verificando lo stato del flusso con `ifs.is_open()` o `ofs.is_open()` prima di utilizzare il file.

// Questo tipo di operazioni di lettura/scrittura su file è fondamentale per l'interazione con dati persistenti e consente di gestire informazioni tra esecuzioni del programma.