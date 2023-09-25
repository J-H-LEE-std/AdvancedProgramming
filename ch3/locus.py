order = [ int(x) for x in list(input("Order-based: ")) ]
locus = [ 0 for i in range(len(order)) ]

for j in range(len(order)):
    try:
        locus[order[j]] = order[j + 1]
    except IndexError:
        locus[order[j]] = order[0]

print(f"Locus-based: {''.join(map(str, locus))}")