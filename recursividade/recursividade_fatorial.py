def fatorial(n):
    if n == 1:
        return 1
    return fatorial(n - 1) * n

print("Digite o numero que voce quer saber o fatorial: ")
n = int(input())
fat = fatorial(n)
print(fat)