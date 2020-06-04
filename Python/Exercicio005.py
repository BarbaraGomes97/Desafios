#Ler um número inteiro e informar seu antecessor e sucessor.
import colorama
colorama.init()
num = int(input('Digite um número inteiro: '))
print(f'\033[31m{num-1}\033[m É o antecessor de \033[31;1m{num}\033[m. E seu sucessor é \033[31m{num+1}\033[m')
