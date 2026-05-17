def decrescente(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1
        
        while j >= 0 and arr[j] < temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp



arr = [1,3,2,5,9,4]
print(arr)

decrescente(arr, len(arr))

print(arr)

