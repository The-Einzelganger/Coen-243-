#include <iostream>

int main() 
{
    int n;
    
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

    for(int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; ++y) 
        {
            do
            {
                try 
                {
                    std::cout << "Enter the value for this index " << "[" << x << "]" << "[" << y << "]" << " of the 2D array: ";
                    std::cin >> * (arr + x * n + y); // pseudo 2D array

                    if( * (arr + x * n + y) <= 0)
                        throw "Invalid, this has to be a positive number!";
                }

                catch(const char* str) 
                {
                    std::cout << "Exception: " << str << std::endl;
                }       
                
            }while( * (arr + x * n + y) <= 0);
            }
        }
        
        int sum = 0;
        float average = 0;
        int maximum = * arr;
        int minimum = * arr;

        for (int i = 0; i < n * n;i++)
        {
                if(* (arr + i) > maximum)  
                    maximum = *(arr + i);

                if(* (arr + i) < minimum)
                    minimum = *(arr + i);

                sum += *(arr + i);
        }
        
        average = (float)sum / (float)n;

        std::cout << "The current maximum value is " << maximum << std::endl;
        std::cout << "The current minimum value is " << minimum << std::endl;
        std::cout << "The sum of the current values is " << sum << std::endl;
        std::cout << "The average of the current values is " << average << std::endl;   

        delete [] arr;

    return 0;
}
