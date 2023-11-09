/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:58:16 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 18:17:47 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{

public:

    Sample(void);
    ~Sample(void);

   int  getFoo(void) const;// Accessore per ottenere il valore di _foo
   void setFoo(int v);// Accessore per impostare il valore di _foo

private:

    int _foo;
    
};

#endif