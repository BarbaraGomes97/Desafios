#Ler um salário e informar seu novo valor com um aumento de 15%
import colorama
colorama.init()
print("\033[31;1m< Atualização de salários >\033[m")
nome = str(input('Digite o nome do funcionário: '))
salario = float(input('Digite o salário atual: R$'))
aumento = salario*15/100
print('\033[31m-\033[m'*25)
print(f'Funcionário: {nome}\nSalário sem reajuste: R${salario}\nSalário atualizado: R${salario+aumento}')
print('\033[31m-\033[m'*25)
