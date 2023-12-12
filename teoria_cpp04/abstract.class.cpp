/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:43:05 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/13 00:54:16 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
    private:
        std::string _name;
    
    public:
        virtual void    attack(std::string const & target) = 0;
        void            sayHello(std::string const & target);
};

class Warrior : ACharacter
{
    public:
        virtual void    attack(std::string const & target);
};

void    ACharacter::sayHello(std::string const & target)
{
    std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class ICoffeMaker
{
    public:
        virtual void       fillWaterTank(IWaterSource * src) = 0;
        virtual ICofee*     makeCoffee(std::string const & type) = 0;
};

int main()
{
    ACharacter*     a = new Warrior();

    //this would NOT be ok because ACharacter is abstrack
    //ACharacter*  b = new ACharacter();

    a->sayHello("students");
    a->attack("roger");
}