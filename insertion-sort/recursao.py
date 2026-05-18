def ordenar(arr, n):
    if n <= 1: return 

    ordenar(arr, n - 1)

    temp = arr[n - 1]
    j = n - 2

    while j >= 0 and arr[j] > temp:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = temp



arr = [4,1,2,8,9,3]

ordenar(arr, len(arr))

print(arr)