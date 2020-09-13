#include <iostream>
using namespace std;

int main()
{
	int arr[5], count = 0;
	long long ans;
	int item1, item2;
	
	for(int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	ans = (arr[0]*10 + arr[1]) * (arr[2]*100 + arr[3]*10 + arr[4]);
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(j == i){
				continue;
			}
			item1 = arr[i]*10 + arr[j];
			
			for(int p = 0; p < 5; p++){
				for(int q = 0; q < 5; q++){
					item2 = p * 100 + q *10 + 
				} 
			}
		}
	}
}
