/*Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators*/



#include <stdio.h>

// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int main() {
    int arr[100];
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array (in hexadecimal format): \n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }
    
    int totalSetBits = 0;
    
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        
        while (num) {
            totalSetBits += num & 1;
            num >>= 1;
        }
    }
    
    printf("The total number of set bits in the given array is: %d\n", totalSetBits);
    
    return 0;
}
