/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:45:06 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/29 10:56:36 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "vertex.class.cpp"

int main(void)
{
    Vertex<int> v1(12, 23, 54);
    Vertex<>    v2(12, 23, 54);

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;

    return 0;
    
}