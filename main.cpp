#include <iostream>

using namespace std;

void Insertion_Sort(int array[], int size)
{
    int key;
    for(int i=0; i<size; i++)
    {
        key = array[i];
        int j = i -1;
        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int main()
{
    int list[10] = {20,11,12,2,10,23,19,54,62,34};
    int i;
    cout<<"Before the insertion sort:"<<endl<<">> ";
    for(i=0; i<10; i++)
        cout<<list[i]<<"\t";
    cout<<endl<<endl;
    Insertion_Sort(list, 10);
    cout<<"After the insertion sort:"<<endl<<">> ";
    for(i=0; i<10; i++)
        cout<<list[i]<<"\t";
    cout<<endl<<endl<<endl;


    return 0;
}
