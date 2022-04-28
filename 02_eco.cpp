/*
Autor: Miguel Dussán
*/

/*
Este programa pide una cadena de caracteres y luego la muestra en pantalla
*/

#include <iostream> //Biblioteca de entrada/salida para imprimir en pantalla

using namespace std; //Espacio de nombres de plantilla estándar

int main(){				//Inicia función principal
	string cadena;	//Declaración de una cadena
	cadena = "";		//Inicialización
	/*
	Mensaje que describe qué hace el programa
	*/
	cout << "Este programa pide una cadena de caracteres y luego la muestra" ;
	cout << "en pantalla" << endl << endl;
	/*
	Muestra en pantalla la cadena "Escribe algo" y luego un fin de 
	línea, para que el cursor salte a la siguiente línea.
	*/
	cout << "Escribe algo" << endl;	
	
	//Captura por teclado y captura en la variable "cadena"
	//getline(cin,cadena);	//Esta línea captura toda una frase y la asigna a cadena.
	cin >> cadena;					//Esta línea captura una palabra solamente
	
	//Imprime el valor de la cadena y un fin de línea			
	cout << cadena << endl;			
		
	cin.get();		//Evita que se cierre la ventana de la consola. Si no funciona,
								//Pruebe otras alternativas de las ofrecidas en 01_hola_mundo.cpp
	return 0;			//Valor de retorno por defecto
}								//Llave izquierda que encierra la función principal
