#Ler nome do usuário e mostrar boas vindas
import colorama
colorama.init()
nome = str(input('Digite o seu nome: '))
print(f'Olá! Seja bem vindo(a), \033[31m{nome}\033[m!')
