# Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado.
import colorama
colorama.init()
print('-'*25)
print('\033[32mAluguel de carros\033[m')
print('-'*25)
km = int(input('Quantidade de km percorridos: '))
dias = int(input('Quantidade de dias alugado: '))
preco = 60*dias+0.15*km
print('-'*25)
print(f'{km}km percorridos\nAlugado a {dias} dias\nValor total do aluguel: \033[32mR${preco}\033[m')
print('-'*25)
