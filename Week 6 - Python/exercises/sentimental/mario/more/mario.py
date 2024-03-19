def get_int(num):
    while True:
        try:
            correct = int(input(num))
            if correct > 0 and correct < 9:
                return correct
        except ValueError:
            pass

def mario(num):
    i = 1
    high = num
    while(i <= num):
        high = high - 1
        print((" " * high) + ("#" * i) + "  " + ("#" * i))
        i += 1

def main():
    p = get_int("tamanho da piramide: ")
    mario(p)

main()
