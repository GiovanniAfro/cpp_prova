/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polimorfismo2.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:13:53 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 01:13:45 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
	public:
		 virtual void	sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		virtual void	sayHello(std::string const & target);
};

class Cat
{
	//[...]
};

void	Character::sayHello(std::string const & target)
{
	std::cout<< "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << "F*** off " << target << ", i don't like you !" << std::endl;
}

int	main()
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();

	//This is also OK, because Warrior IS a CHARACTER
	Character*	b = new Warrior();

	//This would NOT be ok because Character IS NOT a Warrior
	//(Although they are related, W IS-A C, the reverse is untrue)
	//Warrior*	c = new Character();

	//This would NOT be ok either because CAT IS NOT a Character
	//(They are not even related)
	//Character*	d = new Cat();

	a->sayHello("students");

	b->sayHello("students");
}

// Spiegazione:
// Senza la Parola Chiave virtual (Primo Codice):

// In questo caso, il metodo direCiao non è dichiarato come virtual nella classe di base (Character). 
// Ciò significa che quando si utilizza un puntatore o un riferimento della classe di base per fare riferimento a un oggetto di una classe derivata (Warrior),
// il metodo chiamato è quello definito nella classe di base.
// Anche se l'oggetto è effettivamente un Warrior, chiamare b->direCiao("studenti"); 
// richiamerà Character::direCiao, non Warrior::direCiao.

// Con la Parola Chiave virtual (Secondo Codice):
// Aggiungendo la parola chiave virtual al metodo nella classe di base, stai dicendo al compilatore che questo metodo è destinato a essere sovrascritto dalle classi derivate. Ciò abilita il dispatch dinamico durante l'esecuzione.
// Ora, quando si utilizza un puntatore o un riferimento della classe di base per fare riferimento a un oggetto di una classe derivata, verrà chiamato il metodo corretto della classe derivata. Quindi, b->direCiao("studenti"); 
// chiamerà correttamente Warrior::direCiao grazie al meccanismo virtuale.
// Approfondimento:
// Polimorfismo:

// Il polimorfismo significa "molti forme". In C++, il polimorfismo si ottiene attraverso le funzioni virtuali ed è di due tipi: a tempo di compilazione (ottenuto attraverso il sovraccarico delle funzioni) e a tempo di esecuzione (ottenuto attraverso funzioni virtuali).
// Funzioni Virtuali:

// Una funzione virtuale è una funzione membro nella classe di base che è dichiarata con la parola chiave virtual. Può essere sovrascritta dalle classi derivate, consentendo il binding dinamico durante l'esecuzione.
// Binding Dinamico:

// Il binding dinamico consente di chiamare la funzione corretta in base al tipo effettivo dell'oggetto a tempo di esecuzione. È facilitato dall'uso di funzioni virtuali e puntatori/riferimenti alla classe di base.
// Sottotipizzazione:

// La sottotipizzazione è un concetto in cui un oggetto di una classe derivata è trattato come un oggetto della sua classe di base. In C++, questo si ottiene attraverso l'ereditarietà e il polimorfismo.
// Distruttore Virtuale (Non menzionato ma importante):

// Quando si utilizza il polimorfismo e l'allocazione dinamica di memoria (ad esempio, new), è cruciale avere un distruttore virtuale nella classe di base. Ciò assicura che il distruttore della classe derivata venga chiamato quando si elimina un oggetto attraverso un puntatore alla classe di base.