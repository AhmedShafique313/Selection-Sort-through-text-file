#include<iostream>
#include<fstream>
using namespace std;
// unction that reads the entries from file.
// so we use some char array, int array and refernce in this function.
void readfromfile(char file_covert[], int elements[], int &entries)
{
    // convert the text file to char array
    ifstream conversion(file_covert);
    // linked the file entries to reference
    conversion>>entries;
    for (int i = 0; i < entries; i++)
    {
        /* code */
        // convert the file to integer array
        conversion>>elements[i];
    }
    return;
}

// I want to show entries converted from txt.file to integer
void showing(int no_of, int arr[])
{
    for (int i = 0; i < no_of; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
        //if (!(i%10))
        //{
            /* code */
           // cout<<endl;
       // }
        
    }
    cout<<endl;
    return;
}
// selection sort and swapping fuction.
// A.Swapping function for selection sort.
void swap(int *x, int *y)
{
    // 1 in temp and then 2 in 1 and then temp in 2
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

// B.Selection Sort
void selection_sort(int sample[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        int min_index=i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if(sample[j]<sample[min_index])
            {
                min_index=j;
            }
            if(min_index!=i)
            {
                swap(&sample[min_index],&sample[i]);
            }
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            if(sample[j]>sample[j+1])
            {
                swap(sample[j],sample[j+1]);
            }
        }
        
    }
    return;
}

// printing the result
void printing(int sample[],int n)
{
    cout<<"Selection sorted array is ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<sample[i]<<" ";
    }
    cout<<endl;
    return;
}
// main function
int main()
{
    // count the entries and store them in integer array
    int count, storing[100];
    //linked text file to character arrray
    char filename[12]={"s.txt"};
    readfromfile(filename,storing,count);
    showing(count,storing);
    selection_sort(storing,count);

    printing(storing,count);
    system("pause");
    return 0;
}