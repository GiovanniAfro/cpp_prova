/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:59:49 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 18:06:05 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;

    this->setFoo(0);
    std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

    return;
}

Sample::~Sample(void)
{
    std::cout << "Desctrucor called" << std::endl;
    return;
}

int Sample::getFoo(void) const
{
    return this->_foo;
}

void Sample::setFoo(int v)
{
    if (v >= 0)
        this->_foo = v;
    else if(v < 0)
        std::cerr << "Solo positivi" << std::endl;
    return;
}
