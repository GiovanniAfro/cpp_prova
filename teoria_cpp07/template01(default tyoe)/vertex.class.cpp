/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertex.class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:25:04 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/29 10:55:02 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float >
class Vertex
{
    public:
        Vertex(T const & x, T const & y, T const & z) : _x(x), _y(y), _z(z) {}
        ~Vertex( void ) {}

        T const & getX(void) const {return this->_x;}
        T const & getY(void) const {return this->_y;}
        T const & getZ(void) const {return this->_z;}
    private:

        T const _x;
        T const _y;
        T const _z;

        Vertex(void);
};

template<typename T >
std::ostream & operator<<(std::ostream & o, Vertex < T > const & v)
{
    std::cout.precision(1);
    o << std::setiosflags(std::ios::fixed);
    o << "vertex( ";
    o << v.getX() << ", ";
    o << v.getY() << ", ";
    o << v.getZ() << ", ";
    o << " )";
    return o;
}