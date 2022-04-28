/*
Autor: Miguel Duss�n
*/

/*
Este programa pide una cadena de caracteres y luego la muestra en pantalla
*/

#include <iostream> //Biblioteca de entrada/salida para imprimir en pantalla

using namespace std; //Espacio de nombres de plantilla est�ndar

int main(){				//Inicia funci�n principal
	string cadena;	//Declaraci�n de una cadena
	cadena = "";		//Inicializaci�n
	/*
	Mensaje que describe qu� hace el programa
	*/
	cout << "Este programa pide una cadena de caracteres y luego la muestra" ;
	cout << "en pantalla" << endl << endl;
	/*
	Muestra en pantalla la cadena "Escribe algo" y luego un fin de 
	l�nea, para que el cursor salte a la siguiente l�nea.
	*/
	cout << "Escribe algo" << endl;	
	
	//Captura por teclado y captura en la variable "cadena"
	//getline(cin,cadena);	//Esta l�nea captura toda una frase y la asigna a cadena.
	cin >> cadena;					//Esta l�nea captura una palabra solamente
	
	//Imprime el valor de la cadena y un fin de l�nea			
	cout << cadena << endl;			
		
	cin.get();		//Evita que se cierre la ventana de la consola. Si no funciona,
								//Pruebe otras alternativas de las ofrecidas en 01_hola_mundo.cpp
	return 0;			//Valor de retorno por defecto
}								//Llave izquierda que encierra la funci�n principal
