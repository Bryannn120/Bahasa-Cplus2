import os
import random
import time

# Fungsi untuk menggambar papan permainan
def gambar_papan(pemain, rintangan):
    for i in range(21):
        for j in range(41):
            if i == 20:
                print("-", end="")
            elif (i, j) == pemain:
                print("M", end="")
            elif (i, j) in rintangan:
                print("#", end="")
            else:
                print(" ", end="")
        print()

# Fungsi untuk menggerakkan pemain
def gerak_pemain(pemain, arah):
    x, y = pemain
    if arah == "kiri":
        return (x, y - 1)
    elif arah == "kanan":
        return (x, y + 1)
    elif arah == "atas":
        return (x - 1, y)
    elif arah == "bawah":
        return (x + 1, y)
    else:
        return pemain

# Fungsi untuk memperbarui posisi rintangan
def update_rintangan(rintangan):
    new_obstacles = set()
    for obs in rintangan:
        x, y = obs
        new_obstacles.add((x + 1, y))
    if random.random() < 0.1:  # Munculkan rintangan baru secara acak
        y = random.randint(0, 40)
        new_obstacles.add((0, y))
    return new_obstacles

# Fungsi utama permainan
def main():
    pemain = (19, 20)
    rintangan = set()
    score = 0

    while True:
        os.system("cls" if os.name == "nt" else "clear")  # Bersihkan layar konsol
        gambar_papan(pemain, rintangan)
        print("Score:", score)
        print("Tekan 'A' untuk bergerak ke kiri, 'D' untuk bergerak ke kanan")
        arah = input("Pilih arah: ").lower()

        if arah == "a":
            pemain = gerak_pemain(pemain, "kiri")
        elif arah == "d":
            pemain = gerak_pemain(pemain, "kanan")

        rintangan = update_rintangan(rintangan)

        if pemain in rintangan:
            print("Game Over! Skor Anda:", score)
            break

        score += 1
        time.sleep(0.1)  # Jeda antar frame

if __name__ == "__main__":
    main()
