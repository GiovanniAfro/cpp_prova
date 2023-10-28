/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:43:47 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/28 17:02:11 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//il metodo che dovrebbe essere usato

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
    std::cout << "Constructor called" << std::endl;

    this->a1 = p1;
    std::cout << "this->a1 = " << this->a1 << std::endl;

    this->a2 = p2;
    std::cout << "this->a2 = " << this->a2 << std::endl;

    this->a3 = p3;
    std::cout << "this->a3 = " << this->a3 << std::endl;

    return;
}

Sample1::~Sample1(void)
{
    std::cout << "Destrcuctor called" << std::endl;
    return;
}