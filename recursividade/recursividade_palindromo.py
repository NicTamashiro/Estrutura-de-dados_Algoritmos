def palindromo(text):
    if len(text) <= 1: return 1
    if text[0] != text[-1]: return 0
    return palindromo(text[1:-1])

text = "arara"
resultado = palindromo(text)
if resultado == 0:
    print("Nao eh palindromo")
else:
    print("Eh palindromo")