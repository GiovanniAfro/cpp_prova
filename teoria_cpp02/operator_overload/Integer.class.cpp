/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:35:30 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 17:05:04 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

// Implementazione del costruttore
Integer::Integer(int const n) : _n(n)
{
    std::cout << "Costruttore chiamato con valore " << n << std::endl;
    return;
}

// Implementazione del distruttore
Integer::~Integer(void)
{
    std::cout << "Distruttore chiamato con valore " << this->_n << std::endl;
    return;
}

// Implementazione della funzione per ottenere il valore
int Integer::getValue(void) const
{
    return this->_n;
}

// Implementazione dell'operatore di assegnazione
Integer & Integer::operator=(Integer const & rhs)
{
    std::cout << "Operatore di assegnazione chiamato da " << this->_n;
    std::cout << " a " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();

    return *this;
}

// Implementazione dell'operatore di addizione
Integer Integer::operator+(Integer const & rhs) const
{
    std::cout << "Operatore di addizione chiamato con " << this->_n;
    std::cout << " e " << rhs.getValue() << std::endl;

    return Integer(this->_n + rhs.getValue());
}

// Implementazione dell'operatore di output
std::ostream & operator<<(std::ostream & o, Integer const & rhs)
{
    o << rhs.getValue();
    return o;
}


/* La parte di `std::ostream` è legata alla sovraccarica dell'operatore di output (`<<`). In C++, 
puoi sovraccaricare l'operatore di output per un tipo di dati personalizzato in modo che l'oggetto di quel tipo possa essere facilmente stampato su uno stream di output standard, 
come `std::cout`.

Nel tuo codice, hai dichiarato e definito l'operatore di output come una funzione esterna alla classe `Integer`:

```cpp
std::ostream & operator<<(std::ostream & o, Integer const & rhs) {
    o << rhs.getValue();
    return o;
}
```

**Spiegazione:**

- `std::ostream & operator<<`: Questa è la dichiarazione dell'operatore di output. Riceve uno stream di output (`std::ostream & o`) e un oggetto `Integer` costante (`Integer const & rhs`).

- `o << rhs.getValue()`: Questo è ciò che viene effettivamente eseguito quando l'operatore di output viene utilizzato. Si sta inserendo il valore di `rhs` (ottenuto tramite `rhs.getValue()`) nello stream di output `o`.

- `return o;`: Restituisce lo stream di output dopo l'inserimento del valore. Questo consente di concatenare più operazioni di output, ad esempio `std::cout << x << y;`.

### Utilizzo nell'esempio

Nel tuo `main`, questa sovraccarica viene utilizzata per stampare gli oggetti `Integer`:

```cpp
std::cout << "Valore di x: " << x << std::endl;
std::cout << "Valore di y: " << y << std::endl;
```

In questo modo, puoi stampare direttamente gli oggetti `Integer` su `std::cout` senza dover accedere direttamente ai loro membri interni. 
La sovraccarica dell'operatore di output rende più leggibile il codice e consente di utilizzare gli oggetti personalizzati in modo simile ai tipi di dati nativi quando si tratta di output su stream. */