def bin_search(arr, inicio, fim, n):
    if inicio > fim: return -1

    meio = inicio + (fim - inicio) // 2

    if(arr[meio] == n): return meio
    if(arr[meio] > n): return bin_search(arr, inicio, meio - 1, n)
    else: return bin_search(arr, meio + 1, fim, n)

arr = [1,3,5,7,11,23,43]

n = int(input("Qual elemento deseja encontrar: "))

resultado = bin_search(arr, 0, len(arr) - 1, n)

if resultado == -1: print("Elemento nao encontrado")
else: print(f"Elemento na posicao {resultado}")
