/* MÓDULO ENCARGADO DE BARAJAR LAS CARTAS, UTILIZANDO VARIABLES DINÁMICAS Y PUNTEROS.
   POR EMILIO J. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#include "barajeo.h"

typedef struct TipoNodo{
	int valor;
	TipoNodo * siguiente;
};

typedef TipoNodo * TipoSecuencia;
typedef TipoNodo * TipoPuntNodo;

int jug1[48];

/* Las siguiente abreviaturas significan Espada (esp), Copa (cop) y Basto (bas), así como
   Caballo (cab). Representa las 48 cartas principales de la baraja española*/
						  
const char* getCarta(int num) {
	
   switch (num) 
   {
      case 1: return "oro1";break;
      case 2: return "oro2";break;
      case 3: return "oro3";break;
      case 4: return "oro4";break;
      case 5: return "oro5";break;
      case 6: return "oro6";break;
      case 7: return "oro7";break;
      case 8: return "oro8";break;
      case 9: return "oro9";break;
      case 10: return "oroSota";break;
      case 11: return "oroCab";break;
      case 12: return "oroRey";break;
      
      case 13: return "esp1";break;
      case 14: return "esp2";break;
      case 15: return "esp3";break;
      case 16: return "esp4";break;
      case 17: return "esp5";break;
      case 18: return "esp6";break;
      case 19: return "esp7";break;
      case 20: return "esp8";break;
      case 21: return "esp9";break;
      case 22: return "espSota";break;
      case 23: return "espCab";break;
      case 24: return "espRey";break;
      
      case 25: return "cop1";break;
      case 26: return "cop2";break;
      case 27: return "cop3";break;
      case 28: return "cop4";break;
      case 29: return "cop5";break;
      case 30: return "cop6";break;
      case 31: return "cop7";break;
      case 32: return "cop8";break;
      case 33: return "cop9";break;
      case 34: return "copSota";break;
      case 35: return "copCab";break;
      case 36: return "copRey";break;
      
      case 37: return "bas1";break;
      case 38: return "bas2";break;
      case 39: return "bas3";break;
      case 40: return "bas4";break;
      case 41: return "bas5";break;
      case 42: return "bas6";break;
      case 43: return "bas7";break;
      case 44: return "bas8";break;
      case 45: return "bas9";break;
      case 46: return "basSota";break;
      case 47: return "basCab";break;
      case 48: return "basRey";break;
   }
}

void barajeo();

void barajeo(){
	
	TipoSecuencia secuencia;
	TipoPuntNodo cursor, anterior, nuevo;
	
	
	int aux1, aux2; // Para escoger aleatoriamente las cartas
	int rep1=0; // Para contar el reparto de carta en cada montón (jugadores, centro y baraja)
	int carta; // Carta seleccionada para el reparto
	
	srand(time(NULL));
	
	
	cursor=new TipoNodo;
	cursor=secuencia;
	
	for(int a=1; a<=48; a++){ // Creación de la baraja de cartas con punteros
		
		nuevo=new TipoNodo; // Crear nodo con el nuevo número
		nuevo->valor=a;
		
		nuevo->siguiente=secuencia;
		secuencia=nuevo;
		
	}
		
		
	/* Se barajan y reparten las cartas */
		
	for(int a=48; a>0; a--){ 
	
		aux1=rand()%a+1;
		
		cursor=secuencia;
		anterior=NULL;
		
		if (aux1>1){
				
			while (aux1>1){ // Buscar carta elegida aleatoriamente
				
				anterior=cursor;
				cursor=cursor->siguiente;	
				aux1--;	
			}
		};
			
		carta=cursor->valor; // Carta seleccionada para el reparto
			
			
		if (anterior!=NULL) {
				
			anterior->siguiente=cursor->siguiente;
				
		} else {
				
			secuencia=cursor->siguiente; // Si es la primera carta actual
				
		};
		
		delete cursor;
			
			
		jug1[rep1]=carta;
		rep1++;		
		
		}	
	
}
