#include <cstdio>
#include <cstdlib>

#include <mkl.h>

using namespace std;

int main(int argc, char *argv[]) {

	double fin, inicio = dsecnd(); //Inicialización falsa

	inicio = dsecnd(); //Inicio de cronometraje

	printf("Hola, MKL lista para utilizarse\n");

	fin = dsecnd(); //Fin de cronometraje
					//Report de resultado en microsegundos
	printf("Tiempo: %lf usec\n", (fin - inicio)*1.0e6);

	getchar();
	return 0;
}