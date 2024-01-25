/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:12:12 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/25 15:36:51 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// Definizione del template
template <typename T>
T max(T const &x, T const &y) {
    return ((x > y) ? x : y);
}

// Funzione con lungo tempo di esecuzione
int foo(int x) {
    std::cout << "Long computing time" << std::endl;
    return x;
}

int main(void) {
    int a = 21;
    int b = 42;

    // Uso esplicito del template con il tipo int
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl; // Istanza esplicita

    // Uso implicito del template, il compilatore deduce il tipo automaticamente
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a, b) << std::endl; // Istanza implicita

    float c = -1.7f;
    float d = 4.2f;

    // Uso esplicito del template con il tipo float
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl; // Istanza esplicita

    // Uso implicito del template, il compilatore deduce il tipo automaticamente
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c, d) << std::endl; // Istanza implicita

    // Utilizzo del template con la funzione foo che ha un lungo tempo di esecuzione
    int ret = max<int>(foo(a), foo(b)); // Istanza esplicita
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << ret << std::endl;

    return 0;
}


/* ### Sintassi e Logica:

- **Template Definition:** `template <typename T>` dichiara un template con il parametro di tipo `T`.
  
- **Funzione `max`:** La funzione `max` è scritta in modo da funzionare con qualsiasi tipo `T`. 
Utilizza il costrutto ternario `? :` per restituire il massimo tra i due valori.

- **Uso Esplicito e Implicito del Template:** Puoi utilizzare il template in modo esplicito specificando il tipo tra le parentesi angolari `< >`, 
oppure in modo implicito, dove il compilatore deduce automaticamente il tipo in base agli argomenti passati.

### Utilità del Template:

- **Flessibilità:** I template consentono la scrittura di codice flessibile che può essere riutilizzato con diversi tipi di dati.
  
- **Genericità:** La genericità del template consente di scrivere codice più generale ed evita la duplicazione di codice per tipi diversi.

### Miglior Modo per Utilizzarlo:

- **Utilizzo Specifico:** Utilizza i template quando hai bisogno di scrivere codice che deve funzionare con più tipi di dati senza duplicare il codice.

- **Attenzione alla Complessità:** L'abuso dei template può portare a codice difficile da comprendere. Utilizza template con moderazione e solo quando realmente necessario.

Il template è uno strumento potente che può aumentare la flessibilità e la genericità del tuo codice in C++. 
Tuttavia, è importante utilizzarlo con saggezza per mantenere il codice comprensibile e manutenibile. */