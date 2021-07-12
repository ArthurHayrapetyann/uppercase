#include "head.hpp"
void nermucum(char a, char b, char c, char d, char e){
	int check;
	char arr[5];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	for (int i=0; i<5; i++){
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
	if (check != 1){
		for (int g=0; g<5; g++){
			cout << arr[g] << " ";
	}
	cout << endl;}

}
/* stanum 5 nish mtcnum e zangvaci mej ev zangvaci andamner stugum e hertov  poxelov ASCII i */



