def get_float(credit):
    while True:
        try:
            num = float(input(credit))
            if num >= 0:
                return num
        except ValueError:
            pass

def calculate(coins):
    i = 0
    while coins > 0:
        if coins >= 25:
            coins -= 25
            i += 1

        elif coins >= 10:
            coins -= 10
            i += 1

        elif coins >= 5:
            coins -= 5
            i += 1

        else:
            coins -= 1
            i += 1

    return i


def main():
    change = get_float("Change: ")
    coins = round(change * 100)

    total = calculate(coins)

    print(total)



main()
