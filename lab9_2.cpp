#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int rows,int col){
	  if (rows <= 0 || col <= 0) { 
        cout << "Invalid input\n";
        return;
    }
	 for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout << 'O';
        }
        cout << '\n';
		
	 }
	
	

}

int printO(){
	
	printO(2,2);
	cout << "\n";	
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
