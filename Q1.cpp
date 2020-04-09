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

    do
    {
        try
        {
            std::cout << "Enter a number to be used as the dimension of the square matrix: ";
            std::cin >> n;
            if (n <= 0)
                throw "Invalid input, this has to be a positive number!";
        }
        catch(const char* str)
        {
            std::cout << "Exception: " << str << std::endl;
        }
    }while(n <= 0);
    
    int * arr = new int [n];
    int SortArray[n];

    for(int x = 0; x < n; x++)
    {
        static int count = 0;
        
        for (int y = 0; y < n; ++y)
        {
            do
            {
                try
                {
                    std::cout << "Enter the value for this index " << "[" << x << "]" << "[" << y << "]" << " of the 2D array: ";
                    std::cin >> * (arr + x * n + y); // pseudo 2D array
                    SortArray[count] = (*(arr + x * n + y));
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

//            int sum = 0;
//            float average = 0;
//            int maximum = * arr;
//            int minimum = * arr;
//
//            for (int i = 0; i < counter;i++)
//            {
//                    if(* (arr + i) > maximum)
//                        maximum = *(arr + i);
//
//                    if(* (arr + i) < minimum)
//                        minimum = *(arr + i);
        int sum = 0;
        float average = 0;
        int maximum = * arr;
        int minimum = * arr;
        float median = 0;

//                    sum += *(arr + i);
//            }
//
//            average = (float)sum / (float)counter;
    
        for (int i = 0; i < n * n;i++)
        {
                if(* (arr + i) > maximum)
                    maximum = *(arr + i);

//            std::cout << "The current maximum value is " << maximum << std::endl;
//            std::cout << "The current minimum value is " << minimum << std::endl;
//            std::cout << "The sum of the current values is " << sum << std::endl;
//            std::cout << "The average of the current values is " << average << std::endl;
            
                if(* (arr + i) < minimum)
                    minimum = *(arr + i);

//            counter+=1;
                sum += *(arr + i);
        }
//    }

        average = (float)sum / (float)(n*n);

    
    std::sort(SortArray, SortArray+(n*n));
    
//    for (int i = 0; i < n*n; i++)
//    std::cout << SortArray[i] << " ";
    std::cout << "\n";
    
    if (n % 2 == 0){
        median = (float)(SortArray[(n*n)/2] + SortArray[(n*n)/2-1])/2;
    }
    else {
        median = SortArray[(n*n)/2];
    }
        std::cout << "The current maximum value is " << maximum << std::endl;
        std::cout << "The current minimum value is " << minimum << std::endl;
        std::cout << "The sum of the current values is " << sum << std::endl;
        std::cout << "The average of the current values is " << average << std::endl;
        std::cout << "The median value of this sequence when ordered is " << median << std::endl;
        delete [] arr;

    return 0;
}
