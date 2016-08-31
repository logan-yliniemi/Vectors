//
//  main.cpp
//  Vectors
//
//  Created by Logan Yliniemi on 8/29/16.
//  Copyright © 2016 Logan Yliniemi. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class cat{
public:
    int age;
};

void int_vector_cout(vector<int> vI, string name){
    cout << name << ":\t";
    for(int i=0; i<vI.size(); i++){
        cout << vI.at(i) << "\t";
    }
    cout << endl;
}

int main() {
    
    vector<int> vI; // a vector of integers.
    vector<int> vI_2; // a vector of integers.
    vector<double> vD; // a vector of doubles.
    vector<bool> vB; // a vector of booleans.
    vector<cat> vC; // a vector of a custom class.
    /// all empty at this point.
    
    vector< vector<int> > vvI;
    /// a vector of vectors.
    
    cout << "Basic Integer Vector" << endl;
    int_vector_cout(vI,"vI");
    for(int i=0; i<10; i++){
        vI.push_back(i); /// assembles vI of numbers 0 through 10.
        int_vector_cout(vI,"vI");
    }
    
    vI.erase(vI.begin()+4); /// erases 4th element
    int_vector_cout(vI,"vI");
    vI.erase(vI.begin()+4); /// erases 4th element (which used to be 5th)
    int_vector_cout(vI,"vI");
    vI.erase(vI.begin(),vI.begin()+2); /// erases first two elements
    int_vector_cout(vI,"vI");
    vI.clear(); /// erases all information from vector
    int_vector_cout(vI,"vI");

    cout << endl;
    cout << "Initializing Integer Vector" << endl;
    
    vector<int> vI_3 = {0,7,5};
    int_vector_cout(vI_3,"vI_3");
    
    cout << endl;
    cout << "Sorting Vector" << endl;
    int_vector_cout(vI_3,"vI_3");
    cout << "SORT" << endl;
    sort(vI_3.begin(),vI_3.end()); /// built in C++ function in std library
    int_vector_cout(vI_3,"vI_3");
    
    cout << "END" << endl << endl;
    
    return 0;
}
