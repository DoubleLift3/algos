#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key);//prototype
void selectionSort (auto& Data);//prototype



int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(inputs,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;
	selectionSort(inputs);
	for(int i=0; i<inputs.size(); i++){
	cout << inputs[i] << "";
}
	 if((k%20000 == 0) && (k>0)){
		 cout << "number of passes=" << k;
	 }
    return 0;
	
}
  int linearSearch(auto Data, auto key){
	  for (int i=0; i<Data.size(); i++){
		  if (Data[i]==key){
			  return i;
			  }
		  }
		  return -1;
	  }


	void selectionSort (auto& Data){
	int j, k, minIndex;
	string tmp;
	for (j = 0; j<Data.size()-1; j++){
	minIndex= j;
	for (k = j+1; k<Data.size(); k++){
	if (Data[k] < Data[minIndex])
	minIndex = k;
	}
	if (minIndex!= j ){
	tmp = Data[j];
	Data[j] = Data[minIndex];
	Data [minIndex] = tmp;
	} 
}
}

			  
