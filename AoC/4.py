import numpy as np

def count(padded_matrix,i,j):
    x = 0
    target = np.array(['X','M','A','S'])

    # Check rows and columns
    if np.all(padded_matrix[i,j:j+4] == target):
        x += 1
    if np.all(padded_matrix[i,j:j-4:-1] == target):
        x += 1
    if np.all(padded_matrix[i:i+4,j] == target):
        x += 1
    if np.all(padded_matrix[i:i-4:-1,j] == target):
        x += 1

    # Check diagonals
    if np.all(np.diag(padded_matrix[i:i+4,j:j+4]) == target):
        x += 1
    if np.all(np.diag(padded_matrix[i:i-4:-1,j:j-4:-1]) == target):
        x += 1
    if np.all(np.diag(np.fliplr(padded_matrix[i:i+4,j:j+4])) == target):
        x += 1
    if np.all(np.diag(np.fliplr(padded_matrix[i:i-4:-1,j:j-4:-1])) == target):
        x += 1

    return x

def count_pt2(padded_matrix,i,j):
    mask1= np.array([['M','.','S'],
                     ['.','A','.'],
                     ['M','.','S']])
    mask2= np.array([['S','.','M'],
                     ['.','A','.'],
                     ['S','.','M']])
    mask3= np.array([['M','.','M'],
                     ['.','A','.'],
                     ['S','.','S']])
    mask4= np.array([['S','.','S'],
                     ['.','A','.'],
                     ['M','.','M']])
    window = padded_matrix[i-1:i+2,j-1:j+2]
    res1 = np.sum(mask1==window)//5
    res2 = np.sum(mask2==window)//5
    res3 = np.sum(mask3==window)//5
    res4 = np.sum(mask4==window)//5
    if res1 or res2 or res3 or res4:
        return 1
    else:
        return 0

# Load input.txt
with open("input.txt") as f:
    lines = f.readlines()
    # Split lines into characters
    lines = [list(line.strip()) for line in lines]
    # Convert lines to numpy array
    lines = np.array(lines)
    # Created a padded matrix with value ','
    padded_matrix = np.pad(lines, 4, 'constant', constant_values='#')
    print(padded_matrix)

    ans = 0
    for i in range(4,len(padded_matrix)-4):
        for j in range(4,len(padded_matrix[i])-4):
            #ans += count(padded_matrix,i,j)
            ans += count_pt2(padded_matrix,i,j)

    print(ans)
