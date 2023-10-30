/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:22:25 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 13:34:41 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;

    return;
}

Sample::~Sample(void)
{
    std::cout << "Destrcuctor called" << std::endl;
    Sample::_nbInst -= 1;

    return;
}

int     Sample::getNbInst(void)
{
    return Sample::_nbInst;
}

int     Sample::_nbInst = 0;