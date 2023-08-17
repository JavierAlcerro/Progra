Algoritmo RealizarOperacionMatematica
    Definir num1, num2 como Entero
    Definir operador como Caracter
    
    Escribir "Ingrese el primer número: "
    Leer num1
    
    Escribir "Ingrese el segundo número: "
    Leer num2
    
    Escribir "Ingrese el operador (+, -, x, /, mod): "
    Leer operador
    
    Segun operador
			Caso "+"
            Escribir "Resultado:", num1 + num2
			Caso "-"
            Escribir "Resultado:", num1 - num2
			Caso "x", "X"
            Escribir "Resultado:", num1 * num2
			Caso "/"
            Si num2 <> 0 Entonces
                Escribir "Resultado:", num1 / num2
            Sino
                Escribir "Error: División por cero no permitida."
            FinSi
			Caso "mod", "MOD"
            Escribir "Resultado:", num1 % num2
			De Otro Modo
            Escribir "Operador no válido."
    FinSegun
FinAlgoritmo
