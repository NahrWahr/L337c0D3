from operator import add,mul
cat = lambda x,y: int(str(x) + str(y))

exprs = []
for r in open('input.txt'):
    exprs.append([int(x) for x in r.replace(":", " ").split()])

ans = 0
for expr in exprs:
    res = expr[0]

    x = expr[1]
    evals = [x]
    for y in expr[2:]:
        evals = [op(x,y) for x in evals for op in (add,mul,cat)]
        evals = filter(lambda x: x <= res, evals)

    if res in evals: ans += res

print(ans)
