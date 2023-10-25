/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:16:35 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/25 15:29:03 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int gl_var = 1;
int f(void) { return 2; }

namespace Gio {
    int gl_var = 2;
    int f(void) { return 5; }
}

namespace Ste {
    int gl_var = 6;
    int f(void) { return 7; }
}

namespace Anto = Gio;

int main(void)
{
    printf("gl_var:    [%d]\n", gl_var);
    printf("f():       [%d]\n\n", f());

    printf("gl_var:    [%d]\n", Gio::gl_var);
    printf("f():       [%d]\n\n", Gio::f());

    printf("gl_var:    [%d]\n", Ste::gl_var);
    printf("f():       [%d]\n\n", Ste::f());

    printf("gl_var:    [%d]\n", Anto::gl_var);
    printf("f():       [%d]\n\n", Anto::f());

    printf("gl_var:     [%d]\n", ::gl_var);
    printf("f();        [%d]\n\n", ::f());
}