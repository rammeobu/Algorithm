a = int(input())
original = a
count = 0
while True:
    tens = a // 10
    ones = a % 10
    new_num = (ones * 10) + ((tens + ones) % 10)
    count += 1
    if new_num == original:
        break
    a = new_num
print(count)
