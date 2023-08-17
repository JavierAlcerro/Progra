Algoritmo ContarValores
    Definir array[10] como Entero
    Definir positivos, negativos, nulos como Entero
    
    positivos = 0
    negativos = 0
    nulos = 0
    
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese el valor ", i, ": "
        Leer array[i]
        
        Si array[i] > 0 Entonces
            positivos = positivos + 1
        FinSi
        
        Si array[i] < 0 Entonces
            negativos = negativos + 1
        FinSi
        
        Si array[i] = 0 Entonces
            nulos = nulos + 1
        FinSi
    FinPara
    
    Escribir "Cantidad de valores positivos: ", positivos
    Escribir "Cantidad de valores negativos: ", negativos
    Escribir "Cantidad de valores nulos: ", nulos
FinAlgoritmo
