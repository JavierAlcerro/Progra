Algoritmo CalcularEdad
    Definir diaNacimiento, mesNacimiento, anioNacimiento como Entero
    Definir diaActual, mesActual, anioActual como Entero
    
    Escribir "Ingrese el d�a de su nacimiento: "
    Leer diaNacimiento
    
    Escribir "Ingrese el mes de su nacimiento: "
    Leer mesNacimiento
    
    Escribir "Ingrese el a�o de su nacimiento: "
    Leer anioNacimiento
    
    Escribir "Ingrese el d�a actual: "
    Leer diaActual
    
    Escribir "Ingrese el mes actual: "
    Leer mesActual
    
    Escribir "Ingrese el a�o actual: "
    Leer anioActual
    
    // Calcular la edad
    Definir edad como Entero
    edad <- anioActual - anioNacimiento
    
    Si mesActual < mesNacimiento o (mesActual = mesNacimiento y diaActual < diaNacimiento) Entonces
        edad <- edad - 1
    FinSi
    
    Escribir "Su edad es:", edad, " a�os"
FinAlgoritmo
