def ordenar(arr):
    for i in range(1, len(arr)):
        temp = arr[i]
        j = i - 1

        while j >= 0 and arr[j]["idade"] > temp["idade"]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp

pessoas = [
    {"nome": "Ana", "idade": 30},
    {"nome": "Bob", "idade": 22},
    {"nome": "Leo", "idade": 25}
]

ordenar(pessoas)

for p in pessoas:
    print(p["nome"], p["idade"])