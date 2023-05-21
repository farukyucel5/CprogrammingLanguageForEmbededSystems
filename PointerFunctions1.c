#include <stdio.h>

char* findLongerString(const char *str1, const char *str2) {
    int length1 = 0, length2 = 0;

    // �lk stringin uzunlu�unu hesapla
    while (*str1 != '\0') {
        length1++;
        str1++;
    }

    // �kinci stringin uzunlu�unu hesapla
    while (*str2 != '\0') {
        length2++;
        str2++;
    }

    // Uzun olan stringi d�nd�r
    if (length1 > length2) {
        return (char*)str1 - length1;
    } else if (length2 > length1) {
        return (char*)str2 - length2;
    } else {
        return NULL; // �ki string de ayn� uzunlukta ise NULL d�nd�r
    }
}

int main() {
    char string1[100], string2[100];

    printf("Birinci stringi girin: ");
    scanf("%s", string1);

    printf("Ikinci stringi girin: ");
    scanf("%s", string2);

    char *longerString = findLongerString(string1, string2);

    if (longerString != NULL) {
        printf("Daha uzun string: %s\n", *longerString);
    } else {
        printf("Iki string de ayni uzunlukta.\n");
    }

    return 0;
}
