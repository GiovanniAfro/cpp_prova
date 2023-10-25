/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_stream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:56:55 by gcavanna          #+#    #+#             */
/*   Updated: 2023/10/25 18:10:39 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* int main(void)
{
    char    buff[512];

    std::cout << "Hello Wordl !" << std::endl;
    std::cout << "Input a word ";
    std::cin >> buff;
    std::cout << "You entered: [" << buff << "]" << std::endl;

    return 0;
} */

int main(void)
{
    int numero;

    std::cout << "inserisci un numero" << std::endl;
    std::cin >> numero;
    if (numero < 0)
        std::cerr << "numero negativo non ci piace" << std::endl;
    else
        std::cout << "hai messo: [" <<numero<<"]" << std::endl;
    return 0;
}


/* gli "stdio streams" sono concetti associati all'input e all'output dei dati, e si riferiscono principalmente a tre stream standard:
1. **stdin**:
   - `stdin` è l'abbreviazione di "standard input" (input standard).
   - Rappresenta il flusso di input standard da cui un programma C++ può leggere dati.
   - Di solito, `stdin` è collegato alla tastiera, il che significa che puoi leggere dati dalla tastiera utilizzando `cin` in C++.

2. **stdout**:
   - `stdout` è l'abbreviazione di "standard output" (output standard).
   - Rappresenta il flusso di output standard in cui un programma C++ può scrivere dati.
   - Di solito, `stdout` è collegato al display (console), il che significa che puoi scrivere dati sullo schermo utilizzando `cout` in C++.

3. **stderr**:
   - `stderr` è l'abbreviazione di "standard error" (errore standard).
   - Rappresenta il flusso di output standard per gli errori o messaggi di errore.
   - Di solito, `stderr` è collegato al display (console) come `stdout`, ma viene utilizzato per stampare messaggi di errore in modo che siano chiaramente distinguibili dai dati normali.

 */

/* std::endl è una sequenza di escape utilizzata principalmente con lo stream di output standard (std::cout) per inserire una nuova riga nel testo che viene scritto. 
Questo è utile per formattare l'output in modo più leggibile, in quanto separa i dati in righe diverse.
Ecco cosa fa std::endl:
1.Inserisce una nuova riga: Quando std::endl viene utilizzato con std::cout (il flusso di output standard), scrive un carattere di ritorno a capo (newline) nel testo. 
Questo fa sì che il testo successivo verrà scritto su una nuova riga, rendendo l'output più organizzato.
2.Svuota il buffer: Inoltre, std::endl forza il buffer di output a essere svuotato. 
Il buffer è una memoria temporanea utilizzata per accumulare dati prima che vengano effettivamente scritti su un dispositivo di output. Usando std::endl,
 puoi garantire che i dati siano immediatamente scritti sulla console o su un file, invece di aspettare che il buffer si riempia. */