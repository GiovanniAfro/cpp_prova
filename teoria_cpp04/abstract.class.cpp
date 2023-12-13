/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:43:05 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 01:10:30 by gcavanna         ###   ########.fr       */
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


SPIEGAZIONE PIU GENERALE

### Classi Astratte:

1. **Dichiarazione di Classe Astratta:**
   - Una classe astratta si dichiara utilizzando almeno una funzione virtuale pura. Una funzione virtuale pura è definita con `= 0` alla fine della sua dichiarazione, come nel caso di `virtual void attack(std::string const & target) = 0;` in `ACharacter`.

2. **Utilizzo:**
   - Le classi astratte forniscono una struttura di base comune per le classi derivate. Puoi dichiarare puntatori o riferimenti alla classe astratta e usarli per riferirti a oggetti delle classi derivate.

3. **Differenze:**
   - Le classi astratte possono contenere implementazioni di funzioni (non necessariamente tutte devono essere pure virtuali). Possono anche avere membri di dati e funzioni concrete.

4. **Quando sono Utili:**
   - Le classi astratte sono utili quando si desidera fornire una struttura di base comune e alcune implementazioni predefinite, ma si vuole lasciare alle classi derivate la responsabilità di implementare alcune funzionalità specifiche.

5. **Collegamento al Polimorfismo:**
   - Le classi astratte sono spesso associate al polimorfismo. I puntatori o riferimenti alla classe base possono riferirsi a oggetti delle classi derivate, consentendo un comportamento polimorfico.

### Interfacce:

1. **Dichiarazione di Interfaccia:**
   - Un'interfaccia è dichiarata come una classe contenente solo funzioni virtuali pure. Non contiene implementazioni di funzioni, solo dichiarazioni, come in `ICoffeMaker`.

2. **Utilizzo:**
   - Le interfacce forniscono un contratto che le classi devono implementare. Puoi creare oggetti di classi che implementano l'interfaccia e trattarli come istanze dell'interfaccia stessa.

3. **Differenze:**
   - Le interfacce contengono solo funzioni virtuali pure e non possono avere membri di dati o funzioni concrete. Forniscono solo la dichiarazione di un insieme di funzionalità che le classi devono implementare.

4. **Quando sono Utili:**
   - Le interfacce sono utili quando si vuole definire un contratto senza specificare un'implementazione. Consentono a diverse classi di fornire implementazioni specifiche secondo il proprio contesto.

5. **Collegamento al Polimorfismo:**
   - Le interfacce sono strettamente legate al polimorfismo. Consentono a oggetti di classi diverse, ma conformi all'interfaccia, di essere trattati in modo polimorfico.

### Collegamento al Polimorfismo:

1. **Puntatori o Riferimenti alla Classe Base:**
   - Il polimorfismo consente di utilizzare puntatori o riferimenti alla classe base per riferirsi a oggetti delle classi derivate.

2. **Chiamate Polimorfiche:**
   - Quando si chiamano funzioni virtuali attraverso puntatori o riferimenti alla classe base, la versione appropriata della funzione nelle classi derivate viene eseguita in base al tipo reale dell'oggetto.

3. **Flessibilità:**
   - Il polimorfismo consente di scrivere codice più flessibile, in cui è possibile estendere il comportamento senza dover modificare il codice esistente.

In sintesi, le classi astratte forniscono una base comune con alcune implementazioni concrete, mentre le interfacce definiscono solo un contratto senza implementazioni. Entrambe sono legate al concetto di polimorfismo, consentendo l'utilizzo di oggetti diversi attraverso un'interfaccia comune. La scelta tra classi astratte e interfacce dipende dalle esigenze specifiche del design del tuo software.

*/