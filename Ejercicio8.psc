Algoritmo sin_titulo
	Algoritmo DeterminarTipoLetra
		Definir letra como Caracter
		
		Escribir "Ingrese una letra del alfabeto: "
		Leer letra
		
		letra <- Minuscula(letra)  // Convertir la letra a minúscula para simplificar la comparación
		
		Si letra = "a" o letra = "e" o letra = "i" o letra = "o" o letra = "u" Entonces
			Escribir "La letra ingresada es una vocal."
		Sino
			Escribir "La letra ingresada es una consonante."
		FinSi
FinAlgoritmo

FinAlgoritmo
