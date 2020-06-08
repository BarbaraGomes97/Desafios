# Ler um preço e mostrar seu valor final com 5% de desconto
import colorama
colorama.init()
print("\033[36;1m- Calculadora comercial -\033[m")
valor = float(input("Digite o valor do produto: R$"))
desc = valor*5/100
print("Preço final do produto: R${:.2f}".format(valor-desc))
