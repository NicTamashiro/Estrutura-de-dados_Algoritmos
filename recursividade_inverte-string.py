def inverter(string, n):
    if n == 0:
        return
    print(texto[n - 1], end="")
    inverter(texto, n - 1)

texto = "abcd"
inverter(texto, len(texto))