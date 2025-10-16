n = input()
numbers = list(map(int, input().split()))
max = max(numbers)
sum = sum(numbers)

print(sum/int(n)*100/max)