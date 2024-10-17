#include <stdio.h>
//red=0, white=1, blue=2

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int colors[], int size) {
    int low = 0, mid = 0, high = size - 1;
    
    while (mid <= high) {
        switch (colors[mid]) {
        
            case 0:
                swap(&colors[low], &colors[mid]);
                low++;
                mid++;
                break;
           
            case 1:
                mid++;
                break;
            
            case 2:
                swap(&colors[mid], &colors[high]);
                high--;
                break;
        }
    }
}

int main() {
    
    int colors[9];
    colors[0] = 2;
    colors[1] = 0;
    colors[2] = 2;
    colors[3] = 0;
    colors[4] = 0;
    colors[5] = 1;
    colors[6] = 0;
    colors[7] = 2;
    colors[8] = 1;
    
    int size = sizeof(colors) / sizeof(colors[0]);

    
    sortColors(colors, size);
    
    
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        if (colors[i] == 0) printf("red ");
        else if (colors[i] == 1) printf("white ");
        else printf("blue ");
    }
    
    return 0;
}

