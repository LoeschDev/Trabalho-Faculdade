def bubble_sort_letras(letras):
    n = len(letras)
    for i in range(n):
        for j in range(0, n-i-1):
            if letras[j] > letras[j+1]:
                letras[j], letras[j+1] = letras[j+1], letras[j]
    return letras
