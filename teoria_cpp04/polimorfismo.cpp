/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polimorfismo.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:13:53 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/11 16:28:48 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
	public:
		void	sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		void	sayHello(std::string const & target);
};

class Cat
{
	//[...]
};

void	Character::sayHello(std::string const & target)
{
	std::cout<< "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << "F*** off " << target << ", i don't like you !" << std::endl;
}

int	main()
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();

	//This is also OK, because Warrior IS a CHARACTER
	Character*	b = new Warrior();

	//This would NOT be ok because Character IS NOT a Warrior
	//(Although they are related, W IS-A C, the reverse is untrue)
	//Warrior*	c = new Character();

	//This would NOT be ok either because CAT IS NOT a Character
	//(They are not even related)
	//Character*	d = new Cat();

	a->sayHello("students");

	b->sayHello("students");
}