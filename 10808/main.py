def main():
    alpha_count = [0 for _ in range(26)]

    for ch in input():
        alpha_count[ord(ch) - ord('a')] += 1

    print(*alpha_count)


if __name__ == "__main__":
    main()
