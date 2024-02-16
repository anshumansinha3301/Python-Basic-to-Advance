#below line is function for calculating area
def calculate_triangle_area(a, b, c):
    #below code is for semi - perimeter
    s = (a + b + c) / 2
    
    #heron's formula area calculation
    area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
    
    return area
a = float(input('Enter the length of the first side: '))
b = float(input('Enter the length of the second side: '))
c = float(input('Enter the length of the third side: '))

area = calculate_triangle_area(a, b, c)
print(f'The area of the triangle is {area:.2f}')
