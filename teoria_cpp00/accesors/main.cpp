/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:07:05 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 18:09:36 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample isrance;

    isrance.setFoo(42);
    std::cout << "instance.getFoo() = " << isrance.getFoo() << std::endl;
    isrance.setFoo(-42);
    std::cout << "instance.getFoo() = " << isrance.getFoo() << std::endl;

    return 0;
}