def main():
    w = int(input())

    for i in range (1, w+1):
        if not is_even(i):
            continue
        else:
            if is_even(w - i):
                print("Yes")
                break

def is_even(num):
    if num % 2 == 0:
        return True
    else:
        return False

main()