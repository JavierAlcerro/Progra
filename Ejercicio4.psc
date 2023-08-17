Algoritmo ElementosMayoresQueNumero
    Definir n como Entero
    n <- 5  // Cambia este valor al número que desees
    
    Definir arreglo[10] como Entero  // Cambia el tamaño del arreglo según tus necesidades
    
    // Llenar el arreglo con valores
    Para i <- 1 Hasta 10 Hacer
        arreglo[i] <- Aleatorio(1, 20)  // Cambia el rango de los valores si es necesario
    FinPara
    
    // Mostrar elementos mayores que el número 'n'
    Escribir "Elementos mayores que ", n, ":"
    Para i <- 1 Hasta 10 Hacer
        Si arreglo[i] > n Entonces
            Escribir arreglo[i]
        FinSi
    FinPara
FinAlgoritmo
