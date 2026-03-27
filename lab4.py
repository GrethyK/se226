num_users = int(input("Enter number of users: "))

users = {}

for i in range(num_users):
    username = input("\nEnter username: ")
    item_count = int(input("How many items? "))

    items = []
    for j in range(item_count):
        item = input(f"Item {j+1}: ")
        items.append(item)

    users[username] = items


print("\nUSER DATA:")
for user in users:
    print(user, "->", users[user])


item_count_dict = {}

for item_list in users.values():
    unique_items = set(item_list)
    for item in unique_items:
        if item in item_count_dict:
            item_count_dict[item] += 1
        else:
            item_count_dict[item] = 1


print("\nCOMMON ITEMS:")
for item in item_count_dict:
    if item_count_dict[item] > 1:
        print(item)


print("\nUNIQUE ITEMS:")
for item in item_count_dict:
    if item_count_dict[item] == 1:
        print(item)


max_count = max(item_count_dict.values())

print("\nMOST POPULAR ITEM:")
for item in item_count_dict:
    if item_count_dict[item] == max_count:
        print(item)