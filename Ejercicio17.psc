Algoritmo CalcularInteresPrestamo
    Definir montoPrestamo, meses, tasaInteres, interesTotal como Real
    
    Escribir "Ingrese el monto del préstamo: "
    Leer montoPrestamo
    
    Escribir "Ingrese el número de meses: "
    Leer meses
    
    tasaInteres <- 0.02  // 2% mensual
    
    interesTotal <- montoPrestamo * tasaInteres * meses
    
    Escribir "El interés total a pagar es:", interesTotal
FinAlgoritmo
