import re
import cs50

def checksum(credit):
    sum = 0
    alternated = False

    while credit > 0:
        if alternated == True:
            last_digit = credit % 10
            sum += multiply(last_digit)

        else:
            last_digit = credit % 10
            sum += last_digit

        alternated = not alternated
        credit = credit / 10

    return sum


def multiply(last_digit):
    multi = last_digit * 2
    sum = 0

    while multi > 0:
        ld_multi = multi % 10
        sum += ld_multi
        multi = multi / 10

    return sum


print(checksum(378282246310005) % 10)
