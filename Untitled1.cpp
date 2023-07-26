#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarMoneda(int lanzamientos)
{
    int cara = 0, cruz = 0;
    
    for (int i = 0; i < lanzamientos; i++)
    {
        int resultado = rand() % 2; 
        
        if (resultado == 0)
            cara++;
        else
            cruz++;
    }
    
    cout << "Resultados de lanzamiento de moneda:" << endl;
    cout << "Cara: " << cara << " veces" << endl;
    cout << "Cruz: " << cruz << " veces" << endl;
    
    return cara;
}

void lanzarDados()
{
    int lanzamientos = 0, suma = 0, count = 0;
    
    while (count < 6)
    {
        int resultado = (rand() % 6) + 1; 
        
        cout << "Resultado del lanzamiento del dado: " << resultado << endl;
        
        suma += resultado;
        
        if (resultado == 6)
            count++;
        
        lanzamientos++;
    }
    
    cout << "Se lanzo el dado " << lanzamientos << " veces." << endl;
    cout << "La suma de los números obtenidos fue: " << suma << endl;
}

int main()
{
    srand(time(0)); 
    
    int opcion;
    
    do
    {
        cout << "Menu Ejercicio Examen:" <<  endl;
        cout << "1. Lanzar monedas" <<  endl;
        cout << "2. Lanzar dados" <<  endl;
        cout << "3. Terminar" <<  endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        
        switch (opcion)
        {
            case 1:
            {
                int lanzamientos;
                
                cout << "Ingrese la cantidad de lanzamientos de moneda: ";
                cin >> lanzamientos;
                
                lanzarMoneda(lanzamientos);
                break;
            }
            case 2:
                lanzarDados();
                break;
            case 3:
                cout << "Programa terminado." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
        
        cout << endl;
    } while (opcion != 3);
    
    return 0;
}
