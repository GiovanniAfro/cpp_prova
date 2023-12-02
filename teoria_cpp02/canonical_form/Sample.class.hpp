/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:08:19 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 17:51:13 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{
	public:
		Sample(void);							 //Canonical
		Sample(int const n);
		Sample(Sample const & src);				 //Canonical
		~Sample(void);							 //Canonical

		Sample & operator=(Sample const & rhs); //Canonical

		int		getFoo(void) const;

	private:
		int	_foo;
};

std::ostream &	 operator<<(std::ostream & o, Sample const & i);

#endif

/* La "canonical form" (o forma canonica) in C++ si riferisce a un insieme di funzioni membro che è spesso buona pratica implementare quando si crea una classe. Queste funzioni membro sono:

 1  Costruttore di Default
 2  Costruttore Parametrico
 3  Copy Constructor
 4 Distruttore
 5 Operatore di Assegnazione (Assignment Operator)
 */
/* 
    L'utilizzo della "canonical form" aiuta a garantire che la tua classe si comporti in modo prevedibile in diverse situazioni.
    Il Copy Constructor e l'Operatore di Assegnazione sono particolarmente importanti per evitare problemi di gestione della memoria quando gli oggetti vengono copiati o assegnati tra loro.
    La stampa di oggetti mediante std::cout << instance1 è resa possibile grazie alla sovraccarica dell'operatore di output che hai implementato */.
