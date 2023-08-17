Algoritmo sin_titulo
	Algoritmo OrdenarMatrizAleatoria
		Definir matrizOriginal[3][3] como Entero
		Definir matrizOrdenada[3][3] como Entero
		
		// Llenar la matriz original con números aleatorios
		Para fila <- 1 Hasta 3 Hacer
			Para columna <- 1 Hasta 3 Hacer
				matrizOriginal[fila][columna] <- Aleatorio(1, 100)  // Cambia el rango según tus necesidades
			FinPara
		FinPara
		
		// Copiar la matriz original en la matriz ordenada
		Para fila <- 1 Hasta 3 Hacer
			Para columna <- 1 Hasta 3 Hacer
				matrizOrdenada[fila][columna] <- matrizOriginal[fila][columna]
			FinPara
		FinPara
		
		// Ordenar la matriz ordenada
		Para k <- 1 Hasta 9 Hacer
			Para i <- 1 Hasta 3 Hacer
				Para j <- 1 Hasta 2 Hacer
					Si matrizOrdenada[i][j] > matrizOrdenada[i][j + 1] Entonces
						// Intercambiar elementos
						Definir temp como Entero
						temp <- matrizOrdenada[i][j]
						matrizOrdenada[i][j] <- matrizOrdenada[i][j + 1]
						matrizOrdenada[i][j + 1] <- temp
					FinSi
				FinPara
			FinPara
		FinPara
		
		// Mostrar la matriz original
		Escribir "Matriz original:"
		Para fila <- 1 Hasta 3 Hacer
			Para columna <- 1 Hasta 3 Hacer
				Escribir matrizOriginal[fila][columna], " ";
			FinPara
			Escribir ""
		FinPara
		
		// Mostrar la matriz ordenada
		Escribir "Matriz ordenada:"
		Para fila <- 1 Hasta 3 Hacer
			Para columna <- 1 Hasta 3 Hacer
				Escribir matrizOrdenada[fila][columna], " ";
			FinPara
			Escribir ""
		FinPara
FinAlgoritmo

FinAlgoritmo
