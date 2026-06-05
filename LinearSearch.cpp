#include<iostream>
using namespace std;
int main()
{
    int i, search, arr[10] = {101,102,103,104,104,105,106,107,108,109};
    bool isFound = false;
    cout<<"What you can Search" << " ";
    cin>> search;
    for(i=0; i<10; i++)
    {
    	if(arr[i] == search){
    		cout<<i<<" ";
    		isFound = true;
    		break;
		} 
        
    }
    if(!isFound){
     cout<< " Not Found ";	
	}
    
    return 0;
}