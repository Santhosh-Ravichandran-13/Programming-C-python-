#include <stdio.h>
#include <string.h>

int main()
{
    char b1[20], b2[20], res[21];  // +1 for '\0'
    scanf("%s", b1);
    scanf("%s", b2);

    int i = strlen(b1) - 1;
    int j = strlen(b2) - 1;
    int k = 0, carry = 0;

    while (i >= 0 || j >= 0) {
        int bit1 = (i >= 0) ? b1[i--] - '0' : 0;
        int bit2 = (j >= 0) ? b2[j--] - '0' : 0;

        int sum = bit1 + bit2 + carry;
        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) {
        res[k++] = '1';
    }

    res[k] = '\0';   

   
    for (i = k - 1; i >= 0; i--) {
        printf("%c", res[i]);
    }

    return 0;
}
