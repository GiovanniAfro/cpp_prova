/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:29:46 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 17:04:17 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{

public:

    int publicFoo;

    Sample(void);
    ~Sample(void);

    void    publicBar(void) const;


private:

    int _privateFoo;

    void _privateBar(void) const;

};

#endif

/*class MiaClasse {
private:
    int miaVariabilePrivata;
public:
    void ImpostaVariabile(int valore) {
        miaVariabilePrivata = valore; // Questo è consentito perché è all'interno della stessa classe.
    }
    int OttieniVariabile() {
        return miaVariabilePrivata; // Anche questo è consentito, poiché è all'interno della stessa classe.
    }
};
*/
