/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:09:10 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/27 15:44:40 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

/* int main(void)
{
    Sample instance;

    return 0;
} */

int main(void)
{
    Macchina mia;
    Sample joejoe;

    mia.marca = "Ferrari";
    mia.anno = 2022;
    mia.accelera();

    return 0;
}