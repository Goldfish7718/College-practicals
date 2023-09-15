/*Write a menu driven C++ program with a class for String. Write functions 
1. To determine the frequency of occurrence of a particular character 
    in the string.
2. Extract a new string from original string by accepting starting
    position and length 
3. To accept any character and return the string with by removing all 
    occurrences of a character accepted
4. To make an in-place replacement of a substring w of a string by the 
    string x. Note that w may not be of same size that of x
5. To check whether given string is palindrome or not */
#include<iostream>
using namespace std;

class word {
public:
    
    char name[200],newname[200],replacestring[200],str1[200],str2[200];
    char c;
    int j=0,i=0,count = 0, sposition=0,length=0,check=0,m=0;

	public:
    void getdata() {
        cout << "Enter the string:";
		cin.ignore();
        cin.getline(name,200);
    }

    void frequency() {
        cout << "Enter the Character you want to check:";
        cin >> c;
        while(name[i]!='\0')
    				{
    					if(name[i]==c)
    					{
    						count++;
    					}
    					i++;
    				}
    				cout<<"Frequency of"<<c<<" is "<<count<<endl;
    }
    void position(){
    	cout<<"Enter the starting position";
    	cin>>sposition;
    	cout<<"Enter the length";
    	cin>>length;
    	for(i=(sposition-1);i<length;i++)
    	{
    		cout<<name[i];
    	
    	}
    	cout<<endl;
    
    }
    void remove(){
    		cout<<"Enter the character you want to remove";
    		cin>>c;
    		
    				while(name[i]!='\0')
    				{
    					if(name[i]!=c)
    					{
    						cout<<name[i];
    					}
    					i++;
    				}
    				cout<<endl;
    
    
    }
    void palindrome(){
    	while(name[i]!='\0')
    				{
    					
    					length++;
    					
    					i++;
    				}
    				
    				for(i=(length-1);i>=0;i--)
    				{
    					newname[j]=name[i];
    					j++;
    				}
    				
    				
    				i=0;
    				while(i<length)
    				{
    					if(newname[i] != name[i])
    					{
    						check=1;
    						
    					}
    					
    					i++;
    				}
    				
    				if(check==1)
    				{
    					cout<<name<<" is Not palindrome.\n";
    				}
    				else
    				{
    					cout<<name<<" is Palindrome.\n";
    				}
    				
    				
    			}
    			
    void replace(){
    int position;
    char str1[200], str2[200]; 
    int length = 0;
    int m = 0;

    cout << "Enter substring to replace: ";
    cin >> str1;
    cout << "Enter new substring: ";
    cin >> str2;

    
    while (str1[length] != '\0') {
        length++;
    }

    i = 0;
    j = 0;
    int k = 0;
    while (name[i] != '\0') {
        if (name[i] == str1[j]) {
            position = i;
            while (str1[j] != '\0') {
                if (str1[j] != name[position + k]) {
                    m = 1;
                }
                k++;
                j++;
            }
            if (m == 0) {
                int end_pos = position + length;
                i = 0;
                while (i < position) {
                    cout << name[i];
                    i++;
                }
                cout << str2;
                while (name[end_pos] != '\0') {
                    cout << name[end_pos];
                    end_pos++;
                }
                break; 
            }
        }
        i++;
    }

    if (m == 1) {
        cout << "String not found.";
    }
}

    
    


};

int main() {
    word w;
    int op,r;
    
    do{
        cout << "Please Select the operation\n";
        cout<<"1.Add the String\n2.Determine the ferequency\n3. New string from original string by  starting position and length\n4.Remove character from string\n5.Palindrom\n6.Replacing new with old\n7.Exit\n";
        cin>>op;
        switch(op){
            case 1:
                w.getdata();
                break;
            
           case 2:
                w.frequency();
                break;

            case 3:
                w.position();
                break;
        
            case 4:
                w.remove();
                break;
               
            case 5:
                 w.palindrome();
                 break;
            case 6:
            	w.replace();

            case 7:
                exit(0);
                break;
            
            default:
                cout<<"Please Enter the correct choice";
                break;
        }
        cout << "For Continue Press 1.Yes 2.No";
        cin >> r;

    }while (r == 1);
    return 0;
}
