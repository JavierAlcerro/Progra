Algoritmo ConcatenarNumerosPositivos
    Definir numeros[5] como Entero
    Definir cadenaNumeros como Cadena
    cadenaNumeros <- ""
	
    Para i <- 1 Hasta 5 Hacer
        Escribir "Ingrese el n�mero ", i, ": "
        Leer numeros[i]
		
        Si numeros[i] <= 0 Entonces
            Salir // Sale del bucle si se ingresa un n�mero 0 o negativo
        FinSi
		
        cadenaNumeros <- cadenaNumeros + ConvertirATexto(numeros[i])
    FinPara
	
    Escribir "Cadena de n�meros positivos ingresados: ", cadenaNumeros
FinAlgoritmo
