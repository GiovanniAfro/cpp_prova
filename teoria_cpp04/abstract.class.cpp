/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:43:05 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 01:03:52 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
    private:
        std::string _name;
    
    public:
        virtual void    attack(std::string const & target) = 0;
        void            sayHello(std::string const & target);
};

class Warrior : ACharacter
{
    public:
        virtual void    attack(std::string const & target);
};

void    ACharacter::sayHello(std::string const & target)
{
    std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class ICoffeMaker
{
    public:
        virtual void       fillWaterTank(IWaterSource * src) = 0;
        virtual ICofee*     makeCoffee(std::string const & type) = 0;
};

int main()
{
    ACharacter*     a = new Warrior();

    //this would NOT be ok because ACharacter is abstrack
    //ACharacter*  b = new ACharacter();

    a->sayHello("students");
    a->attack("roger");
}
/*
### Classi Astratte (Abstract Classes):

1. **Definizione di Classe Astratta:**
   - `ACharacter` è una classe astratta che contiene almeno una funzione virtuale pura (`virtual void attack(std::string const & target) = 0;`). Una classe astratta è una classe che non può essere istanziata direttamente, ma può essere utilizzata come classe base per altre classi derivate.

2. **Funzione Virtuale Pura:**
   - La funzione `attack` nella classe `ACharacter` è una funzione virtuale pura. Questo significa che ogni classe derivata da `ACharacter` deve implementare questa funzione. In questo caso, `Warrior` deve implementare la funzione `attack`.

3. **Funzione Concreta:**
   - La funzione `sayHello` in `ACharacter` è una funzione concreta, cioè ha un'implementazione predefinita. Le classi derivate possono utilizzare questa implementazione o fornire la propria implementazione.

4. **Uso di Puntatori alla Classe Base:**
   - Nel `main()`, viene utilizzato un puntatore `ACharacter* a = new Warrior();`. Questo è possibile perché `Warrior` è una classe derivata da `ACharacter`. Tuttavia, l'istanziazione diretta di `ACharacter` (`ACharacter* b = new ACharacter();`) non è consentita perché `ACharacter` è una classe astratta.

### Interfacce:

1. **Definizione di Interfaccia:**
   - `ICoffeMaker` è una classe che funge da interfaccia. Un'interfaccia è simile a una classe astratta, ma contiene solo funzioni virtuali pure e non ha implementazioni di funzioni.

2. **Dipendenza da Altra Interfaccia:**
   - La funzione `fillWaterTank` in `ICoffeMaker` richiede un parametro di tipo `IWaterSource*`. Questo indica una dipendenza da un'altra interfaccia chiamata `IWaterSource`.

3. **Implementazione nelle Classi Derivate:**
   - Le classi che implementano l'interfaccia devono fornire implementazioni per tutte le funzioni virtuali pure. Ad esempio, una classe che implementa `ICoffeMaker` deve implementare `fillWaterTank` e `makeCoffee`.

4. **Uso di Interfacce:**
   - L'uso di un'interfaccia consente la creazione di oggetti polimorfici che possono essere trattati come istanze dell'interfaccia stessa.

In generale, classi astratte e interfacce sono utilizzate per creare gerarchie di classi più flessibili e per favorire il polimorfismo, consentendo a oggetti di tipi diversi di essere trattati uniformemente. Le classi astratte forniscono un'implementazione parziale, mentre le interfacce forniscono solo una dichiarazione di metodi senza implementazione.
*/