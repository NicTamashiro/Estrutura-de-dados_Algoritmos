def soma(arr, n):
    if n == 0: return 0

    return arr[0] + soma(arr[1:], n - 1)

arr = [1,2,3,4]
resultado = soma(arr, len(arr))
print(resultado)