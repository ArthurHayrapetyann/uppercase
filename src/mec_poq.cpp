#include "head.hpp"
#include <fstream>
void nermucum(char a, char b, char c, char d, char e){
	ofstream myfile;
	myfile.open("output.txt");//the "output.txt" file is created
	int check;
	char arr[5];//gives the array the values "a, b, c, d, e"
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	for (int i=0; i<5; i++){	//changes letters to uppercase or lowercase
		if(arr[i]>64 && arr[i]<91){
			arr[i] += 32;
		}else if(arr[i]>96 && arr[i]<123){
			arr[i] -= 32;
		}else{
			cout << "Error  Այս ծրագիրը նախատեսված է միայն տառերի համար"  << endl;
			check = 1;	
			break;
		}
	}
	if (check != 1){//prints the received letters in the "output.txt" file
		for (int g=0; g<5; g++){
     			 myfile << arr[g] << " ";
  			 	
	}
	cout << endl;

	
	}
	myfile.close();//close "outout.txt" file
}




