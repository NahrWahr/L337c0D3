import re
import functools

# Load input.txt
with open("input.txt") as f:
    file = f.read()
# Get pairwise ordering from the lines
pattern_order=r"\d+\|\d+"
ordering = []
for item in re.findall(pattern_order, file):
    numbers = re.findall(r"\d+", item)
    ordering.append(numbers)
# Get sequences of numbers from input
pattern_sequence = r"^(?:\d+)(?:,\d+)*$"
sequences = []
for item in re.findall(pattern_sequence, file, flags=re.MULTILINE):
    numbers = re.findall(r"\d+", item)
    sequences.append(numbers)

def compare(x, y):
    if [x, y] in ordering:
        return -1
    elif [y, x] in ordering:
        return 1
    else:
        return 0
key = functools.cmp_to_key(compare)

ans = [0, 0]
for seq in sequences:
    sort_seq = sorted(seq, key=key)
    if seq==sort_seq:
        ans[0] += int(seq[len(seq)//2])
    else:
        ans[1] += int(sort_seq[len(sort_seq)//2])

print(ans)
