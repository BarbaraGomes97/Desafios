#Ler um número e exibir seu dobro, triplo e raiz quadrada.
import math
import colorama
colorama.init()
n = int(input('Digite um número: '))
print(f'O dobro de {n} é \033[34m{n*2}\033[m\nO tripo de {n} é \033[34m{n*3}\033[m\nA raiz quadrada de {n} é \033[34m{math.sqrt(n)}\033[m')
