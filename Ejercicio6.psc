Algoritmo ContarPrimosEnVector
    Definir tamanoVector como Entero
    tamanoVector <- 10  // Cambia el tamaño del vector según tus necesidades
	
    Definir vector[tamanoVector] como Entero
    Definir contadorPrimos como Entero
    contadorPrimos <- 0
	
    // Llenar el vector con números aleatorios
    Para i <- 1 Hasta tamanoVector Hacer
        vector[i] <- Aleatorio(1, 100)  // Cambia el rango según tus necesidades
    FinPara
	
    // Función para verificar si un número es primo
    Funcion EsPrimo(numero como Entero) como Booleano
        Si numero <= 1 Entonces
            Devolver Falso
        FinSi
        
        Para i <- 2 Hasta Entero(Raiz(numero)) Hacer
            Si numero % i = 0 Entonces
                Devolver Falso
            FinSi
        FinPara
        
        Devolver Verdadero
FinFuncion

// Contar números primos en el vector
Para i <- 1 Hasta tamanoVector Hacer
	Si EsPrimo(vector[i]) Entonces
		contadorPrimos <- contadorPrimos + 1
	FinSi
FinPara

Escribir "Vector generado:", vector
Escribir "Cantidad de números primos en el vector:", contadorPrimos
FinAlgoritmo
