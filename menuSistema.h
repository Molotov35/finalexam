#include "persona.h"


void menuSistema() {
	system("cls");
	printf("\n     ======================================================================\n");
	printf("\t\t\t     BIENVENIDO AL SISTEMA\n");
	printf("\t\t    Sistema de Nominas\n");
	printf("\t\t    Programacion 2022 | Grupo no.3\n");
	printf("     ======================================================================\n");

	persona estudiante;
	estudiante.menu();

	getchar();
}
