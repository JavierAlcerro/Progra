Algoritmo InvertirCifras
    Definir numero, numeroInvertido, cifra como Entero
    
    Escribir "Ingrese un número: "
    Leer numero
    
    numeroInvertido <- 0
    
    Mientras numero > 0 Hacer
        cifra <- numero % 10
        numeroInvertido <- numeroInvertido * 10 + cifra
        numero <- numero // 10
    FinMientras
    
    Escribir "Número con cifras invertidas:", numeroInvertido
FinAlgoritmo
