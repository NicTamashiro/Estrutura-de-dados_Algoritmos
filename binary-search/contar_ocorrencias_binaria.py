def bin_search_left(arr, tamanho, num):
    inicio = 0
    fim = tamanho - 1
    resultado = -1

    while(inicio <= fim):
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == num:
            resultado = meio
            fim = meio - 1
        elif arr[meio] > num:
            fim = meio - 1
        else:
            inicio = meio + 1

    return resultado


def bin_search_right(arr, tamanho, num):
    inicio = 0
    fim = tamanho - 1
    resultado = -1

    while(inicio <= fim):
        meio = inicio + (fim - inicio) // 2

        if arr[meio] == num:
            resultado = meio
            inicio = meio + 1
        elif arr[meio] > num:
            fim = meio - 1
        else:
            inicio = meio + 1

    return resultado

arr = [1,3,3,3,4,5,5]

num = int(input("Qual numero deseja saber quantas vezes aparece no vetor? "))

left = bin_search_left(arr, len(arr), num)
right = bin_search_right(arr, len(arr), num)

if left == - 1:
    print("o numero nao apareceu nesse vetor.")
else:
    print(f"O numero '{num}' apareceu [{right - left + 1}] vez(es)!")