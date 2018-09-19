#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int arr[10];                        //array of 10 ints
 
	srand( time(NULL) );                //get random generator seed based on current time

	arr[10] = 0;                        //last element is 0

	for(int i = 0; i < 9; ++i){
		arr[i] = rand();                //set each element to random int
	}

	for (int i = 0; i < 10; ++i){
		printf("%d: %d\n",i,arr[i] );   //print each element of arr
	}

	int rev[10];                        //another array of 10 ints

	int * loc_arr = &arr[9];            //location of last element of arr
	int * loc_rev = &rev[0];            //location of first element of rev

	for (int i = 0; i < 10; ++i){
		*loc_rev = *loc_arr;            //rev is reversed arr

		loc_arr--; 
		loc_rev++;
	}

for (int i = 0; i < 10; ++i){
		printf("%d: %d\n",i,rev[i] );   //print each element of rev
	}

}
