def ordenar(arr):
    contador = 0
    for i in range(1, len(arr)):
        temp = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j-= 1
            contador += 1
        arr[j + 1] = temp
    return contador

arr = [3,1,5,4,9,7];

qtd = ordenar(arr)

print(qtd)


