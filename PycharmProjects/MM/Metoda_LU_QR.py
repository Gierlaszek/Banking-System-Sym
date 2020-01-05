# rozklad LU
# rownanie Ax=b macierz a przedstawiamy w sposob A=LU
# L - gorna macierz trojkatna
# U - dolna -||-
# szukamy macierzy L i U eliminajca gaussa
# nastepnie wyznaczamy macierz Z z rownania LZ=B
# gdy wyznaczymy Z rozwiazujemy uklad rownan UX=Z
# Ax=B => x=A^-1*B

import scipy
import scipy.linalg   # SciPy Linear Algebra Library

A = scipy.array([ [0.2425, 0, -0.9701], [0, 0.2425, -0.9701], [-0.2357, -0.2357, -0.9428] ])
B = scipy.array([[247], [248], [239]])
P, L, U = scipy.linalg.lu(A)

###############
#   Metoda LU
###############
print "A:"
print A

print "P:"
print P

print "L:"
print L

print "U:"
print U
print("inv L: ")
invL = scipy.linalg.inv(L) #tworzenie macierzy odwrotnej
print invL

Z = scipy.dot(invL, B) #mnozenie macierzy
print("Z: ")
print Z

# UX = Z => X = U^-1 * Z
print "inv U:"
invU = scipy.linalg.inv(U)
print invU

print "X: "
X = scipy.dot(invU, Z)
print X

###########
#Metoda QR
###########