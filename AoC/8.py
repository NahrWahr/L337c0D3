field = []
chars = set()
for line in open('input.txt'):
    field.append(list(line.strip()))
    chars.update(line.strip())

chars.discard('.')
antinode = {}

def fill_antinodes(field, char, antinode):
    towers = []
    for i in range(len(field)):
        for j in range(len(field[i])):
            if field[i][j] == char:
                towers.append((i,j))
    for i in range(len(towers)):
        for j in range(i+1, len(towers)):
            diff = towers[i][0]-towers[j][0],towers[i][1]-towers[j][1]
            for k in range(-27,35):
                antinode[(towers[i][0]+k*diff[0],towers[i][1]+k*diff[1])] = True

for char in chars:
    fill_antinodes(field, char, antinode)

count = 0
for i in antinode:
    if 0<=i[0]<len(field) and 0<=i[1]<len(field[0]):
        count += 1

print(count)
