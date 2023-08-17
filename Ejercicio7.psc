Algoritmo CalcularCostoTeclados
    Definir cantidadTeclados, costoUnitario, totalPagar como Real
    
    Escribir "Ingrese la cantidad de teclados a comprar: "
    Leer cantidadTeclados
    
    Si cantidadTeclados > 8 Entonces
        costoUnitario <- 85
    Sino Si cantidadTeclados >= 4 Entonces
			costoUnitario <- 90
		Sino
			costoUnitario <- 100
		FinSi
		
		totalPagar <- cantidadTeclados * costoUnitario
		
		Escribir "Número de teclados a comprar:", cantidadTeclados
		Escribir "Total a pagar:", totalPagar, " Lempiras"
FinAlgoritmo
