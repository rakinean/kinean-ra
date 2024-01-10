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
	}
	return temp;
}
int main(){
	//input
	float result, temp, sort1;
	float item, sum1, sum2;
	int i, n;
	float a[50];
	cout<<"Choose An Option :[ 1 2 3 4 5 ]"<<endl;
	cout<<"1.Output number of Array:"<<endl;
	cout<<"2.Sum of Array:"<<endl;
	cout<<"3.Search :"<<endl;
	cout<<"4.Sort list :"<<endl;
	cout<<"5.Exite:"<<endl;
	cout<<"Enter number of array:"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Enter A["<<i<<"]=";cin>>a[i];	
	}
	int op;
	do{
		cout<<"\n Choose An Option :[1 2 3 4 5 ]--> ";cin>>op;
		switch(op){
			case 1:{
			cout<<"\n Output list with fnction";output(a ,n);	
			}
			break;	
			case 2:{
				sum2 = sum(a, n);
				cout<<"Sum = "<<sum2;
				
				
			}
			break;	
			case 3:{
			cout<<"\nInput item: ";cin>>item;
				result = search(a, n, item);
			cout<<"\n search value in list:"<<item;		
				
			}
			break;	
			
			case 4:{
			sort1 = sort(a, n);
				cout<<"List After sort :";
				output(a ,n);
			
				
			}
			break;	
				
		}
	}while(op!=5);

    
	
}
