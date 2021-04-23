#ifndef __FUNCOES_H__
#define __FUNCOES_H__

/**
 * Configura os pinos de um dos displays como saída.
 * 
 * @param pinos Pinos configurados para este display.
 */
void configurarPinos(int pinos[4]);

/**
 *  Faz o print de um número em um display.
*/ 
void nixiePrint(int pinos[4], int numero);

#endif // __FUNCOES_H__