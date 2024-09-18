def bubble_sort_otimizado(array):
    n = len(array)
    for i in range(n):
        trocou = False
        for j in range(0, n-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                trocou = True
        if not trocou:
            break
    return array
