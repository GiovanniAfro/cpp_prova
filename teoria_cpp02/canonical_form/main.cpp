/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:32:34 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 17:53:03 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main()
{
	Sample instance1;
	Sample instance2(42);
	Sample instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0 ;
}

//i commenti che seguono sono skippabili 


/* Sì, ci sono alcune considerazioni aggiuntive sulla canonical form e sulle best practice associate:

1. **Risorse Dinamiche:** Se la tua classe utilizza risorse dinamiche (come la memoria allocata con `new`), è fondamentale garantire che il Copy Constructor e l'Operatore di Assegnazione effettuino una copia profonda delle risorse per evitare problemi di gestione della memoria.

    ```cpp
    Sample & Sample::operator=(Sample const & rhs)
    {
        std::cout << "Assignment operator called" << std::endl;

        if (this != &rhs) {
            // Dealloca eventuali risorse dinamiche esistenti
            // ...
            
            // Effettua la copia profonda delle risorse
            // ...
        }

        return *this;
    }
    ```

2. **L'Utilizzo di `const`:** Utilizzare `const` nei metodi quando possibile. Ad esempio, nella funzione `getFoo`, è buona pratica dichiarare la funzione come const, poiché la funzione non modifica lo stato dell'oggetto.

    ```cpp
    int Sample::getFoo(void) const
    {
        return this->_foo;
    }
    ```

3. **Operatore di Output:** L'implementazione di `operator<<` è spesso utile per la stampa di oggetti su stream. La sua sovraccarica consente di utilizzare oggetti personalizzati con `std::cout`.

    ```cpp
    std::ostream & operator<<(std::ostream & o, Sample const & i)
    {
        o << "The value of this _foo is: " << i.getFoo();
        return o;
    }
    ```

4. **Considerazioni sulla Performance:** La canonical form potrebbe comportare operazioni costose, specialmente se coinvolgono la copia di grandi quantità di dati. In alcuni casi, è possibile ottimizzare il codice per ridurre il carico computazionale.

5. **Convenzioni di Nomenclatura:** Può essere utile seguire convenzioni di nomenclatura comuni, ad esempio, precedere i membri della classe con un underscore (come `_foo`) per distinguerli dai parametri o da altre variabili.

6. **Definizione Predefinita:** In molti casi, il compilatore fornisce automaticamente la versione di default di queste funzioni membro se non vengono dichiarate esplicitamente. Tuttavia, è una buona pratica fornire la tua implementazione per garantire la coerenza e la gestione personalizzata di risorse.

7. **Swap Member Function:** Nel contesto di gestione della memoria e efficienza, alcune implementazioni includono anche una funzione `swap` che scambia gli stati di due oggetti, utile per ottimizzare l'implementazione di alcuni algoritmi.

    ```cpp
    void Sample::swap(Sample & other)
    {
        std::swap(_foo, other._foo);
    }
    ```

In generale, la canonical form è una guida utile per garantire una corretta gestione degli oggetti delle classi, specialmente quando si tratta di situazioni come l'assegnazione, la copia e la distruzione. Tuttavia, è importante adattarla alle esigenze specifiche del tuo progetto. */