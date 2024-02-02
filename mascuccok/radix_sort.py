def radix_sort(arr):
    # Meghatározzuk a maximális számot
    max_num = max(arr)
    
    # Meghatározzuk a legnagyobb számjegy számát
    max_digit = len(str(max_num))
    
    # Kezdjük a rendezést
    for digit in range(max_digit):
        # Rendezzük az elemeket az adott számjegy alapján
        arr = counting_sort(arr, digit)
    
    return arr

def counting_sort(arr, digit):
    n = len(arr)
    output = [0] * n
    count = [0] * 10
    
    # Számoljuk meg az előfordulásokat az adott számjegy alapján
    for i in range(n):
        index = arr[i] // (10 ** digit)
        count[index % 10] += 1
    
    # Kiszámoljuk a prefix összegeket
    for i in range(1, 10):
        count[i] += count[i - 1]
    
    # Építjük az output listát
    i = n - 1
    while i >= 0:
        index = arr[i] // (10 ** digit)
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1
    
    # Frissítjük az eredeti tömböt az új sorrenddel
    for i in range(n):
        arr[i] = output[i]
    
    return arr

# Példa használat
input_array = [170, 45, 75, 90, 802, 24, 2, 66]
sorted_array = radix_sort(input_array)
print("Rendezett tömb:", sorted_array)