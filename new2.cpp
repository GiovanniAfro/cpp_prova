/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:05:20 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/15 12:14:05 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;
    
    public:
        Student() : _login("default")
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }

        ~Student()
        {
            std::cout << "Student " << this->_login << " is died" << std::endl;
        }
};

int main()
{
    Student* jim= new Student[42];

    // se stai leggendo i miei appunti metti una stellina alla repo :P

    //Deallocazione dell'array di oggetti Student usando delete[]
    delete [] jim;
}