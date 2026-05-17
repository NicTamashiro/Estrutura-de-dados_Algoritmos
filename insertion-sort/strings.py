def ordenar(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp

arr = ["banana", "uva", "abacaxi", "manga", "laranja"]
ordenar(arr, len(arr))
print(arr)