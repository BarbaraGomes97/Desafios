# Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo. Calcule e mostre o comprimento da hipotenusa.
print("H I P O T E N U S A")
c1 = float(input('Comprimento do cateto oposto: '))
c2 = float(input('Comprimento do cateto adjacente: '))
hi = (c1**2 + c2**2)**(1/2)
print('A hipotenusa vai medir: {:.2f}'.format(hi))
