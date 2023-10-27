/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:04:39 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/27 15:42:10 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>
#include <string>

class Sample
{
  
public:
    
    Sample(void);
    ~Sample(void);
};

class Macchina
{

public:
    std::string marca;
    int anno;

    //funzione membro
    void  accelera(){
        std::cout << "L'auto sta accelerando!" << std::endl;
    }
};

#endif
