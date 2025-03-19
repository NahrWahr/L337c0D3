import numpy as np

# Load input.txt
with open("input.txt") as f:
#with open("test.txt") as f:
    lines = f.readlines()
    # Split lines into line
    lines = [line.split() for line in lines]
    # Convert line into int
    lines = [np.array(line).astype(int) for line in lines]

def safe_report(report):
    diff = np.diff(report)
    # Check if report diff is between 0 and 4
    if np.all(diff > 0) and np.all(diff < 4):
        return True
    # Check if report diff is between -4 and 0
    elif np.all(diff < 0) and np.all(diff > -4):
        return True
    else:
        return False

safe_reports = 0

for report in lines[:]:
    if safe_report(report):
        safe_reports += 1
    else:
        # Check if subsequences of report are safe
        for i in range(0,len(report)):
            # Concat subsequence
            subsequence = np.concatenate([report[:i], report[i+1:]])
            if safe_report(subsequence):
                safe_reports += 1
                break

print(safe_reports)
