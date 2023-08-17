Algoritmo CalculadoraAreas
    Definir opcion as Caracter
    Definir area as Real
    
    Escribir "Seleccione la figura para la cual desea calcular el área:"
    Escribir "a) Triángulo"
    Escribir "b) Cuadrado"
    Escribir "c) Rectángulo"
    Escribir "d) Círculo"
    Leer opcion
    
    Si opcion = "a" o opcion = "A" Entonces
        Definir base, altura as Real
        Escribir "Ingrese la base del triángulo: "
        Leer base
        Escribir "Ingrese la altura del triángulo: "
        Leer altura
        area <- (base * altura) / 2
    Sino Si opcion = "b" o opcion = "B" Entonces
			Definir lado as Real
			Escribir "Ingrese el lado del cuadrado: "
			Leer lado
			area <- lado * lado
		Sino Si opcion = "c" o opcion = "C" Entonces
				Definir base, altura as Real
				Escribir "Ingrese la base del rectángulo: "
				Leer base
				Escribir "Ingrese la altura del rectángulo: "
				Leer altura
				area <- base * altura
			Sino Si opcion = "d" o opcion = "D" Entonces
					Definir radio as Real
					Escribir "Ingrese el radio del círculo: "
					Leer radio
					area <- 3.14159 * radio * radio
				Sino
					Escribir "Opción no válida."
				FinSi
				
				Si opcion = "a" o opcion = "A" o opcion = "b" o opcion = "B" o opcion = "c" o opcion = "C" o opcion = "d" o opcion = "D" Entonces
					Escribir "El área de la figura seleccionada es:", area
				FinSi
FinAlgoritmo
