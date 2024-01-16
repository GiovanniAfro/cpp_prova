/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:00 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/16 15:54:02 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dump_32bits_integer(int const n);
void	dump_64bits_double(double const z);

int	main(void)
{
	int a = 42; //Reference value

	double b = a;         //Implicit conversion cast
	double c = (double)a; //Explicit conversion cast

	double d = a;   //Implicit promotion -> OK
	int e = d;      //Implicit demotion  -> Hazardous !
	int f = (int)d; //Explicit demotion  -> Ok, you're in charge

	dump_32bits_integer(a);

	dump_64bits_double(b);
	dump_64bits_double(c);

	dump_64bits_double(d);
	dump_32bits_integer(e);
	dump_32bits_integer(f);

	return (0);
}

/* ### 1. Conversione Implicita ed Esplicita:

**Conversione Implicita:**
La conversione implicita avviene quando il compilatore gestisce automaticamente la conversione tra due tipi di dati compatibili. 
Ad esempio, quando si assegna un valore di un tipo a una variabile di un altro tipo, 
il compilatore può effettuare la conversione implicita se non c'è rischio di perdita di dati.

```c
int a = 42;
double b = a; // Conversione implicita da int a double
```

**Conversione Esplicita:**
La conversione esplicita avviene quando il programmatore forza manualmente una conversione tra due tipi di dati. 
Questo viene fatto utilizzando operatori di cast, come nel seguente esempio:

```c
double c = (double)a; // Conversione esplicita da int a double
```

### 2. Promozione e Demozione:

**Promozione Implicita:**
La promozione implicita si verifica quando un valore di un tipo "meno largo" viene convertito automaticamente in un tipo "più largo". 
Ad esempio, quando un valore intero viene promosso a un valore in virgola mobile:

```c
int a = 42;
double d = a; // Promozione implicita da int a double
```

**Demozione Implicita:**
La demozione implicita è più rischiosa e si verifica quando un valore di un tipo "più largo" viene convertito automaticamente in un tipo "meno largo". 
Ciò può comportare la perdita di dati o precisione.

```c
double e = 3.14;
int f = e; // Demozione implicita da double a int
```

### 3. Tipi di Casting in C:

**Casting Implicito:**
È il cast che il compilatore gestisce automaticamente senza richiedere l'intervento esplicito del programmatore.

```c
int a = 42;
double b = a; // Casting implicito da int a double
```

**Casting Esplicito:**
Il casting esplicito avviene quando il programmatore specifica manualmente il tipo di conversione utilizzando operatori di cast.

```c
double c = (double)a; // Casting esplicito da int a double
```

### 4. Rappresentazione Binaria dei Dati:

La rappresentazione binaria dei dati è cruciale per comprendere come avvengono le conversioni e come possono influenzare la precisione e la perdita di dati. 
Ad esempio, quando si converte un intero in un valore in virgola mobile, i bit possono essere reinterpretati in modo diverso.

### Esempio di Perdita di Precisione:

```c
double x = 123456789;       // Un grande numero intero
int y = (int)x;             // Demozione esplicita da double a int
printf("%d\n", y);          // Possibile perdita di precisione
```

In questo esempio, il grande numero intero iniziale potrebbe essere rappresentato con precisione in un `double`, ma una volta convertito in un `int`, 
la parte decimale verrà tagliata, causando una perdita di precisione.

In sintesi, comprendere come avvengono le conversioni, 
promozioni e demozioni in termini di rappresentazione binaria dei dati è fondamentale per scrivere codice robusto e prevenire errori di precisione e perdita di dati in C. */