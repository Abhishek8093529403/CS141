/* Implement your versions for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr  */

#include <iostream>
using namespace std;

char* strcpy(char* str1,char* str2)
   {
	if (str2==NULL)
	{	
 	return NULL;
	}
	else 
	{
 	char* p=str1;
 	while( *str2 != '\0')
 		{ *str1=*str2;
    		str1++;
    		str2++;
 		}
	*str1='\0';
  	return p;
   	}
  
   }


int strlen(char* str)
    {
       int len=0;
       while(*str != '\0'  )
     		{
                 
		 str++;
		 len++;
		}
       return len;
    }

char* strcat(char* str,char* str2)
 {
    int size1=0;
    char* z=str;
    while(*z!= '\0')
	{
	 size1++;
	 z++;
	}
    cout<<"size of str"<<size1<<endl;
    char* p=str+size1;
    while(*str2!= '\0')
	{
	 *p++=*str2++;
	}
    *p='\0';
    return str;
 }

int strcmp(char * str1, char * str2)
{
    int i = 0;
    while(*(str1+i)!='\0' || *(str2+i)!='\0')
    {
        if(str1[i] == str2[i])
        i++;
        else
        return str1[i] - str2[i];
    }

    // Return the difference of current characters.
    
}







int main()
{
    //Declaring intial string
    char str1[100];
    cout<<"Enter string 1"<<endl;
    cin.getline(str1,100);
    
    cout<<endl;
    
    //Implementation of strcpy function
    char str2[100];
    //Copying value of str to str2
    cout<<"Output of strcpy function:"<<strcpy(str2,str1)<<endl;
    //cout<<str2<<endl;//Print output
    
    cout<<endl;
    
    //Implementation of strlen function
    cout<<"Lenght of string 1:"<<strlen(str1)<<endl;//Shows the length of str
   
    
    cout<<endl;
    
    char str3[20];
    cout<<"Enter string 3"<<endl;
   cin.getline(str3,20);
    
    cout<<endl;
//
    //implementation of strcmp
    int res = strcmp(str1, str3);

    if(res == 0)
    {
       cout<<"Both strings are equal."<<endl;
    }
    else if(res < 0)
    {
        cout<<"First string is smaller than second in ascii values."<<endl;
    }
    else
    {
       cout<<"First string is greater than second in ascii values."<<endl;
    }
    //Implementation of strcat function
 
    //Concatenating str with str3
    cout<<"the string after catenation: "<<strcat(str1,str3)<<endl;//output represented by the string whcih is concatenated by other string
    
    cout<<endl;

    
    /*//Implementation of strchr function
    cout<<"Use of strchr function"<<endl;
    char str1[20];
    cout<<"Enter string"<<endl;
    cin.getline(str1,20);
    
    cout<<endl;
    
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
    
    cout<<endl;
    
    char* ch = strchr(str1, c); 
    if(ch!=NULL)//Check whether character is present in the string or not
    {
        cout<<"Character is present in the string"<<endl;
        while (ch!=NULL)//Loop to find out the postion at which the Character is occuring in the string
        {
            cout<<"found at:"<<(ch-str1+1)<<endl;
            ch=strchr(ch+1,c);
        }
    }
    else
    {
        cout<<"Character is absent in the string"<<endl;
    }
    
    cout<<endl;
    
    //Implementation of strstr function
    cout<<"Use of strstr function"<<endl;
    char str4[20];
    cout<<"Enter str4"<<endl;
    cin.getline(str4,20);
    
    cout<<endl;
    
    cout<<"Str4="<<str4<<endl;
    
    cout<<endl;
    
    char str5[20];
    cout<<"Enter str5"<<endl;
    cin.getline(str5,20);
    
    cout<<endl;
    
    cout<<"Str5="<<str5<<endl;
    
    cout<<endl;
    
    char* p=strstr(str4,str5);//Check the first occurance of str4 in str3
    if(p)
    {
        strcpy(p,str5);
        cout<<"Str5 is present in str4"<<endl;
    }
    else
    cout<<"Str5 is not present in str4"<<endl;
    cout<<str4<<endl;*/
    return 0;
}
