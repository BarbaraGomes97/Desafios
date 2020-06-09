# Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo
import colorama
import math
colorama.init()
print('\033[35;1mSENO - COSSENO - TANGENTE\033[m')
n = float(input('Digite o ângulo: '))
resp = math.radians(n)
seno = math.sin(resp)
coss = math.cos(resp)
tang = math.tan(resp)
print(f'\nSeno: {seno}\nCosseno: {coss}\nTangente: {tang}')
