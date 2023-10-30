/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:24:26 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 17:12:19 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{

    Sample      instance;
    Sample *    instancep = &instance;

    int         Sample::*p = NULL;
    void        (Sample::*f)(void) const;

    p = &Sample::foo;

    std::cout << "Value of member foo = " << instance.foo << std::endl;
    instance.*p = 21;
    std::cout << "Value of member foo = " << instance.foo << std::endl;
    instancep->*p = 42;
    std::cout << "Value of member foo = " << instance.foo << std::endl;


    f = &Sample::bar;

    (instance.*f)();
    (instancep->*f)();

    return 0;

}