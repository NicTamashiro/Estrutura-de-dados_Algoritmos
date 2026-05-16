def binario(vet, valor, tamanho):
    inicio = 0
    fim = tamanho - 1

    while inicio <= fim:
        meio = inicio + (fim - inicio) // 2

        if vet[meio] == valor:
            print(f"[{valor}] encontra-se na posicao {meio}")
            return meio
        elif vet[meio] > valor:
            fim = meio - 1
        else:
            inicio = meio + 1
    print(f"O valor {[valor]} nao foi encontrado.")
    return -1   # nao encontrado (convencao)

vet = [2,5,6,8,10,14,55,73,87,93]
print("Informe o valor para pesquisa: ")
valor = int(input())
tamanho = len(vet)

binario(vet, valor, tamanho)
