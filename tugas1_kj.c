#include <stdio.h>
#define phi 3.141597
int main()
{

    float jarijari, luas, keliling;
    printf("Masukan nilai jari - jari lingkaran: ");
    scanf("%f", &jarijari);
    luas = phi * (jarijari * jarijari);
    keliling = 2 * phi * jarijari;
    printf("\nLuas lingkaran dengan jari - jari % f adalah: % f ", jarijari, luas);
    printf("\nKeliling lingkaran dengan jari - jari %f adalah: %f", jarijari, keliling);
    return 0;
}
