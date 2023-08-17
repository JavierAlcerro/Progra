Algoritmo OrdenarNumerosEnVector
    Definir vector[10] como Entero
    Definir temp, i, j como Entero
	
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese el número ", i, ": "
        Leer vector[i]
		
        // Ordenar el vector en cada iteración
        Para j <- 1 Hasta i-1 Hacer
            Si vector[j] > vector[i] Entonces
                temp <- vector[j]
                vector[j] <- vector[i]
                vector[i] <- temp
            FinSi
        FinPara
    FinPara
	
    Escribir "Vector ordenado:", vector
FinAlgoritmo
