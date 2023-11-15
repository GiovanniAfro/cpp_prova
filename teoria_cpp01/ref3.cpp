/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:01:49 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 13:37:25 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string _login;

public:
    Student(const std::string& login) : _login(login)
    {
    }

    // Restituisce un riferimento non costante a _login
    std::string& getLoginRef()
    {
        return this->_login;
    }

    // Restituisce un riferimento costante a _login (metodo const)
    std::string const& getLoginRefConst() const
    {
        return this->_login;
    }

    // Restituisce un puntatore a _login
    std::string* getLoginPtr()
    {
        return &(this->_login);
    }

    // Restituisce un puntatore costante a _login (metodo const)
    std::string const* getLoginPtrConst() const
    {
        return &(this->_login);
    }
};

int main()
{
    Student bob = Student("bfubar");
    Student const jim = Student("jfubar");

    // Ottenere e stampare i riferimenti costanti alle stringhe
    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;

    // Ottenere e stampare i valori puntati dalle stringhe attraverso i puntatori
    std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

    // Modificare la stringa tramite il riferimento restituito
    bob.getLoginRef() = "sucabob";
    std::cout << bob.getLoginRefConst() << std::endl;

    // Modificare la stringa tramite il puntatore restituito
    *(bob.getLoginPtr()) = "bobbyfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    return 0;
}


// ### Puntatori e Riferimenti Restituiti:
// - **Riferimenti (`std::string& getLoginRef()`):**
//   - Restituisce un riferimento non costante alla stringa `_login`.
//   - Consente la modifica diretta del membro `_login` attraverso il riferimento restituito.

// - **Riferimenti Costanti (`std::string const& getLoginRefConst() const`):**
//   - Restituisce un riferimento costante alla stringa `_login`.
//   - Non consente la modifica diretta del membro `_login` attraverso il riferimento restituito.

// - **Puntatori (`std::string* getLoginPtr()`):**
//   - Restituisce un puntatore alla stringa `_login`.
//   - Consente la modifica diretta del membro `_login` attraverso il puntatore restituito.

// - **Puntatori Costanti (`std::string const* getLoginPtrConst() const`):**
//   - Restituisce un puntatore costante alla stringa `_login`.
//   - Non consente la modifica diretta del membro `_login` attraverso il puntatore restituito.

// ### Differenze Chiave:
// - **Riferimenti:**
//   - Sintassi più pulita, senza bisogno di dereferenziamento esplicito.
//   - Utilizzati quando si vuole consentire la modifica diretta dell'oggetto referenziato.

// - **Puntatori:**
//   - Consentono la manipolazione diretta degli indirizzi di memoria.
//   - Utilizzati quando si vuole la flessibilità di poter puntare a nulla o a un altro oggetto.

// L'uso di riferimenti o puntatori dipende dalle esigenze specifiche del programma e dal livello di controllo desiderato sulla modifica degli oggetti referenziati o puntati.