def main():
    t=int(input())
    for _ in range(t):
        result = 1
        n = int(input())
        output = [None]*n
        heights = [None]*n
        heights = input().split(" ")
        for i in range(0, n):
            heights[i] = int(heights[i])
        heights.sort()
        flags = [1]*n
        index = 0
        output[index] = heights[0]
        index+=1
        flags[0] = 0
        for i in range(1, n):
            if heights[i] > output[index-1]:
                output[index] = heights[i]
                flags[i] = 0
                index+=1
                result+=1
        index=n-1
        for i in range(1, n):
            if flags[i] == 1:
                if index != n-1 and heights[i] > output[index+1]:
                    output[index] = heights[i]
                    flags[i] = 0
                    result+=1
                    index-=1
                elif index == n-1:
                    output[index] = heights[i]
                    flags[i] = 0
                    index-=1
                    result+=1
        for i in range(1, n):
            if flags[i] == 1:
                output[index] = heights[i]
                index-=1
                flags[i] = 0
        print(result)
        for num in output:
            print(num, end=" ")
        print()
        
main()