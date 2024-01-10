#include<iostream>
#include<conio.h>
using namespace std;

//output
void output(float a[30], int n){
	int i;
	for(i=0; i < n; i++){
    	cout<<"\tA["<<i+1<<"]="<<a[i];
	}
	
}
//sum
float sum(float a[30], int n){
	int i; 
	float s;
	for(i = 0; i < n; i++){
		s = s + a[i];	
	}
	return s;	
}
//search
float search(float a[30], int n, float item){
	int found, i;
	for(i=0; i < n; i++){
		if (item == a[i])
    		cout<<"\n\tYour item is A["<<i+1<<"]="<<item;
    	found = 1;
    	if(found != 1)
    		cout<<"\nSearch not found!\n";
	}
	return item;	
}
//sort
float sort(float a[30], int n){
	float temp;
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i + 1;j < n; j++ ){
		
		if (a[i] > a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}	
		}  
