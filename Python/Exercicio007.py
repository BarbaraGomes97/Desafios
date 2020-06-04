#Ler duas notas de "x" aluno e mostrar sua média
import colorama
colorama.init()
nome = str(input('Nome do aluno(a): '))
n1 = float(input(f'Nota 1: '))
n2 = float(input(f'Nota 2: '))
print('-'*30)
print(f'Aluno(a):\033[34;1m {nome}\033[m')
print(f'Soma das notas: \033[34;1m{n1+n2}\033[m')
print(f'Média final: \033[34;1m{(n1+n2)/2}\033[m')
print('-'*30)
