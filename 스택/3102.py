# 3102 : STL stack

N = int(input())

queue = []

for _ in range(N):
    cmd = input()
    if cmd[0] == 'p' and cmd[1] == 'u':
        _, x, _ = cmd.split()
        queue.append(x)
    elif cmd[0] == 't':
        if queue:
            print(queue[-1])
        else:
            print("-1")
    elif cmd[0] == 'p' and cmd[1] == 'o':
        if queue:
            queue.pop()
    elif cmd[0] == 's':
        print(len(queue))
    elif cmd[0] == 'e':
        if queue:
            print("false")
        else:
            print("true")