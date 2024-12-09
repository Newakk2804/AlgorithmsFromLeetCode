def mySqrt(x: int) -> int:
    if x < 2:
        return x

    left, right = 2, x // 2

    while left <= right:
        mid = left + (right - left) // 2

        square = mid * mid
        if square == x:
            return mid
        elif square < x:
            left = mid + 1
        else:
            right = mid - 1

    return right


if __name__ == "__main__":
    x = 8
    res = mySqrt(x)
    print(f"Целочисленный квадратный корень из {x} равен {res}.")
