/**

    1. Numeros pares hasta n: Escribe un programa que pida al usuario un numero entero positivo
        y luego imprima todos los numeros pares desde el 1 hasta n. Si el numero es impar deberia indicar
        que el numero es impar.

    5. Numeros primos: Crear un programa que le pida al usuario un numero ent positivo, e indicar si es primo o no.
        Un numero es primo si solo es diisible por uno y por si mismo. Si no es primo, debera mostrar los divisores del numero.

    6. Escribe un programa que pida al usuario un numero entero y cuente cuantos digitos tiene, el programa debe seguir solicitando
        numeros hasta que el usuario ingrese un numero negativo, en cuyo caso el programa termina.

*/

#include <iostream>

using namespace std;

void verificarPrimosyDivisores () {

                    cout << "Numeros primos\n";

                int numeroEjercicio2, contadorModulos, modulosEjercicio2, divisores;

                contadorModulos = 0;
                cout << "Ingrese un numero: ";
                cin >> numeroEjercicio2;
                cout << endl;


                for (int i=1; i<=numeroEjercicio2; i++) {
                    modulosEjercicio2 = numeroEjercicio2 % i;

                    if (modulosEjercicio2 == 0) {
                        contadorModulos = contadorModulos + 1;
                        divisores = i;
                        cout << divisores << endl;
                    } else {}
                }

                    if (contadorModulos == 2) {
                        cout << "El numero es primo";
                    } else {
                        cout << endl;
                        cout << "El numero no es primo";
                    }
                    cout << endl;

}

void numerosParesHastaN () {
                        cout << "Numeros pares hasta n\n";

                    int numero, modulo;

                    cout << "Ingrese un numero: ";
                    cin >> numero;
                    cout << endl;

                    modulo = numero % 2;

                    if (modulo == 0) {

                        cout << "Los numeros pares son:\n";

                        for (int i=2; i<=numero; i+=2) {

                            cout << i << endl;
                        }

                        } else {

                            cout << "El numero es impar\n";
                        }

}

void cuantosDigitosTiene () {
                    cout << "Cuantos digitos tiene? (Coloque un numero negativo para salir)\n";

                int numeroEjercicio3, contadorDivisiones, resultadoDivision;

                while (numeroEjercicio3 >= 0) {

                contadorDivisiones = 0;

                cout << "Ingrese un numero: ";
                cin >> numeroEjercicio3;

                resultadoDivision = numeroEjercicio3 / 10;

                while (resultadoDivision > 0) {
                    contadorDivisiones = contadorDivisiones + 1;
                    resultadoDivision = resultadoDivision / 10;
                }
                    if (numeroEjercicio3 >= 0) {
                    contadorDivisiones = contadorDivisiones + 1;
                    cout << "El numero tiene " << contadorDivisiones << " cifras\n\n";

                    } else {}
                }

}

int main () {

    int opcion;

    do {
        cout << "Menu de opciones:\n\n";
        cout << "1. Numeros pares hasta n\n";
        cout << "2. Numeros primos\n";
        cout << "3. Cuantos digitos tiene?\n";
        cout << "4. Salir\n\n";
        cin >> opcion;
        cout << endl;

        switch (opcion) {

            case 1:
                numerosParesHastaN ();
                break;

            case 2:
                verificarPrimosyDivisores ();
                break;

            case 3:
                cuantosDigitosTiene ();
                break;

            case 4:
                cout << "Hasta la proxima";
                break;

            default:
                cout << "Opcion no valida";
                break;
        }

      cout << endl;

    } while (opcion != 4);

    return 0;
}
