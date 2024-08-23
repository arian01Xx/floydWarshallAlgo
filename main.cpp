#include "solution.hpp"
#include "print.hpp"

 int main(){

 	SolutionNineteen solution19;
 	string source="abcd";
 	string target="acbe";
 	vector<char> original={'a','b','c','c','e','d'};
 	vector<char> changed={'b','c','b','e','b','e'};
 	vector<int> cost={2,5,5,1,2,20};
 	long long minim=solution19.minimumCost(source, target, original, changed, cost);
 	cout<<"original word: "<<source<<endl;
 	cout<<"target: "<<target<<endl;
 	cout<<"The values: "<<endl;
 	printVector1DChar(original);
 	cout<<"The interchanges: "<<endl;
 	printVector1DChar(changed);
 	cout<<"The costs by interchanges: "<<endl;
 	printVector1DInt(cost);
 	cout<<"output: "<<endl;
 	cout<<minim<<endl;

  	return 0;
 }