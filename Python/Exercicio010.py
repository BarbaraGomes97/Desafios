# Conversão de reais para dólares
# Na data do exercício, o valor do dolar equivale a R$4.89
import colorama
colorama.init()
print("\033[34;1mConversor\033[m")
valor = float(input('Digite o valor: R$'))
print('-'*20)
print("R${:.2f} equivale a ${:.2f} dólares".format(valor,valor/4.89))
