replace_dict = str.maketrans({
    "i": "e",
    "e": "i",
    "I": "E",
    "E": "I"
})

while True:
    try:
        line = input()
        print(line.translate(replace_dict))
    except EOFError:
        break
