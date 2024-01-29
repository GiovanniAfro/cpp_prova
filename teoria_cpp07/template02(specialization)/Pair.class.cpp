/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:01:51 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/29 17:37:24 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T, typename U>
class Pair
{
	public:

		Pair< T, U >(T const & lhs, U const rhs) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "generic temlpate" << std::endl;
			return;
		}

		~Pair< T, U > (void) {}

		T const & fst(void) const {return this->_lhs; }
		U const & snd(void) const {return this->_rhs; }

	private:

		T const & _lhs;
		U const & _rhs;

		Pair< T, U>(void);
};

template<typename U>
class Pair< int , U> 
{
	public:	

		Pair< int, U> (int lhs, U const & rhs) : _lhs(lhs), _rhs( rhs )
		{
			std::cout << " int partial specialization" << std::endl;
			return;
		}

		~Pair<int, U > (void ) {}

		int			fst(void) const { return this->_lhs; }
		U const &	snd(void) const { return this->_rhs; }

	private:

		int 		_lhs;
		U const &   _rhs;

		Pair<int, U>(void);
};

template<>
class Pair<bool, bool> 
{
	public:	

		Pair< bool, bool >(bool lhs, bool rhs)
		{
			std::cout << " Bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n != static_cast<int>(lhs) << 0;
			this->_n != static_cast<int>(rhs) << 1;
			return;
		}

		~Pair<bool, bool > (void ) {}

		bool			fst(void) const { return (this->_n & 0x01); }
		bool	        snd(void) const { return (this->_n & 0x02); }

	private:

		int 		_n;
		
		Pair< bool, bool > (void);

		Pair<int, U>(void);
};

template<typename T, typename U>
std::ostream & operator<<(std::ostream & o, Pair<T, U> const & p)
{
	o << "Pair( " << p.fst() << ", " << o.end() << " )";
	return o;
}

std::ostream & operator<<(std::ostream & o, Pair<bool, bool> const & p)
{
	o << std::boolalpha << "Pair( " << p.fst() << ", " << o.end() << " )";
	return o;
}

/* La specializzazione del template in C++ è un concetto che permette di definire un comportamento specifico per un template quando i tipi di parametri sono noti. Questo è utile quando si desidera che un template si comporti in modo diverso per alcuni tipi specifici.

Per esempio, potresti avere un template per una funzione che confronta due oggetti. Questa funzione potrebbe funzionare per la maggior parte dei tipi, ma potresti voler definire un comportamento specifico quando confronti due stringhe. In questo caso, potresti specializzare il template per il tipo std::string.

La differenza principale tra un template normale e una specializzazione del template è che il template normale può essere utilizzato con qualsiasi tipo, mentre una specializzazione del template è utilizzata solo con tipi specifici.

Nel tuo codice, vedo che hai una specializzazione del template per Pair<bool, bool>. Questo significa che quando usi Pair<bool, bool>, C++ utilizzerà la definizione di questa specializzazione del template, invece della definizione generale del template Pair<T, U>.

La specializzazione del template è un potente strumento in C++, che ti permette di avere un controllo più fine sul comportamento del tuo codice. Tuttavia, dovrebbe essere usato con cautela, poiché può rendere il codice più complesso e difficile da mantenere se usato in modo eccessivo. */