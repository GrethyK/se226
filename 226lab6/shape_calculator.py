import geometry_utils

shape_functions = {
    "circle_area" : geometry_utils.circle_area,
    "circle_perimeter" : geometry_utils.circle_perimeter,
    "rectangle_area":geometry_utils.rectangle_area,
    "rectangle_perimeter":geometry_utils.rectangle_perimeter,
    "triangle_area":geometry_utils.triangle_area, }

dimensions_needed = {
    "circle_area" :["radius"],
    "circle_perimeter":["radius"] ,
    "rectangle_area":["width","height"],
    "rectangle_perimeter":["width","height"],
    "triangle_area":["base","height"] }

print("Available shapes: circle, rectangle, triangle \n "
      "Available calculations: _area, _perimeter (e.g., circle_area)")

operation = input("Enter the operation you want to perform:").strip()

if operation not in shape_functions:
    print("Input error!Wrong operation name")
else:
    args = []
    for dim in dimensions_needed[operation]:
        val = float(input(f"Enter {dim}: "))
        args.append(val)

    result = shape_functions[operation](*args)
    print(f"Result: {round(result,2)}")