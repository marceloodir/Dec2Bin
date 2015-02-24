/*
 * main.c
 *
 *  Created on: 22/02/2015
 *      Author: marcelo
 */
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int dec2bin(int valor) {
	if(valor < 2) {
		return valor;
	}else{
		return (valor % 2) + 10 * dec2bin(valor/2);
	}
}

int main(int argc, char **argv) {

	printf("valor %d",dec2bin(101));
	return EXIT_SUCCESS;
}

