Algoritmo InvertirCifras
    Definir numero, numeroInvertido, cifra como Entero
    
    Escribir "Ingrese un n�mero: "
    Leer numero
    
    numeroInvertido <- 0
    
    Mientras numero > 0 Hacer
        cifra <- numero % 10
        numeroInvertido <- numeroInvertido * 10 + cifra
        numero <- numero // 10
    FinMientras
    
    Escribir "N�mero con cifras invertidas:", numeroInvertido
FinAlgoritmo
