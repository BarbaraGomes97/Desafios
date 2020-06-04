#Exibir a tabuada de um número escolhido
import colorama
colorama.init()
print('\033[31;1mT A B U A D A\033[m')
n = int(input('Digite o número para consulta: '))
for c in range(0, 11):
    print(n,' x ', c, ' = ', n*c)
