def imprimir(arr):
    print(arr)
    print()


def mudanca(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j -= 1
            imprimir(arr)
        arr[j + 1] = temp

arr = [3,2,5,8,1,4]
imprimir(arr)
mudanca(arr, len(arr))
imprimir(arr)