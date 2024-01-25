#include <iostream>
using namespace std;


void printinsquare(int n){
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        
    cout<<"* ";
    }
    cout<<endl;
}
}

void printrightangletri(int n){
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        
    cout<<"* ";
    }
    cout<<endl;
}
}

void numRightAngTri(int n){
    
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        
    cout<<j+1<<" ";
  
    }
    cout<<endl;
}
}

void sameNumRightTri(int n){
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        
    cout<<i+1<<" ";
    }
    cout<<endl;
}
}

void revRightTri(int n){
        for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<"* ";
    }
    cout<<endl;
}
}

void revNumRightTri(int n){
        for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<j+1<<" ";
    }
    cout<<endl;
}
}

void starpyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<<"*";
        }
                for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }
    
}

void revstartpyr(int n){
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (2*n-1-2*i); k++)
        {
            cout<<"*";
        }
                for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }
}

void rhombus(int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<<"*";
        }
                for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < (2*n-1-2*i); k++)
        {
            cout<<"*";
        }
                for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }
}

void rotatedTri(int n){
        for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        
    cout<<"* ";
    }
    
    cout<<endl;
}

    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i; j++)
    {
        
    cout<<"* ";
    }
    cout<<endl;
}
}

void binaryrightTri(int n){
        int binary=1;
        for (int i = 0; i < n; i++)
{
           if(i%2==0){
        binary=0;
       } 
       else{
        binary=1;
       }
    for (int j = 0; j < i+1; j++)
    {
       if(binary==0){
        binary=1;
       } 
       else{
        binary=0;
       }
    cout<<binary<<" ";
    }
    cout<<endl;
}

}

void numberCrown(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout<<j;
        }
        for (int k = 0; k < 2*n-2-2*i; k++)
        {
            cout<<" ";
        }
        for (int l = i+1; l > 0; l--)
        {
        cout<<l;
        }
        cout<<endl;
        
        
        
    }
    
}

void countingrightTri(int n){
    int start=1;
        for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        
    cout<<start<<" ";
    start++;
    }
    cout<<endl;
}
}

void ABCDrightTri(int n){
    for (int i = 0; i < n; i++)
    {   char alph='A';
        for (int k = 0; k < i+1; k++)
        {
            cout<<alph;
            alph++;
        }
        cout<<endl;
        
    }
    
}

void revABCDRightTri(int n){
      for (int i = 0; i < n; i++)
    {   char alph='A';
        for (int k = 0; k < n-i; k++)
        {
            cout<<alph;
            alph++;
        }
        cout<<endl;
        
    }
}

void sameABCDTri(int n){
    char alph='A';
      for (int i = 0; i < n; i++)
    {   
        for (int k = 0; k < i+1; k++)
        {
            cout<<alph;
         
        }
           alph++;
        cout<<endl;
        
    }
}

void ABCDPyr(int n){
        for (int i = 0; i < n; i++)
    {   char alph='A';
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
         for (int k = 0; k < i+1; k++)
        {
            cout<<alph;
            alph++;
        }
        
        alph='A';
          for (int k = 1; k < i+1; k++)
        {
            cout<<alph;
            alph++;
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        
    }
}

void revOrdABCDTRi(int n){
     char ch='A'+n-1;
       for (int i = 0; i < n; i++)
    {  
        for (int k = i; k >=0; k--)
        {   char c=ch-k;
            cout<<c;
          c++;
        }
        cout<<endl;
        
    }
}

void emptyrhombus(int n){

for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<"*";
    }
    for (int k = 0; k < 2*i-2; k++)
    {
        cout<<" ";
    }
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<"*";
    }
    
    cout<<endl;
}

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < 2*n-2-2*i; k++)
        {
            cout<<" ";
        }
        for (int l = i+1; l > 0; l--)
        {
        cout<<"*";
        }
        cout<<endl;
        
        
        
    }
}

void bow(int n){
     for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < 2*n-2-2*i; k++)
        {
            cout<<" ";
        }
        for (int l = i+1; l > 0; l--)
        {
        cout<<"*";
        }
        cout<<endl;
        
        
        
    }

    for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<"*";
    }
    for (int k = 0; k < 2*i-2; k++)
    {
        cout<<" ";
    }
    for (int j = 0; j < n-i+1; j++)
    {
        
    cout<<"*";
    }
    
    cout<<endl;
}


}

void emptysquare(int n){
        for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    
    cout<<endl;

    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < n; j++)
        {
                    if(j==0||j==n-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
        
    }
          for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    

    
}

int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{   int n; 
    cin>>n;
    // printinsquare(n);
    // printrightangletri(n);
    // numRightAngTri(n);
    // sameNumRightTri(n);
    // revRightTri(n);
    // revNumRightTri(n);
    // starpyramid(n);
    // revstartpyr(n);
    rhombus(n);
    // rotatedTri(n);
    // binaryrightTri(n);
    // numberCrown(n);
    // countingrightTri(n);
    // ABCDrightTri(n);
    // revABCDRightTri(n);
    // sameABCDTri(n);
    // ABCDPyr(n);
    // revOrdABCDTRi(n);
    // emptyrhombus(n);
    // bow(n);
    // emptysquare(n);

}



return 0;
}