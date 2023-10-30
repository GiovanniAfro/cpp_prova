/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:20:13 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 13:49:24 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{

public:

    Sample(void);
    ~Sample(void);

    static int  getNbInst(void);

private:

    static int  _nbInst;
};

#endif

/* La parola chiave "static" in C++ viene utilizzata per dichiarare un membro (variabile o funzione) 
che è condiviso tra tutte le istanze di una classe e non è specifico di un oggetto particolare. 
Ecco alcune spiegazioni più dettagliate:

Variabili statiche: Quando dichiari una variabile come "static" all'interno di una classe, quella variabile esiste una sola volta, 
indipendentemente da quante istanze dell'oggetto vengono create. 
Questo significa che la variabile è condivisa tra tutte le istanze della classe.

Qui, "_nbInst" è una variabile statica che tiene traccia del numero di istanze della classe "Sample" e condivide il suo valore tra tutte le istanze.

Funzioni statiche: Quando dichiari una funzione come "static" all'interno di una classe, puoi chiamarla senza creare un'istanza dell'oggetto. 
Questo perché la funzione non è legata a un'istanza specifica ma può accedere solo ad altri membri statici della classe.

    Qui, "getNbInst" è una funzione statica che restituisce il valore della variabile statica "_nbInst" senza la necessità di creare un'istanza della classe "Sample".

In breve, l'uso di "static" in C++ è utile quando si desidera condividere dati o funzionalità tra tutte le istanze di una classe senza dover creare un oggetto specifico */