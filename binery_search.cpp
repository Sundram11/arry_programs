#include<iostream>
#include<vector>

int find_binery_search(std::vector<int>arr, int key)
{
    int start = 0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;

    for(int i = 0; i< arr.size(); i++)
    {
        if(arr[mid] == key)
        {
        // find element and return index
            return mid;
        }
        else if(arr[mid] > key)
        {
            // left search
            end = mid -1;
        }
        else
        {
            // right search
            start = mid +1;
        }
        mid = start + (end - start)/2;
    }
// not find the element
    return -1;
}


int main()
{
// initilation of array
    std::vector<int> arr;
    int key, n, input;
// taking length of array
    std::cout<<"enetr array size"<<std::endl;
    std::cin>>n;

// taking element of array
    std::cout<<"enetr arry elements"<<std::endl;
    for(int i = 0; i<n; i++)
    {
        std::cin>>input;
        arr.push_back(input);
    }
    
// enter searching element
    std::cout<<"enter the key element";
    std::cin>>key; 

// calling function binery_search
    int element = find_binery_search(arr, key);

    std::cout<<"the index of key is:"<<element;
    return 0;
}