def pocet_zapasov(pocet_hracov):
    return (pocet_hracov * (pocet_hracov - 1) // 2) * 4

def main():
    pocet_hracov = int(input())
    zapasy = pocet_zapasov(pocet_hracov // 4)
    print(zapasy + 4)

if __name__ == "__main__":
    main()
