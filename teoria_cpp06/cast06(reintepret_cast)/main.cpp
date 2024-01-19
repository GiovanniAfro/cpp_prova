/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:40:48 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/19 10:47:07 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    float a = 42.042f           //Reference value

    void * b = &a;              //Implicit promotion -> OK
    int *   c = reinterpret_cast<int *>(b) //Explicit demotion -> Ok, i obey
    int &   d = reinterpret_cast<int &>(b); //Explicit demotion -> Ok, i OBey

    return 0;
}

// Spiegazione del Codice:
// Promozione Implicita:

// b è un puntatore void * che viene assegnato all'indirizzo di memoria di a. Questo è un esempio di promozione implicita.
// Demotion Esplicita con reinterpret_cast:

// c è un puntatore a intero ottenuto tramite reinterpret_cast, convertendo il puntatore void * di b. Questa è una demozione esplicita.
// Demotion Esplicita con reinterpret_cast su Riferimento:

// d è un riferimento a intero ottenuto tramite reinterpret_cast, convertendo il puntatore void * di b. Questa è una demozione esplicita.
// Differenze con dynamic_cast e static_cast:
// No Controllo a Runtime:

// A differenza di dynamic_cast, reinterpret_cast non effettua alcun controllo a runtime per garantire che la conversione sia sicura. È completamente a carico del programmatore assicurarsi che la conversione abbia senso.
// Senza Considerazioni sulla Gerarchia:

// A differenza di dynamic_cast, che è specifico per le classi polimorfiche e utilizzato per gestire conversioni in gerarchie di classi, reinterpret_cast può essere utilizzato su qualsiasi tipo di puntatore o riferimento, indipendentemente dalla gerarchia delle classi.
// Differenze Rispetto a static_cast:

// reinterpret_cast è più potente di static_cast in quanto non richiede una relazione di ereditarietà tra i tipi coinvolti. reinterpret_cast è più pericoloso in quanto non esegue alcun tipo di verifica a runtime o di adeguamento.
// Conversioni Arbitrarie:

// reinterpret_cast consente conversioni di tipo molto più arbitrarie rispetto a static_cast o dynamic_cast. Ad esempio, può essere utilizzato per convertire un puntatore a un tipo di dati in un puntatore a un'altra struttura di dati completamente diversa.
// Utilizzo Pratico di reinterpret_cast:
// Manipolazione di Dati Binari:

// reinterpret_cast può essere utilizzato quando si manipolano dati binari direttamente in memoria.
// Interazione con Librerie C:

// Quando si interagisce con librerie C o altre situazioni in cui è necessario lavorare a un livello più basso di astrazione, reinterpret_cast può essere utile.
// Conversione tra Puntatori e Tipi Fondamentali:

// reinterpret_cast può essere utilizzato per convertire puntatori tra tipi fondamentali, come puntatori a interi e puntatori a virgola mobile.
// Accesso a Strutture Diverse:

// In alcuni casi, reinterpret_cast può essere utilizzato per accedere a strutture dati diverse, anche se questa pratica è rischiosa e dovrebbe essere evitata, se possibile.
// Importanza di Capire e Conoscere reinterpret_cast:
// Responsabilità del Programmatore:

// reinterpret_cast trasferisce la responsabilità al programmatore di garantire che le conversioni di tipo siano sicure. È essenziale capire completamente cosa si sta facendo quando si utilizza reinterpret_cast.
// Rischio di Comportamento Indefinito:

// L'uso di reinterpret_cast in modo scorretto può portare a comportamenti indefiniti e errori difficili da individuare. Bisogna fare molta attenzione quando si usa questo operatore.
// Rischi di Accesso a Memoria Invalida:

// reinterpret_cast può facilmente portare a errori di accesso a memoria invalida se non viene utilizzato con attenzione. Il programmatore deve essere consapevole dei rischi associati.
// Ridotto Uso in Codice Pulito:

// In generale, l'uso di reinterpret_cast dovrebbe essere limitato e preferibilmente evitato in favore di approcci più sicuri e chiari, come static_cast o dynamic_cast.
// In conclusione, reinterpret_cast è uno strumento potente ma pericoloso che dovrebbe essere usato con molta cautela. È importante comprenderne i rischi e utilizzarlo solo quando strettamente necessario in situazioni particolari, dove si è certi della sicurezza della conversione. La sua adozione dovrebbe essere limitata in un codice pulito e robusto.