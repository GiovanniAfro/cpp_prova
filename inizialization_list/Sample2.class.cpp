/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:55:09 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/28 17:02:30 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//metodo consigliato in 42 per inizializzare

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
    std::cout << "Counstructor called" << std::endl;
    std::cout << "this->a1 = " << this->a1 << std::endl;
    std::cout << "this->a2 = " << this->a2 << std::endl;
    std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}