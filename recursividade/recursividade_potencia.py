def potencia(base, exp):
    if exp == 0: return 1

    return base * potencia(base, exp - 1)

base = int(input("Qual a base: "))
exp = int(input("Qual o expoente: "))

resultado = potencia(base, exp)
print(resultado)