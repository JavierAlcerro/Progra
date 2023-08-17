Algoritmo CalculadoraAreas
    Definir opcion as Caracter
    Definir area as Real
    
    Escribir "Seleccione la figura para la cual desea calcular el �rea:"
    Escribir "a) Tri�ngulo"
    Escribir "b) Cuadrado"
    Escribir "c) Rect�ngulo"
    Escribir "d) C�rculo"
    Leer opcion
    
    Si opcion = "a" o opcion = "A" Entonces
        Definir base, altura as Real
        Escribir "Ingrese la base del tri�ngulo: "
        Leer base
        Escribir "Ingrese la altura del tri�ngulo: "
        Leer altura
        area <- (base * altura) / 2
    Sino Si opcion = "b" o opcion = "B" Entonces
			Definir lado as Real
			Escribir "Ingrese el lado del cuadrado: "
			Leer lado
			area <- lado * lado
		Sino Si opcion = "c" o opcion = "C" Entonces
				Definir base, altura as Real
				Escribir "Ingrese la base del rect�ngulo: "
				Leer base
				Escribir "Ingrese la altura del rect�ngulo: "
				Leer altura
				area <- base * altura
			Sino Si opcion = "d" o opcion = "D" Entonces
					Definir radio as Real
					Escribir "Ingrese el radio del c�rculo: "
					Leer radio
					area <- 3.14159 * radio * radio
				Sino
					Escribir "Opci�n no v�lida."
				FinSi
				
				Si opcion = "a" o opcion = "A" o opcion = "b" o opcion = "B" o opcion = "c" o opcion = "C" o opcion = "d" o opcion = "D" Entonces
					Escribir "El �rea de la figura seleccionada es:", area
				FinSi
FinAlgoritmo
