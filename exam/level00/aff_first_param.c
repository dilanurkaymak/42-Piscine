#include <unistd.h>
#include <string.h>

#include <unistd.h>

int my_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') {  // '\0' karakterine kadar döngü çalışacak
        len++;
    }
    return len;  // String'in uzunluğunu döndürüyor
}

int main(int argc, char *argv[]) {
    if (argc < 2) {  // Eğer hiç argüman verilmediyse
        write(1, "\n", 1);  // Sadece bir satır sonu yazdır
    } else {  // Eğer en az bir argüman verilmişse
        int length = my_strlen(argv[1]);  // İlk argümanın uzunluğunu bul
        write(1, argv[1], length);  // İlk argümanı yazdır
        write(1, "\n", 1);  // Sonunda bir satır sonu ekle
    }
    return 0;
}

