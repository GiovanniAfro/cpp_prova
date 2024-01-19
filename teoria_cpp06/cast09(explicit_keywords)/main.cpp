/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:03 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/19 11:26:45 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La parola chiave `explicit` in C++ viene utilizzata per specificare che un costruttore o una funzione di conversione non deve essere utilizzato per le conversioni implicite di tipo. Quando un costruttore o una funzione di conversione è dichiarato come `explicit`,
//il compilatore non può utilizzarlo automaticamente per le conversioni di tipo implicite. L'uso di `explicit` è una pratica che mira a migliorare la chiarezza del codice e a prevenire conversioni indesiderate o ambigue.

#include <iostream>

class A {};
class B {};

class C
{
public:
    C(A const & _) { return; }
    explicit C(B const & _) { return; }
};

void f(C const & _)
{
    return;
}

int main(void)
{
    f(A()); // Conversione implicita OK, utilizza il costruttore C(A const &)
    f(B()); // Conversione implicita NOT OK, il costruttore C(B const &) è explicit

    return 0;
}

// ### Spiegazione del Codice:

// 1. **Definizione della Classe `C`:**
//    - La classe `C` ha due costruttori, uno che accetta un oggetto di tipo `A` e uno che accetta un oggetto di tipo `B`.
//    - Il costruttore che accetta un oggetto di tipo `B` è dichiarato come `explicit`.

// 2. **Funzione `f`:**
//    - La funzione `f` prende un parametro di tipo `C const &`.

// 3. **Uso di `explicit` nel Contesto:**
//    - Quando si chiama la funzione `f`, si tenta di passare un oggetto di tipo `B()` come argomento.
//    - La chiamata `f(B())` provoca un errore a causa della dichiarazione `explicit` del costruttore di `C` che accetta un oggetto di tipo `B`.

// ### Importanza di `explicit`:

// 1. **Prevenire Conversioni Indesiderate:**
//    - L'utilizzo di `explicit` previene la conversione implicita di tipo, aiutando a evitare conversioni indesiderate o ambigue.

// 2. **Migliorare la Chiarezza del Codice:**
//    - Specificando `explicit`, il codice diventa più chiaro e leggibile, poiché le conversioni di tipo sono esplicitamente indicate nel codice.

// 3. **Evitare Errori Sottili:**
//    - Senza `explicit`, il compilatore potrebbe eseguire conversioni implicite che potrebbero portare a errori difficili da individuare. `explicit` contribuisce a evitare tali situazioni.

// 4. **Migliorare la Manutenibilità:**
//    - Rende il codice più manutenibile, poiché le conversioni di tipo sono chiaramente specificate nel codice sorgente. Chiunque legga il codice può vedere immediatamente dove avvengono le conversioni.

// ### Quando Utilizzare `explicit`:

// 1. **Nei Costruttori di Conversione:**
//    - `explicit` è spesso utilizzato nei costruttori di conversione di tipo per evitare conversioni indesiderate.

// 2. **Funzioni di Conversione di Tipo:**
//    - Può essere utilizzato nelle funzioni di conversione di tipo per impedire l'uso automatico della conversione implicita.

// 3. **Evitare Ambiguità:**
//    - Quando si desidera evitare ambiguità nelle chiamate di funzioni o costruttori che accettano più tipi.

// 4. **Chiarezza del Codice:**
//    - Quando si desidera migliorare la chiarezza e la comprensibilità del codice, indicando esplicitamente le conversioni di tipo.

// ### Considerazioni:

// - L'uso di `explicit` è una scelta di design che dipende dalle esigenze specifiche del codice e della classe.
// - Se si vuole consentire le conversioni implicite di tipo, è possibile omettere `explicit`.
// - L'utilizzo di `explicit` può richiedere conversioni esplicite di tipo nel codice, rendendo il codice più verboso in alcuni casi, ma apportando vantaggi in chiarezza e sicurezza.

// In conclusione, `explicit` è uno strumento utile per migliorare la chiarezza e prevenire conversioni indesiderate nel codice. La sua adozione dipende dalle esigenze specifiche del progetto e dalla progettazione della classe.