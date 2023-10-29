/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:29:46 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 16:33:06 by gcavanna         ###   ########.fr       */
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