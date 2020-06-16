# Sortear um nome entre 4 lidos e imprimir o mesmo na tela
import colorama
import random
colorama.init()
nome = []
print('\033[31;1m<< - Sistema de sorteio - >>\033[m')
for c in range(1, 5):
    nome.append(str(input(f'Digite o {c}o. nome: ')))
sorteado = random.randint(0, 3)
print(f'O nome do sorteado é: \033[31m{nome[sorteado]}\033[m')
