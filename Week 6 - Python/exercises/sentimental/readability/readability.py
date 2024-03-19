import math

def coleman_index(text):
    letter = letter_count(text)
    sentence = sentence_count(text)

    index = int(round(0.0588 * letter - 0.296 * sentence - 15.8))

    return grade_result(index)

def grade_result(index):
    if index < 1:
        return "Before Grade 1"
    elif index >= 1 and index <= 16:
        return f"Grade {index}"
    else:
        return "Grade 16+"

def word_count(text):
    count = 1
    for i in text:
        if i.isspace() == True:
            count += 1

    return count

def sentence_count(text):
    count = 0
    for i in text:
        if i == '.' or i == '?' or i == '!':
            count += 1

    return count / word_count(text) * 100

def letter_count(text):
    count = 0
    for i in text:
        if i.isalpha() == True:
            count += 1

    return count / word_count(text) * 100


def main():
    text = input("Text: ")

    print(coleman_index(text))


main()

