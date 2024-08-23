#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 void printVector1DChar(vector<char> one){
 	for(int i=0; i<one.size(); i++){
 		cout<<one[i]<<" ";
 	}
 	cout<<endl;
 }

 void printVector1DInt(vector<int> one){
 	for(int i=0; i<one.size(); i++){
 		cout<<one[i]<<" ";
 	}
 	cout<<endl;
 }

#endif