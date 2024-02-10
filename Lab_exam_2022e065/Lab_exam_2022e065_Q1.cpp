//RENUJAN J.
//2022/E/065
#include <iostream>

using namespace std;

void selectionSort (int array[],int size)
{
    int min, i, j, temp, a;
    for (i=0; i<size; i++){
        for (j=i; j<size; j++){
            if (array[j]<array[j+1]){
                min=array[j];
                a=j;
            }
            else{
                min=array[j+1];
                a=j+1;
            }

            temp = array[i];
            array[i] = min;
            array [a] = temp;
        }
        min=21;
    }
}


int main()
{
    int array[] = {20,12,10,15,2};
    int size = sizeof(array)/sizeof(array[0]);

    selectionSort(array,size);

    for(int k=1; k<=5; k++)
        cout << array[k] << "\t";


    return 0;
}
