def bin_search(arr, tamanho, target):
    inicio = 0
    fim = tamanho - 1
    resultado = -1

    while(inicio <= fim):
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == target:
            resultado = meio
            fim = meio - 1
        elif arr[meio] > target:
            fim = meio - 1
        else:
            inicio = meio + 1
    return resultado

arr = [1,2,2,2,3,3,4]
target = int(input("Qual elemento deseja saber o indice da primeira ocorrencia: "))

resultado = bin_search(arr, len(arr), target)

if resultado == -1: 
    print("Elemento nao encontrado!")
else:
    print("Elemento encontrado na posicao", resultado)
