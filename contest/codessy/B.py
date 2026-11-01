def main():
    t = int(input())
    for _ in range(0, t):
        exp = input()
        a, b = exp.split("+")
        a = int(a)
        b = int(b)
        print(a+b)

if __name__ == "__main__":
    main()