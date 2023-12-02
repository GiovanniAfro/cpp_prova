/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sasmple.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:18:47 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 17:44:05 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric constructor called" << std::endl;
	return;
}

Sample::Sample(Sample const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

Sample &	Sample::operator=(Sample const & rhs)
{
	std::cout << "Assigment operator called" << std::endl;

	if(this != &rhs)
		this->_foo = rhs.getFoo();
	
	return *this;
}

std::ostream & 			operator<<(std::ostream & o, Sample const & i)
{
	o << "The value of rhis _foo is : " << i.getFoo();

	return o;
}