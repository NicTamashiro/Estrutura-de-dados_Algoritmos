def crescente(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp

arr = [3,1,5,8,4]
crescente(arr, len(arr))

for i in range(0, len(arr)):
    print(arr[i], end=" ")