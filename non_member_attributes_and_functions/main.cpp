/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:25:38 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 13:32:28 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
    Sample joejoe;

    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    
    return;
}

void f1(void)
{
    Sample joejoe;

    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    f0();

    return;
}

int main()
{
    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of istance = " << Sample::getNbInst() << std::endl;

    return 0;
}