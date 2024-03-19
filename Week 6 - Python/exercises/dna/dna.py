import csv
import sys

def dna_analisys(databases, sequences):

    if(len(databases[0]) == 4):

        for index in range(len(databases)):
            i = 0
            for key in databases[index]:
                if key != 'name':
                    if(int(databases[index][key]) == sequences[key]):
                      i += 1

            if i == 3:
                return databases[index]['name']

    if(len(databases[0]) == 9):

        for index in range(len(databases)):
            i = 0
            for key in databases[index]:
                if key != 'name':
                    if(int(databases[index][key]) == sequences[key]):
                        i += 1

            if i == 8:
                return databases[index]['name']



    return "No match"

def get_str(sequence, subsequence):

    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


def main():
    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py foo.csv bar.txt")
        sys.exit()

    # TODO: Read database file into a variable
    rows = []
    with open(sys.argv[1]) as file:
        database = csv.DictReader(file)
        for row in database:
            rows.append(row)
        # Leitura da database

    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2]) as file:
        STRs = file.read()
        # Leitura da sequencia de DNAs

    # TODO: Find longest match of each STR in DNA sequence

    strs = {'AGATC': '', 'TTTTTTCT': '' , 'AATG': '', 'TCTAG': '', 'GATA': '', 'TATC': '', 'GAAA': '','TCTG': ''}

    strs['AGATC'] = (get_str(STRs, "AGATC"))
    strs['TTTTTTCT'] = (get_str(STRs, "TTTTTTCT"))
    strs['AATG'] = (get_str(STRs, "AATG"))
    strs['TCTAG'] = (get_str(STRs, "TCTAG"))
    strs['GATA'] = (get_str(STRs, "GATA"))
    strs['TATC'] = (get_str(STRs, "TATC"))
    strs['GAAA'] = (get_str(STRs, "GAAA"))
    strs['TCTG'] = (get_str(STRs, "TCTG"))

    # TODO: Check database for matching profiles
    name = dna_analisys(rows, strs)
    print(name)

main()
