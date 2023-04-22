def main():
    target = 1
    for _ in range(3):
        target *= int(input())

    print(
        *(list(str(target).count(str(i)) for i in range(10))),
        sep="\n"
    )


if __name__ == "__main__":
    main()
