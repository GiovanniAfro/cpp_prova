/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:28:31 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/30 12:34:14 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample  istance1(42);
    Sample  instance2(42);

    if (&istance1 == &istance1)
        std::cout << "instance1 and instance1 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not physically equal" << std::endl;

    if (&istance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;

    if (istance1.compare(&istance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

     if (istance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

    return 0;
}   