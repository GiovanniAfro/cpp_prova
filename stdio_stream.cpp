/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_stream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:56:55 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/25 17:45:17 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* int main(void)
{
    char    buff[512];

    std::cout << "Hello Wordl !" << std::endl;
    std::cout << "Input a word ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;

    return 0;
} */

int main(void)
{
    int numero;

    std::cout << "inserisci un numero" << std::endl;
    std::cin >> numero;
    if (numero < 0)
        std::cerr << "numero negativo non ci piace" << std::endl;
    else
        std::cout << "hai messo: [" <<numero<<"]" << std::endl;
    return 0;
}