Algoritmo TablaDeMultiplicar
    Definir numero, multiplicador, resultado como Entero
    
    Escribir "Ingrese un n�mero entero del 1 al 12: "
    Leer numero
    
    Si numero >= 1 y numero <= 12 Entonces
        Escribir "Tabla de multiplicar del ", numero, ":"
        
        Para multiplicador <- 1 Hasta 12 Hacer
            resultado <- numero * multiplicador
            Escribir numero, " x ", multiplicador, " = ", resultado
        FinPara
    Sino
        Escribir "N�mero fuera del rango v�lido."
    FinSi
FinAlgoritmo
