Algoritmo SumaNPrimerosNaturales
    Definir N, suma, i como Entero
	
    Escribir "Ingrese el número límite N: "
    Leer N
	
    suma <- 0
	
    Para i <- 1 Hasta N Hacer
        suma <- suma + i
    FinPara
	
    Escribir "La suma de los primeros ", N, " números naturales es:", suma
FinAlgoritmo
