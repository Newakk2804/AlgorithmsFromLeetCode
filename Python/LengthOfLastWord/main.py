def lengthOfLastWord(s: str) -> int:
    res_s = s.strip().split()
    print(res_s)

    return len(res_s[-1])

print(lengthOfLastWord("Hello World"))