from typing import List


def removeDuplicates(nums: List[int]) -> int:
    k = 1

    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            nums[k] = nums[i]
            k += 1

    return k


if __name__ == "__main__":
    nums = [1, 2, 2]
    expectedNums = [1, 2]

    k = removeDuplicates(nums)

    assert k == len(expectedNums), "Количество уникальных элементов не совпадает с ожидаемым"
    for i in range(k):
        assert nums[i] == expectedNums[i], f"Элемент в позиции {i} не совпадает"

    print("Количество уникальных элементов: ", k)
    print("Обновленный массив: ", nums[:k])