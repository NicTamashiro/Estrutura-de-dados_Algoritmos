def binary_search(arr, tamanho, n):
    inicio = 0
    fim = tamanho - 1
    contador = 1

    while inicio <= fim:
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == n: return contador
        elif arr[meio] > n: 
            fim = meio -1
            contador += 1
        else: 
            inicio = meio + 1
            contador += 1
    return 0 

arr = [1,3,5,7,11,23,43]

n = int(input("Qual o elemento: "))
resultado = binary_search(arr, len(arr), n)

if resultado == 0: print("Eelemento nao encontrado!")
else: print(f"{resultado} Interacoes.")