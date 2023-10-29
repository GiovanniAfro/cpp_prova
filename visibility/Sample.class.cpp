/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:39:06 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 16:46:09 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this is publicFoo" << this->publicFoo << std::endl;

    this->_privateFoo = 0;
    std::cout << "this is _privateFoo" << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();

    return;
}

Sample::~Sample(void)
{
    std::cout << "Destrcuctor was called" << std::endl;
    return;
}

void Sample::publicBar(void) const
{
    std::cout << "Member function publicBar called" << std::endl;
    return;
}

void Sample::_privateBar(void) const
{
    std::cout << "Member function _privatebar called" << std::endl;
    return;
}