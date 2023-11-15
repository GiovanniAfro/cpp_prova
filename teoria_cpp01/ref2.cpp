/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:46:19 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 12:55:04 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    byPtr(std::string* str)
{
    *str += " and ponies";
}

void byConstPtr(std::string const *str)
{
    std::cout << *str << std::endl;
}

void    byRef(std::string& str)
{
    str += " and ponies";
}

void    byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "i like otters";

    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = " a me piacciono i treni";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);

    return 0;
}