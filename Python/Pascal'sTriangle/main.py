from typing import List


def generate(numRows: int) -> List[List[int]]:
    resTriangle = []

    for row in range(numRows):
        new_row = [1] * (row + 1)

        for j in range(1, row):
            new_row[j] = resTriangle[row - 1][j - 1] + resTriangle[row - 1][j]

        resTriangle.append(new_row)

    return resTriangle


if __name__ == "__main__":
    numRows = 5

    res = generate(numRows)

    print(res)
