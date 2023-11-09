/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:44:13 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/29 17:46:45 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"

int main(void)
{
    //Sample instance; il compilatore darà errore perchè una classe da di default lo scope del suo contenuto come privato se non specificato
    Sample1 instance1; //la struct invece avrà lo scope di defualt sul public per il resto sono letteralmente uguali
    

    return 0;
}