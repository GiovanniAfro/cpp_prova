/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:28:31 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 12:38:37 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample  istance1(42);
    Sample  instance2(42);

    if (&istance1 == &istance1)
        std::cout << "instance1 and instance1 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not physically equal" << std::endl;

    if (&istance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;

    if (istance1.compare(&istance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

     if (istance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

    return 0;
}   


    /* Il costruttore Sample(int v) viene chiamato quando crei un'istanza della classe Sample, e stampa "Costruttore chiamato" sulla console.

    Il distruttore ~Sample(void) viene chiamato quando un'istanza di Sample viene distrutta, e stampa "Distruttore chiamato" sulla console.

    Il metodo getFoo restituisce il valore di _foo.

    Il metodo compare confronta due oggetti Sample in base al valore di _foo. Restituisce -1 se il valore dell'oggetto corrente è minore, 1 se è maggiore e 0 se sono uguali.

    Nel metodo main, vengono create due istanze istanza1 e istanza2. Vengono quindi effettuati confronti tra queste istanze, sia in termini di uguaglianza fisica 
    (se sono la stessa istanza in memoria) che in termini di uguaglianza strutturale (se i loro valori _foo sono uguali). Le stringhe stampate sulla console indicano i risultati di questi confronti.
 */
