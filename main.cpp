/* Programa principal del Juego de Cartas 1 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Barajeo\barajeo.cpp"

/*** Tipos definidos para las cartas en posesión del jugador (4), de la máquina (4),
de la parte central del juego (3), y para el resto del mazo de cartas (37) ***/


typedef int TipoLin4[4];
typedef int TipoLin3[3];
typedef int TipoLin37[37];


/* Impresión del tablero de juego tras el reparto de cartas */


void ImprimirMesa (TipoLin4 mainJug1, TipoLin4 mainJug2, TipoLin3 mainCent, TipoLin37 mazo){

	printf("");
	printf("     --------------------------------------------------------------------\n");
	printf("    |                                                                    |\n");

	printf("    |    Jugador 1: ");

	for (int i=0; i<4; i++){

		printf(" %8s ", getCarta(mainJug1[i]));

	}

	printf("             |\n");

	printf("    |    Jugador 2: ");

	for (int i=0; i<4; i++){

		printf(" %8s ", getCarta(mainJug2[i]));

	}

	printf("             |\n    |                                                                    |\n");



	printf("    |                                                                    |\n");
	printf("    |                                                                    |\n");


	printf("    |        Centro: ");

	for (int i=0; i<3; i++){

		printf(" %8s ", getCarta(mainCent[i]));

	}

	printf("                      |\n    |                                                                    |\n");
	printf("    |                                                                    |\n");
	printf("    |                                                                    |\n");

	printf("    |    Mazo: ");

	for (int i=0; i<37; i++){

		int j=i+1;

		printf(" %8s ", getCarta(mazo[i]));

		if(j%4==0){
			printf("                  |\n    |          ");
		}
		if (j==37){
			 printf("                                                |\n");
		}

	}



	printf("    |                                                                    |\n");
	printf("    |                                                                    |\n");
	printf("     --------------------------------------------------------------------\n");
}


/*******************************************************************************************/
/*																						    /
/*      MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN     /
/*																						    /
/*																						    /
/*******************************************************************************************/


int main(){


	TipoLin4 mainJug1, mainJug2; // Cartas en posesión del juegador y de la máquina
	TipoLin3 mainCent; // Cartas en la zona central de la mesa de juego
	TipoLin37 mazo; // Cartas en el mazo, que no están siendo utilizadas
	int cont1=0, cont2=0, cont3=0, cont4=0; // Contador para el reparto de cartas
	

	/*** SE BARAJAN LAS CARTAS CON EL PROCEDIMIENTO "barajeo()" ***/


	barajeo();
	

	/* Reparto de cartas */
	

for (int i=0; i<48; i++){

	if (cont1<4){

		mainJug1 [cont1]=jug1[i];
		cont1++;
		continue;
	}

	if (cont2<4){

		mainJug2 [cont2]=jug1[i];
		cont2++;
		continue;
	}

	if (cont3<3){

		mainCent [cont3]=jug1[i];
		cont3++;
		continue;
	}

	if (cont4<37){

		mazo [cont4]=jug1[i];
		cont4++;
		continue;
	}
}

    // Imprimir mesa

	ImprimirMesa(mainJug1, mainJug2, mainCent, mazo);

}
