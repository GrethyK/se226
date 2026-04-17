
def circle_area(radius):
    if radius <= 0:
        print("Input Error: Dimensions must be strictly positive.")
    return round(3.14 * radius ** 2,2)


def circle_perimeter(radius):
    if radius <= 0:
        print("Input Error: Dimensions must be strictly positive.")
    return round(2 * 3.14 * radius,2)


def rectangle_area(width,height):
    if width <= 0 or height <= 0:
        print("Input Error: Dimensions must be strictly positive.")
    return width * height


def rectangle_perimeter(width,height):
    if width <= 0 or height <= 0:
        print("Input Error: Dimensions must be strictly positive.")
    return 2* (width + height)


def triangle_area(base,height):
    if base <= 0 or height <= 0:
        print("Input Error: Dimensions must be strictly positive.")
    return (base * height) / 2


