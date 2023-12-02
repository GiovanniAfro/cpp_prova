/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:55:08 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 17:02:29 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int main()
{
    // Creazione di oggetti Integer
    Integer x(30);
    Integer y(10);
    Integer z(0);

    // Stampa dei valori degli oggetti
    std::cout << "Valore di x: " << x << std::endl;
    std::cout << "Valore di y: " << y << std::endl;

    // Utilizzo dell'operatore di assegnazione
    y = Integer(12);
    std::cout << "Valore di y dopo l'assegnazione: " << y << std::endl;

    // Utilizzo dell'operatore di addizione
    std::cout << "Valore di z prima dell'addizione: " << z << std::endl;
    z = x + y;
    std::cout << "Valore di z dopo l'addizione: " << z << std::endl;

    return 0;
}

/* Il concetto di operatori sovraccaricati si riferisce alla possibilità di ridefinire il comportamento degli operatori in C++. Gli operatori, come `+`, `-`, `*`, `/`, `=`, tra gli altri, 
hanno significati specifici per i tipi di dati di base. Tuttavia, in C++, puoi ridefinire il significato di questi operatori per i tipi di dati personalizzati, come le classi.

### Perché sovraccaricare gli operatori?

La sovraccarica degli operatori può rendere il codice più chiaro, espressivo e simile al linguaggio naturale. Ad esempio, 
se hai una classe `Punto` e vuoi sommare due oggetti `Punto` per ottenere un nuovo `Punto` che rappresenta la somma delle coordinate, puoi definire l'operatore `+` per la tua classe `Punto`.

### Sintassi per la sovraccarica degli operatori

La sintassi generale per sovraccaricare un operatore in una classe è la seguente:


tipoDiRitorno operator+(const Tipo &op1, const Tipo &op2) {
    // Definizione del comportamento dell'operatore +
    // Utilizza op1 e op2 per eseguire l'operazione desiderata
    // Restituisci il risultato
}
```

Dove `operator+` è l'operatore che stai sovraccaricando, `Tipo` è il tipo di dati della classe e `tipoDiRitorno` è il tipo restituito dall'operatore.

### Esempio di sovraccarico dell'operatore di addizione

Nel tuo codice, hai sovraccaricato l'operatore di addizione nella classe `Integer`. Ecco come è implementato:

```cpp
Integer Integer::operator+(Integer const & rhs) const {
    std::cout << "Operatore di addizione chiamato con " << this->_n;
    std::cout << " e " << rhs.getValue() << std::endl;

    return Integer(this->_n + rhs.getValue());
}
```

In questo caso, l'operatore di addizione è stato definito per sommare due oggetti `Integer` restituendo un nuovo oggetto `Integer` che contiene la somma dei valori.

### Utilizzo nell'esempio

Nel tuo esempio, puoi vedere come l'operatore di addizione viene utilizzato nel `main`:

```cpp
z = x + y;
```

Questo chiama l'operatore di addizione sovraccaricato e assegna il risultato all'oggetto `z`. L'implementazione dell'operatore di addizione stampa anche un messaggio a scopo illustrativo.

In breve, la sovraccarica degli operatori offre un modo flessibile di definire il comportamento degli operatori per i tipi di dati personalizzati, migliorando la chiarezza e la leggibilità del codice. */