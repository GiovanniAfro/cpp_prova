/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:55:13 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/19 10:59:49 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    int     a = 42;                     // Reference value

    int const *b = &a;                  //Implicit promotion -> Ok
    int *     c = b;                    //implicit demotion -> Hell no!
    int *     d = const_cast<int *>(b); //Explicit demotion -> ok, i obey
}

// Spiegazione del Codice:
// Promozione Implicita:

// b è un puntatore a costante int ottenuto assegnando l'indirizzo di a. Questo è un esempio di promozione implicita.
// Demotion Implicita:

// c è un puntatore a intero ottenuto assegnando b direttamente. Questa è una demozione implicita. Tuttavia, questo è un errore perché b è dichiarato come puntatore a costante, e tentare di rimuovere la qualifica di constness in modo implicito è vietato.
// Demotion Esplicita con const_cast:

// d è un puntatore a intero ottenuto tramite const_cast, rimuovendo la qualifica di constness da b. Questa è una demozione esplicita e può essere utilizzata quando si è consapevoli dei rischi e si desidera rimuovere la qualifica di constness in modo controllato.
// Differenze con reinterpret_cast:
// Manipolazione della Qualifica di Constness:

// Mentre reinterpret_cast è utilizzato per conversioni più arbitrarie, const_cast è specificamente progettato per manipolare la qualifica di constness di un tipo di dato.
// Uso su Puntatori e Riferimenti:

// const_cast è più focalizzato su puntatori e riferimenti, e la sua utilità principale è nel trattamento di situazioni in cui è necessario rimuovere o aggiungere la qualifica di constness.
// Sicurezza Rispetto a reinterpret_cast:

// const_cast è più sicuro rispetto a reinterpret_cast perché opera su tipi che originariamente avevano la stessa qualifica di constness. Tuttavia, deve essere usato con attenzione.
// Utilizzo Pratico di const_cast:
// Aggiunta o Rimozione di Constness:

// const_cast può essere utilizzato per rimuovere o aggiungere la qualifica di constness a un tipo, consentendo operazioni controllate su dati che inizialmente erano costanti o non costanti.
// Interazione con Funzioni Non Costanti:

// In situazioni in cui si desidera chiamare una funzione non costante su un oggetto originariamente constante, const_cast può essere utilizzato per rimuovere temporaneamente la qualifica di constness.
// Importanza di Capire e Conoscere const_cast:
// Manipolazione Controllata della Qualifica di Constness:

// const_cast fornisce un modo controllato per manipolare la qualifica di constness. È importante capire quando e come usarlo per evitare comportamenti indefiniti.
// Evitare Uso Inappropriato:

// const_cast dovrebbe essere utilizzato solo quando necessario, e il suo utilizzo dovrebbe essere evitato quando ci sono alternative più sicure, come la progettazione delle funzioni costanti.
// Migliorare la Leggibilità del Codice:

// L'uso di const_cast può essere utile per migliorare la leggibilità del codice in situazioni in cui è necessario effettuare operazioni temporanee su dati costanti.
// Consapevolezza dei Rischi:

// I rischi associati a const_cast includono la possibilità di comportamenti indefiniti se non utilizzato con attenzione. È importante essere consapevoli di questi rischi.
// In conclusione, const_cast è uno strumento utile quando si manipola la qualifica di constness, ma va usato con molta attenzione. La sua comprensione è essenziale per evitare errori e comportamenti indefiniti durante la manipolazione di dati costanti.