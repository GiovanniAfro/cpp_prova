/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:40:00 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 17:48:55 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
    int foo;

    Sample(void);
    ~Sample(void);

    void    bar(void) const;
};

#endif

/*Class (Classe):
Nelle classi, i membri sono, per impostazione predefinita, privati (cioè accessibili solo dalla classe stessa).
Puoi utilizzare l'accesso public, private, o protected per specificare esplicitamente il livello di visibilità di ciascun membro all'interno della classe.
Le classi sono comunemente utilizzate quando si desidera nascondere i dettagli di implementazione e fornire un'interfaccia pubblica per interagire con l'oggetto.*/