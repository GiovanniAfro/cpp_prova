/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.calss.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:13:23 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 15:07:52 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "construncor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "DEESTRUCOR CALLED" << std::endl;
	return;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member function bar called with char overload : " << c << std::endl;
	return;
}

void	Sample::bar(int const n) const
{
	std::cout << "Member function bar called with int overload : " << n << std::endl;
	return;
}

void	Sample::bar(float const z) const
{
	std::cout << "Member function bar called with float overload : " << z << std::endl;
	return;
}

void	Sample::bar(Sample const & i) const 
{
	(void) i; // Evita il warning "unused parameter"
	std::cout << "Member function bar called with Sample class overload" << std::endl;
	return;
}