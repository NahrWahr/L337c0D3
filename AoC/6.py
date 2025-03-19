G = {}
for i,r in enumerate(open('input.txt')):
    for j,c in enumerate(r.strip()):
        G[i+j*1j] = c

start = next(p for p in G if G[p] == '^')
def walk(G):
    pos = start
    vel = -1
    visited = set()
    while pos in G and (pos,vel) not in visited:
        visited.add((pos,vel))
        if G.get(pos+vel) == '#':
            vel *= -1j
        else:
            pos += vel
    return visited, (pos,vel)

path, exit_pos = walk(G)
unique_pos = {p for p,_ in path}
print(len(unique_pos))

obstruction = 0
for pos in unique_pos:
    G_new = G | {pos: '#'}
    path, exit_pos = walk(G_new)
    if exit_pos in path:
        obstruction += 1
print(obstruction)
