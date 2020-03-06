//
//  main.cpp
//  A3 test
//
//  Created by Timothy Morvan on 04/03/2020.
//  Copyright © 2020 Timothy Morvan. All rights reserved.


#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    
    const int arrsize = 100, samplesize = 10;
    long long p=0;
    long n = 0, min = 0, max = 0;
    vector <int> sample (samplesize);
//    srand (time(0));
    vector <int> vect(arrsize);
    
    // Randomly generating signed integers
//    for (int i = 0; i < arrsize; i++){
//
//        arr [i] = (rand() % (INT_MAX)) - rand()% (INT_MAX);
//        cout << arr[i] << "\n";
//    }
//
    for (int i = 0; i < arrsize; i++){

        vect.at(i) = (rand() % (INT_MAX)) - rand()% (INT_MAX);
        
        
        cout << vect.at(i) << "\n";
    }
    
    cout << "\n\n";
    // Selecting samples
    
    for (int l = 0; l < samplesize; l++) {
    
    int slct = rand () % arrsize;
        sample.at(l) = vect.at(slct);
        
        cout << sample.at(l) << "\n";
    }
    
    // Sort the sample:
    
    sort(sample.begin(), sample.end());
    
    min = sample.at(0);
    max = sample.at(samplesize-1);

//    cout << "min: "<< min << "\nmax: "<< max;
    
    // Dividing the array into N partitions
    
    cout << "Enter the number of partitions desired: ";
    cin >> n;
    
    p = (max + abs(min)) / n;

    cout << "The partitions will have the size: " << p << "\n";
    
    cout << "\n" << p << "\n" << abs(min) << "\n" << n*p + min << "\n" << max;
    
    // Creating n vectors with p size
    
//    vector<int> vect2;
    vector< vector<int> > vect1;
    vector<int> partition;
    vector<int> last;
    
    for (int row = 0; row < n; row++){
        
        
        for (int g =0; g < arrsize; g++){
            
            if (vect.at(g) > (min+(row*p)) && vect.at(g) < ((min+(row+1)*p)-1)){
                
                partition.push_back(vect.at(g));
                
            }
                
            else if (vect.at(g) < min || vect.at(g) > max) {
                
                if (row == 0){
                    
                last.push_back(vect.at(g));
                    
                }
            }
        }
        
        vect1.push_back(partition);
    }
    
    vect1.push_back(last);
    
}
    
