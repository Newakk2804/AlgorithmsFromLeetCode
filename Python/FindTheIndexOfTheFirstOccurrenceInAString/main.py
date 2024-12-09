from typing import List


def strStr(haystack: str, needle: str) -> int:
    index = haystack.find(needle)
    return index

if __name__ == "__main__":
    haystack = "sadbutsad"
    needle = "sad"

    res = strStr(haystack, needle)
    print(res)
