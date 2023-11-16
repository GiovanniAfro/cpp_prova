/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:00:52 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/16 20:20:39 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string _login;

public:
    Student(std::string login) : _login(login)
    {
        std::cout << "Lo studente " << this->_login << " è nato" << std::endl;
    }

    ~Student()
    {
        std::cout << "Lo studente " << this->_login << " è morto" << std::endl;
    }
};

int main()
{
    // Creazione di un oggetto Student chiamato bob sullo stack
    Student bob = Student("jbob");

    // Creazione di un oggetto Student chiamato jim sull'heap usando new
    Student* jim = new Student("jjim");

    // Operazioni varie...

    // Deallocazione della memoria occupata da jim usando delete
    delete jim; // jim è morto

    // Il programma termina, bob viene deallocato automaticamente dallo stack
    return 0; // bob è morto
}


// ### Uso di `this`:

// In C++, `this` è un puntatore implicito che punta all'istanza dell'oggetto corrente. 
// Viene utilizzato all'interno di una classe per fare riferimento ai membri dell'oggetto corrente. 
// Nella classe `Student`, 
// ad esempio, `_login` è un membro privato della classe, e `this->_login` si riferisce al membro `_login` dell'istanza corrente di `Student`. 
// È spesso utilizzato per risolvere ambiguità quando ci sono nomi di variabili locali o parametri che hanno lo stesso nome dei membri della classe.

// ### Differenza tra Stack e Heap:

// 1. **Stack:**
//    - Gli oggetti allocati sullo stack sono gestiti automaticamente dal compilatore.
//    - L'allocazione e la deallocazione dello spazio per gli oggetti avvengono automaticamente quando le variabili escono e entrano dallo scope.
//    - Gli oggetti sullo stack sono generalmente più veloci da allocare e deallocare rispetto a quelli sull'heap.
//    - La dimensione degli oggetti sullo stack deve essere nota a tempo di compilazione.

// 2. **Heap:**
//    - Gli oggetti allocati sull'heap richiedono una gestione manuale da parte del programmatore.
//    - L'allocazione avviene mediante l'uso di `new` e la deallocazione mediante `delete` (o `delete[]` per array).
//    - Gli oggetti sull'heap possono persistere anche dopo che la funzione che li ha creati è uscita dallo scope.
//    - L'allocazione sull'heap è più flessibile in termini di dimensione e può essere richiesta a tempo di esecuzione.

// ### Scelta tra Stack e Heap:

// La scelta tra stack e heap dipende dalle esigenze specifiche del programma:
// - **Stack:** Usato per oggetti di dimensioni conosciute a tempo di compilazione, con una vita limitata allo scope in cui sono dichiarati.
  
// - **Heap:** Usato per oggetti di dimensioni sconosciute a tempo di compilazione o con vita più lunga rispetto allo scope in cui sono stati creati.

//  `bob` viene allocato sullo stack perché è una variabile locale in `main()` e la sua durata è limitata allo scope di `main()`. 
//  `jim`, d'altro canto, viene allocato sull'heap utilizzando `new` perché potrebbe essere necessario che la sua vita persista oltre la fine di `main()`
//   e la sua dimensione potrebbe non essere nota a tempo di compilazione. 

//lascia una stellina :D