
#include <stdio.h>

// Function prototypes
void instruct();
int calculateDecimal(int bin1, int bin2, int bin3);

int main()
{
    int bin1, bin2, bin3;
    int decimal;

    // Display instructions
    instruct();

    // Get binary inputs
    printf("Enter bin1 (0 or 1): ");
    scanf("%d", &bin1);

    printf("Enter bin2 (0 or 1): ");
    scanf("%d", &bin2);

    printf("Enter bin3 (0 or 1): ");
    scanf("%d", &bin3);

    // Validate inputs
    if ((bin1 != 0 && bin1 != 1) ||
        (bin2 != 0 && bin2 != 1) ||
        (bin3 != 0 && bin3 != 1))
    {
        printf("Invalid input! Enter only 0 or 1.\n");
        return 1;
    }

    // Calculate decimal value
    decimal = calculateDecimal(bin1, bin2, bin3);

    // Display result
    printf("Decimal value = %d\n", decimal);

    return 0;
}

// Function to display instructions
void instruct()
{
    printf("Binary to Decimal Converter\n");
    printf("Enter three binary digits (0 or 1).\n");
}

// Function to calculate decimal value
int calculateDecimal(int bin1, int bin2, int bin3)
{
    int dec;

    dec = bin3 * 4 + bin2 * 2 + bin1 * 1;

    return dec;
}
