//
//  Q1.cpp
//  Assignment 5 Question 1)
//
//  Timothy Morvan (40126094) and
//  Trần Nhật Minh (40122374)
//
//  Environment: Xcode, Version 2019

#include <iostream>
#include <algorithm>

int main()
{
    int n = 0;
    // Let the user input the dimension of the square matrix until it's a positive number
    do
    {
        // try{} Checks if input is valid
        try
        {
            std::cout << "Enter a number to be used as the dimension of the square matrix: ";
            std::cin >> n;
            
            // Throw a string (pointed char) if exeption return positive
            if (n <= 0)
            throw "Invalid input, this has to be a positive number!";
        }
        // Catching the type of the throw
        catch(const char* str)
        {
            std::cout << "Exception: " << str << std::endl;
        }
    }while(n <= 0);
    
    // As it is not said that we have use multidimentions for the matrix, in the exercise, we chose to use a one dimensional array because through the research conducted we found that they are much more efficient and should be prioritized over the multidimentions for multiple reasons.
    int * arr = new int [n];
    
    // Creating a sorted array for median
    int *SortArray = new int [n];

    // Allocating values in our array
    for(int x = 0; x < n; x++)
    {
        // 'static int count' is used to allocate values in array that will be sorted
        static int count = 0;
        for (int y = 0; y < n; ++y)
        {
            do
            {
                // Using try{} to check for negative numbers
                try
                {
                    std::cout << "Enter the value for this index " << "[" << x << "]" << "[" << y << "]" << " of the 2D array: ";
                    // Allocating values in both arrays
                    std::cin >> * (arr + x * n + y); // pseudo 2D array
                    SortArray[count] = (*(arr + x * n + y));
                    // Verify the sign and throw string if negative or zero
                    if( * (arr + x * n + y) <= 0)
                        throw "Invalid, this has to be a positive number!";
                }
                catch(const char* str)
                {
                    std::cout << "Exception: " << str << std::endl;
                }

            }while( * (arr + x * n + y) <= 0);
            
            count++;
        }
    }
        // Variables which are to be calculated
        int sum = 0;
        float average = 0;
        int maximum = * arr;
        int minimum = * arr;
        float median = 0;
    
    // Finding the min, the max and calculating the sum
        for (int i = 0; i < n * n;i++)
        {
                if(* (arr + i) > maximum)
                    maximum = *(arr + i);
            
                if(* (arr + i) < minimum)
                    minimum = *(arr + i);

                sum += *(arr + i);
        }
    // Calculating the average where 'n*n' is the total number of elements
        average = (float)sum / (float)(n*n);

    // Sorting the array for the median
    std::sort(SortArray, SortArray+(n*n));
    
    std::cout << "\n";
    
    // Finding the median
    if (n % 2 == 0){
        median = (float)(SortArray[(n*n)/2] + SortArray[(n*n)/2-1])/2;
    }
    else {
        median = SortArray[(n*n)/2];
    }
    
    // Output all the values
        std::cout << "The current maximum value is " << maximum << std::endl;
        std::cout << "The current minimum value is " << minimum << std::endl;
        std::cout << "The sum of the current values is " << sum << std::endl;
        std::cout << "The average of the current values is " << average << std::endl;
        std::cout << "The median value of this sequence when ordered is " << median << std::endl;
    
    // Deleting arrays of elements
    delete [] arr;
    delete [] SortArray;

    return 0;
}
