Algoritmo CalcularInteresPrestamo
    Definir montoPrestamo, meses, tasaInteres, interesTotal como Real
    
    Escribir "Ingrese el monto del pr�stamo: "
    Leer montoPrestamo
    
    Escribir "Ingrese el n�mero de meses: "
    Leer meses
    
    tasaInteres <- 0.02  // 2% mensual
    
    interesTotal <- montoPrestamo * tasaInteres * meses
    
    Escribir "El inter�s total a pagar es:", interesTotal
FinAlgoritmo
