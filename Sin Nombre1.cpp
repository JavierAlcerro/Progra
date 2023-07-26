#include <math.h>

def calcular_area_triangulo():
    base = float(input("Ingresa la base del tri�ngulo: "))
    altura = float(input("Ingresa la altura del tri�ngulo: "))
    area = (base * altura) / 2
    print("El �rea del tri�ngulo es:", area)

def calcular_area_cuadrado():
    lado = float(input("Ingresa el lado del cuadrado: "))
    area = lado * lado
    print("El �rea del cuadrado es:", area)

def calcular_area_rectangulo():
    base = float(input("Ingresa la base del rect�ngulo: "))
    altura = float(input("Ingresa la altura del rect�ngulo: "))
    area = base * altura
    print("El �rea del rect�ngulo es:", area)

def calcular_area_circulo():
    radio = float(input("Ingresa el radio del c�rculo: "))
    area = math.pi * radio**2
    print("El �rea del c�rculo es:", area)

def main():
    print("Calculadora de �reas de figuras geom�tricas")
    print("1. Tri�ngulo")
    print("2. Cuadrado")
    print("3. Rect�ngulo")
    print("4. C�rculo")
    opcion = int(input("Selecciona una opci�n: "))
    
    if opcion == 1:
        calcular_area_triangulo()
    elif opcion == 2:
        calcular_area_cuadrado()
    elif opcion == 3:
        calcular_area_rectangulo()
    elif opcion == 4:
        calcular_area_circulo()
    else:
        print("Opci�n inv�lida. Por favor, selecciona una opci�n v�lida.")

main()

