# Conversor de temperatura de C° para F°
import colorama
colorama.init()
print('\033[32;1mConversor de temperaturas\033[m')
temp = float(input('Digite a temperatura em C°: '))
print(f'{temp} C° é equivalente a {(9*temp/5)+32} F°')
