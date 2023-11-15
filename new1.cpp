/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:00:52 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 11:55:49 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;

    public:
        Student(std::string login) : _login(login)
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student()
        {
            std::cout << "Stdudent " << this->_login << " is died" << std::endl;
        }
};

int main()
{
    Student     bob = Student("jbob");
    Student*    jim = new Student("jjim");

    //go crazy AAA

    delete jim; //jim morto

    return 0; //bob morto
}