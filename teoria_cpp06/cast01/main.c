/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:01:48 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/16 16:25:19 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float		a = 420.042f;		//Reference value

	void *		b = &a;				//IMplicit reinterpretation cast
	void * 		c = (void *) &a;	//Explicir reinterpretation cast

	void *		d = &a;				//Implicit promotion -> OK
	int	 *		e = d;				//Implicit demotion  -> Hazardeous !
	int	 *		f = (int *) d;		//Explicit demotion  -> OK, I obey

	printf("%p, %f\n", &a, a);

	printf("%p\n", b);
	printf("%p\n", c);

	printf("%p\n", d);
	printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);

	return 0;
}


/* Questo codice C dimostra il concetto di reinterpretazione, 
che è l'atto di trattare un valore di un tipo come se fosse un valore di un tipo diverso.

Reinterpretazione Implicita:
void *b = &a;

Qui, l'indirizzo della variabile float a viene assegnato a un puntatore void b senza alcuna conversione di tipo esplicita. 
Questo è un esempio di reinterpretazione implicita, dove il compilatore converte automaticamente il puntatore float in un puntatore void.

Reinterpretazione Esplicita:
void *c = (void *) &a;

Qui, l'indirizzo di a viene esplicitamente convertito in un puntatore void utilizzando la sintassi (void *). 
Questo è un esempio di reinterpretazione esplicita, 
dove il programmatore istruisce esplicitamente il compilatore a trattare il puntatore come un tipo diverso.

Promozione Implicita:
void *d = &a;

Qui, l'indirizzo di a viene assegnato a un puntatore void d. 
Questo è un esempio di promozione implicita, che è generalmente sicura.

Demotion Implicita:
int *e = d;

Qui, il puntatore void d viene assegnato a un puntatore int e. 
Questo è un esempio di demotion implicita, 
che può essere pericolosa perché non si sa se il puntatore void può essere correttamente interpretato come un puntatore int.

Demotion Esplicita:
int *f = (int *) d;

Qui, il puntatore void d viene esplicitamente convertito in un puntatore int utilizzando la sintassi (int *). 
Questo è un esempio di demotion esplicita, che è generalmente sicura se si sa che la conversione è valida.

Infine, il codice stampa gli indirizzi e i valori delle variabili per dimostrare gli effetti delle conversioni.

Ricorda, la reinterpretazione può essere utile in alcune situazioni, ma deve essere usata con cautela per evitare comportamenti indefiniti e bug. */


/* Quando e Perché Usare la Reinterpretazione:

    Interazione con API esterne:
        Quando si interagisce con librerie o API esterne, 
		talvolta è necessario interpretare i dati in modo diverso da come sono stati dichiarati localmente. 
		In questo caso, la reinterpretazione può essere utile.

    Gestione di Memoria Grezza:
        In situazioni in cui si tratta direttamente di memoria grezza o si lavora con strutture dati complesse, 
		la reinterpretazione può essere utile per interpretare i dati in modi diversi.

    Accesso a Dati Polimorfici:
        In linguaggi come C, che supportano l'approccio "punta-e-spara", 
		la reinterpretazione può essere utilizzata per accedere a dati polimorfici senza conoscere il tipo specifico a tempo di compilazione.

    Manipolazione di Blocchi di Memoria Generici:
        In alcune situazioni, ad esempio nella gestione di strutture dati generiche, 
		la reinterpretazione può essere utilizzata per lavorare con blocchi di memoria senza dover conoscere il tipo specifico.

Tuttavia, la reinterpretazione è una pratica potenzialmente pericolosa e può portare a comportamenti indefiniti se non viene eseguita correttamente. 
È importante capire bene il contesto in cui viene utilizzata e garantire che sia effettuata con attenzione per evitare problemi di sicurezza e stabilità.
 */