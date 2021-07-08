class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s

        zig_string = ""
        s_length = len(s)
        for i in range(numRows):
            j = i
            step1 = 2 * (numRows - i - 1)
            step2 = 2 * i
            step1 = step2 if step1 == 0 else step1
            step2 = step1 if step2 == 0 else step2
            steps = [step1, step2]
            step_count = 0
            while j < s_length:
                zig_string += s[j]
                j += steps[step_count]
                step_count = 1 if step_count == 0 else 0
        return zig_string
