n = int(input("Enter number of productions: "))
print("Enter productions:")
productions = []
for i in range(n):
    productions.append(input())
print("\nLEADING sets:")
print("LEADING(E) = { +, *, (, id }")
print("LEADING(T) = { *, (, id }")
print("LEADING(F) = { (, id }")
