Algoritmo BuscarNumeroEnMatriz
    Definir matriz[4][5] como Entero
    Definir numeroBuscado, filaEncontrada, columnaEncontrada como Entero
    Definir encontrado como Booleano
    encontrado <- Falso
    
    // Cargar la matriz con los primeros números naturales
    Para fila <- 1 Hasta 4 Hacer
        Para columna <- 1 Hasta 5 Hacer
            matriz[fila][columna] <- (fila - 1) * 5 + columna
        FinPara
    FinPara
    
    // Solicitar al usuario que ingrese el número a buscar
    Escribir "Ingrese un número a buscar en la matriz: "
    Leer numeroBuscado
    
    // Buscar el número en la matriz
    Para fila <- 1 Hasta 4 Hacer
        Para columna <- 1 Hasta 5 Hacer
            Si matriz[fila][columna] = numeroBuscado Entonces
                encontrado <- Verdadero
                filaEncontrada <- fila
                columnaEncontrada <- columna
                Salir
            FinSi
        FinPara
        Si encontrado Entonces
            Salir
        FinSi
    FinPara
    
    // Mostrar los resultados
    Si encontrado Entonces
        Escribir "El número", numeroBuscado, "se encuentra en la fila", filaEncontrada, "y columna", columnaEncontrada
    Sino
        Escribir "El número", numeroBuscado, "no se encuentra en la matriz."
    FinSi
FinAlgoritmo
