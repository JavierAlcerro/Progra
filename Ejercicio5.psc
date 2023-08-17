Algoritmo ConcatenarNumerosPositivos
    Definir numeros[5] como Entero
    Definir cadenaNumeros como Cadena
    cadenaNumeros <- ""
	
    Para i <- 1 Hasta 5 Hacer
        Escribir "Ingrese el número ", i, ": "
        Leer numeros[i]
		
        Si numeros[i] <= 0 Entonces
            Salir // Sale del bucle si se ingresa un número 0 o negativo
        FinSi
		
        cadenaNumeros <- cadenaNumeros + ConvertirATexto(numeros[i])
    FinPara
	
    Escribir "Cadena de números positivos ingresados: ", cadenaNumeros
FinAlgoritmo
