def romanToInt(s: str) -> list:
    dict_symbols = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000,
    }

    total = 0
    prev_value = 0

    for char in reversed(s):
        current_value = dict_symbols[char]

        if current_value < prev_value:
            total -= current_value
        else:
            total += current_value

        prev_value = current_value

    return total


if __name__ == "__main__":
    s = "MCMXCIV"
    result = romanToInt(s)
    print(result)
