#include <stdio.h>

int main(){
	int fila;
	int columna;
	bool ganador = false;
	int turnos = 0;
	
	printf("-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-\n");
	printf("-|-|-|-|-|-|-|-| BIENVENIDX! |-|-|-|-|-|-|-|-\n");
	printf("-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-\n");
	printf("\n");
	printf("___________          /.       ______________     _____________\n");
	printf("|                   /  .            |           |             |\n");
	printf("|                  /    .           |           |             |\n");
	printf("|     ______      /      .          |           |             |\n");
	printf("|          |     /--------.         |           |             |\n");
	printf("|          |    /          .        |           |             |\n");
	printf("|__________|   /            .       |           |_____________|\n");
	printf("\n");
	printf("\n");

	char tablero[3][3] = {{'-', '-', '-'},
						  {'-', '-', '-'},
						  {'-', '-', '-'}};
	printf("   %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
	printf("  -----------\n");
	printf("   %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
	printf("  -----------\n");
	printf("   %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
	
	
	while(!ganador){
	
		do{
			if(turnos%2 == 0){
		printf("Jugador 1 ");
		} else{
			printf("Jugador 2 ");
		}
	printf("realice una jugada de la forma: fila, columna.\n");
	scanf("%d, %d", &fila, &columna);
		} while(tablero[fila][columna] != '-');
			turnos++;
	if(turnos%2 == 0){
		tablero[fila][columna]	= 'X';
		} else{
			tablero[fila][columna] = 'O';
		}
		
	printf("\n");
	printf("   %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
	printf("  -----------\n");
	printf("   %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
	printf("  -----------\n");
	printf("   %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
	
		if((tablero[0][0] == tablero[0][1])&&(tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
		printf("\n");
		printf("Ganador en la fila 0\n");
		ganador = true;
	}
		if((tablero[1][0] == tablero[1][1])&&(tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
		printf("\n");
		printf("Ganador en la fila 1\n");
		ganador = true;
	}
		if((tablero[2][0] == tablero[2][1])&&(tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
		printf("\n");
		printf("Ganador en la fila 2\n");
		ganador = true;
	}
		if((tablero[0][0] == tablero[1][0])&&(tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
		printf("\n");
		printf("Ganador en la columna 0\n");
		ganador = true;
	}
		if((tablero[0][1] == tablero[1][1])&&(tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
		printf("\n");
		printf("Ganador en la columna 1\n");
		ganador = true;
	}
		if((tablero[0][2] == tablero[1][2])&&(tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
		printf("\n");
		printf("Ganador en la columna 2\n");
		ganador = true;
	}
		if((tablero[0][0] == tablero[1][1])&&(tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
		printf("\n");
		printf("Ganador en la diagonal slash 1\n");
		ganador = true;
	}
		if((tablero[2][0] == tablero[1][1])&&(tablero[1][1] == tablero[0][2]) && (tablero[2][0] != '-')){
		printf("\n");
		printf("Ganador en la diagonal backslash 2\n");
		ganador = true;
	}
}
return 0;
}
