/*

Observações a serem feitas pelo código original:

- Sem identação
- Não possui documentação
- Não está auto-explicativo


Ordem das técnicas de programação aplicadas neste exercício:

Programação defensiva:
	- Estilo e Design


*/

/***********************************************************************
* File: prova1-2017-1.java											   *
* Purpose: Find prime numbers using Sieve's Erastostenes algorithmm.   *
***********************************************************************/

package erastostenes;

import java.lang.String;

public class Erastostenes {
	
	/* This method serves to applie Sieve's Erastotenes algorithm, that find a 
	prime number in a short interval determined by the user using 'max' variable */

	public String prime(int max) {

		/* Verifing if max value is valid. */
		assert(max > 0);

		/* Declares a boolean array variable with the size save in 'max' variable, counting plus 2 numbers. */
		boolean[] result = new boolean[max + 2];
		
		/* Initializing 0 and 1 because they aren't prime and to algorithm works good. */
		result[0] = false;
		result[1] = false;
		
		/* This code block serves to initializate boolean array. */
		for (int iterator = 2; iterator < result.lenght; iterator++) {
			result[iterator] = true;

			/* Testing if all results were initializates. */
			assert(result[iterator], true);
		}

		/* This code block serves to find a prime number. */
		for (int value = 2; value <= max; value++) {
			if (result[value]) {
				/* At this part, when a prime number was found, it walks by the numbers to find if exists any multiple. */
				for (int notPrime = 2 * value; notPrime <= max; notPrime += value) {
 					/* Initializing value's multiples. */
 					result[notPrime] = false;
				}
			}
		}

		/* That code block serves to build a string with all prime numbers, that was differenciating with false. */
		String resultString = String.valueOf(2);
		for (int iterator = 3; iterator <= max; iterator++) {
			if (result[iterator]) {
			/* Finding a prime number and concatenating a string to show all prime numbers. */
				resultString += ", " + iterator;
			}
		}

		return resultString;
	}
}