# Sortear um nome entre 4 lidos e imprimir o mesmo na tela e a ordem do sorteio.
import colorama
import random
colorama.init()
lista = []
print('\033[34;1m< SORTEIO >\033[m')
for c in range(1, 5):
    lista.append(str(input(f'Digite o {c}o. nome: ')))
random.shuffle(lista)
print('-'*25)
for c in range(0, 4):
    print(f'{c+1}o. escolhido: {lista[c]}')
print('-'*25)
