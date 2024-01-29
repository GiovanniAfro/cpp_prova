/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:23:15 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/29 17:26:38 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pair.class.cpp"

int main()
{
	Pair<int, int> 				p1(4, 2);
	Pair<std::string, float>	p2(std::string ("Pi"), 3,14);
	Pair<float, bool >			p3(4,2f, true);
	Pair<bool, bool >			p4(true, false);

	std::cout << p1 <<std::endl;
	std::cout << p2 <<std::endl;
	std::cout << p3 <<std::endl;
	std::cout << p4 <<std::endl;

	return 0;
}