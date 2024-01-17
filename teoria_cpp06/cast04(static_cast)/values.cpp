/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:10:21 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/17 15:12:42 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     main(void)
{
    int     a = 42;                     //Reference value

    double  b = a;                      //Implicit promotion -> OK
    int     c = b;                      //IMplicit demotion ->Hell no !
    int     d = static_cast<int>(b);   //Explicit demotion -> Ok, I obey 

    return 0;
}