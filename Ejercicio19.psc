Algoritmo ConvertirTemperatura
    Definir opcion como Caracter
    Definir celsius, fahrenheit como Real
    
    Escribir "Seleccione la conversión que desea realizar:"
    Escribir "a) De Celsius a Fahrenheit"
    Escribir "b) De Fahrenheit a Celsius"
    Leer opcion
    
    Si opcion = "a" o opcion = "A" Entonces
        Escribir "Ingrese la temperatura en grados Celsius: "
        Leer celsius
        fahrenheit <- (celsius * 9/5) + 32
        Escribir "La temperatura en grados Fahrenheit es:", fahrenheit
    Sino Si opcion = "b" o opcion = "B" Entonces
			Escribir "Ingrese la temperatura en grados Fahrenheit: "
			Leer fahrenheit
			celsius <- (fahrenheit - 32) * 5/9
			Escribir "La temperatura en grados Celsius es:", celsius
		Sino
			Escribir "Opción no válida."
		FinSi
FinAlgoritmo
