#include <iostream>

using namespace std;
/*moving form right to left
 * exchange a[i] with the larger entry to its left*/
void insertionSort(int Arr[],int N){
    int temp;
    for(int i = 0; i < N; i++)
        for (int j = i; j > 0; j--)
            if (Arr[j] < Arr[j-1]) {
                temp = Arr[j-1];
                Arr[j-1] = Arr[j];
                Arr[j] = temp;
            }
};
int main() {
   int B[] = {5,10,15,6,2,9,4,21,18,25,20,14,11,8,0,16,3,28};
   insertionSort(B,18);
    for (int i = 0; i < 18; ++i) {
        cout << B[i] <<" ";
    }
    return 0;
}
