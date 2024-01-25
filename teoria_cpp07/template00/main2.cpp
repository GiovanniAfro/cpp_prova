/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:39:55 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/25 15:57:27 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Definizione della classe template
template<typename T>
class List {
public:
    // Costruttore che accetta un argomento di tipo T
    List<T>(T const &content) {
        // Implementazione del costruttore...
    }

    // Costruttore di copia che accetta un oggetto List dello stesso tipo T
    List<T>(List<T> const &list) {
        // Implementazione del costruttore di copia...
    }

    // Distruttore
    ~List<T>() {
        // Implementazione del distruttore...
    }

    // Altre funzioni o membri della classe...

private:
    T* _content;   // Puntatore al contenuto della lista di tipo T
    List<T>* _next; // Puntatore al prossimo elemento della lista di tipo T
};

int main() {
    // Creazione di istanze della classe List con tipi diversi
    List<int> a(42);          // Lista di interi
    List<float> b(3.14f);      // Lista di float
    List<List<int>> c(a);      // Lista di Liste di interi

    return 0;
}

/* ### Sintassi e Logica:

- **Template Class Definition:** La classe `List` è definita come una classe template usando la sintassi `template <typename T>`. 
Questo significa che la classe può essere utilizzata con diversi tipi di dati.

- **Costruttore e Costruttore di Copia:** I costruttori della classe `List` 
accettano argomenti di tipo `T` e possono essere utilizzati per inizializzare un oggetto `List` con un dato contenuto o per creare una copia di un'altra lista dello stesso tipo.

- **Distruttore:** Il distruttore è responsabile di liberare eventuali risorse allocate dinamicamente. 
Nel tuo esempio, sembra che la classe stia gestendo un contenuto di tipo `T` con un puntatore `_content`.

- **Utilizzo nella Funzione Main:** Nel blocco `main`, vengono create istanze della classe `List` per tipi diversi (`int`, `float`, e una lista di `int`). 
L'utilizzo di `List<int>` o `List<float>` specifica il tipo di dato con cui istanziare la classe.

### Uso di `typename`:

La parola chiave `typename` è utilizzata nel contesto dei template per indicare che ciò che segue è un tipo. Nella tua definizione di classe template, 
`template<typename T>`, `typename` sta dicendo al compilatore che `T` è un tipo e può essere utilizzato come tale all'interno della classe.

In breve, `typename` viene utilizzato per indicare al compilatore che un determinato identificatore è un tipo, e non una variabile o una funzione.

Il tuo esempio di classe `List` è un esempio di come i template possono essere utilizzati per creare strutture di dati generiche che possono 
lavorare con diversi tipi di dati in modo flessibile. */