/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:49:25 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 16:55:36 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.publicFoo = 42;
    //instance._privateFoo = 24;

    std::cout << "This is the public variabile = " << instance.publicFoo << std::endl;
    //std::cout << "This is the private variabile = " << instance._privateFoo << std::endl;

    instance.publicBar();
    //instance._privateBar();

    return 0;
}