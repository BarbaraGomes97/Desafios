#Ler algo do teclado e mostrar suas informações gerais
import colorama
colorama.init()
info = input('Olá! Digite algo: ')
print(f'E somente espaço? \033[32m{info.isspace()}\033[m')
print(f'É um número? \033[32m{info.isnumeric()}\033[m')
print(f'É alfabético? \033[32m{info.isalpha()}\033[m')
print(f'É alfanumérico? \033[32m{info.isalnum()}\033[m')
print(f'Está em maiúsculo? \033[32m{info.isupper()}\033[m')
print(f'Está em minúsculo? \033[32m{info.islower()}\033[m')
