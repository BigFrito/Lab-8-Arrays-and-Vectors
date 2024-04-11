#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
*/
void printMemVec(vector<int> v){
    printf("Array - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++) {
        printf("Value :%i at Memory Location %p\n", v[i], &v + i);
}
}
/**
 * @brief increments all of the elements in v by 10
 * 
 * @param v - address to a vector of integers
*/
void incVecBy10(vector<int> &v){
    for(int i = 0; i< v.size(); i++){
        v[i] += 10;
    }
}

int main() {
    // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;

    //create a vector of integers called vec that can hold up to 5 elements
    vector<int> v(SIZE);

    //use a for loop to populate vec with values 100 to 104
    for(int i = 0; i < SIZE; i ++) {
        v[i] = 100 + i;
    }
    printf("Before Increment-----------------\n");

    //call printMemVec(...) on vec
    printMemVec(v);

    //call incBy10(...) on vec
    incVecBy10(v);
    printf("After Increment-----------------\n");

    //call printMemVec(...) on vec again to 
    printMemVec(v);

    //remove last element of vec
    v.pop_back();

    printf("After Pop------------------\n");
    //call printMemVec(...) on vec again to view the changes
    printMemVec(v);

    //append 101 and 102 at the end of vec
    v.push_back(101);
    v.push_back(102);

    printf("after Push-------------------\n");
    //call printMemVec(...) on vec again to view the changes
    printMemVec(v);

    return 0;
}