#include <math.h>

def calcular_area_triangulo():
    base = float(input("Ingresa la base del triángulo: "))
    altura = float(input("Ingresa la altura del triángulo: "))
    area = (base * altura) / 2
    print("El área del triángulo es:", area)

def calcular_area_cuadrado():
    lado = float(input("Ingresa el lado del cuadrado: "))
    area = lado * lado
    print("El área del cuadrado es:", area)

def calcular_area_rectangulo():
    base = float(input("Ingresa la base del rectángulo: "))
    altura = float(input("Ingresa la altura del rectángulo: "))
    area = base * altura
    print("El área del rectángulo es:", area)

def calcular_area_circulo():
    radio = float(input("Ingresa el radio del círculo: "))
    area = math.pi * radio**2
    print("El área del círculo es:", area)

def main():
    print("Calculadora de áreas de figuras geométricas")
    print("1. Triángulo")
    print("2. Cuadrado")
    print("3. Rectángulo")
    print("4. Círculo")
    opcion = int(input("Selecciona una opción: "))
    
    if opcion == 1:
        calcular_area_triangulo()
    elif opcion == 2:
        calcular_area_cuadrado()
    elif opcion == 3:
        calcular_area_rectangulo()
    elif opcion == 4:
        calcular_area_circulo()
    else:
        print("Opción inválida. Por favor, selecciona una opción válida.")

main()

