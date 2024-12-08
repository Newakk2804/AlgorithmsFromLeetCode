from string import digits
from typing import List


def plusOne(digits: List[int]) -> List[int]:
    digits_res = ""

    for char in digits:
        digits_res += str(char)

    digits_res = int(digits_res) + 1

    resList = []
    for char in str(digits_res):
        resList.append(int(char))

    return resList


if __name__ == "__main__":
    digits = [9, 9]
    res = plusOne(digits)
    print(res)
