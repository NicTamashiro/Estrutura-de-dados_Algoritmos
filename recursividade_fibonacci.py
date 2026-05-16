def fib(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)

print("Digite a posicao do fibonacci que voce quer saber: ")
n = int(input())
resultado = fib(n)

print(resultado)