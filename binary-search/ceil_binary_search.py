def ceil_bin_search(arr, tamanho, target):
    inicio = 0
    fim = tamanho - 1
    resultado = -1

    while(inicio <= fim):
        meio = inicio + (fim - inicio) // 2

        if(arr[meio] == target):
            inicio = meio + 1
        elif(arr[meio] > target):
            resultado = arr[meio]
            fim = meio - 1
        else :
            inicio = meio + 1

    return resultado

arr = [1, 3, 5, 7, 9]
target = int(input("Qual o alvo: "))

resultado = ceil_bin_search(arr, len(arr), target)

if resultado == -1: print("Nao existe numero maior")
else: print(f"{resultado} e o menor elemento maior que {target}")