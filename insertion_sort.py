def insertion_sort(vet, tamanho):
    for i in range(1, tamanho):
        temp = vet[i]
        j = i - 1

        while j >= 0 and vet[j] > temp:
            vet[j + 1] = vet[j]
            j -= 1
        
        vet[j + 1] = temp


vet = [55, 44, 12, 42]
tamanho = len(vet)

insertion_sort(vet, tamanho)

for i in range(tamanho):
    print(vet[i])
