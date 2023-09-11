LENGTH = 10

parent1 = list(input("Parent1: "))
parent2 = list(input("Parent2: "))

parent1 = parent1[:LENGTH]
parent2 = parent2[:LENGTH]

point = int(input("Cut point: before index "))

child1 = []
child2 = []
for i in range(LENGTH):
    if i < point:
        child1.append(parent1[i])
        child2.append(parent2[i])
    else:
        child1.append(parent2[i])
        child2.append(parent1[i])

print(f"Offspring1: {''.join(child1)}")
print(f"Offspring2: {''.join(child2)}")
