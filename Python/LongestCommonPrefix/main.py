from typing import List


def longestCommonPrefix(strs: List[str]) -> str:
    common_prefix = strs[0]

    for s in strs[1:]:
        # Обновляем общий префикс до тех пор, пока он не совпадает с текущей строкой
        while not s.startswith(common_prefix):
            common_prefix = common_prefix[:-1]  # Убираем последний символ
            if not common_prefix:
                return ""

    return common_prefix



if __name__ == "__main__":
    strs = ["flower", "flow", "fight"]

    result = longestCommonPrefix(strs)

    print(result)