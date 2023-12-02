/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:04:59 by gcavanna          #+#    #+#             */
/*   Updated: 2023/12/02 15:07:40 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

#include <iostream>

class Sample {
public:
    Sample(void);
    ~Sample(void);

    // Overload 1
    void bar(char const c) const;
    
    // Overload 2
    void bar(int const n) const;

    // Overload 3
    void bar(float const z) const;

    // Overload 4
    void bar(Sample const & i) const;
};

#endif