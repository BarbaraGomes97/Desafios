#Ler 2 números e mostrar sua respectiva soma
import colorama
colorama.init()
n1 = int(input('Digite um número: '))
n2 = int(input('Digite mais um número: '))
print('-'*35)
print(f'A soma entre \033[36;1m{n1}\033[m e \033[36;1m{n2}\033[m corresponde a \033[36;1m{n1+n2}\033[m')
print('-'*35)
