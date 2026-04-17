def remove_duplicates(data_list):
    seen = []
    for item in data_list:
        if item not in seen :
            seen.append(item)
    return seen

def strip_whitespaces(string_list):
    return [s.strip() for s in string_list]