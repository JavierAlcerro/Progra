Algoritmo ElementosMayoresQueNumero
    Definir n como Entero
    n <- 5  // Cambia este valor al n�mero que desees
    
    Definir arreglo[10] como Entero  // Cambia el tama�o del arreglo seg�n tus necesidades
    
    // Llenar el arreglo con valores
    Para i <- 1 Hasta 10 Hacer
        arreglo[i] <- Aleatorio(1, 20)  // Cambia el rango de los valores si es necesario
    FinPara
    
    // Mostrar elementos mayores que el n�mero 'n'
    Escribir "Elementos mayores que ", n, ":"
    Para i <- 1 Hasta 10 Hacer
        Si arreglo[i] > n Entonces
            Escribir arreglo[i]
        FinSi
    FinPara
FinAlgoritmo
