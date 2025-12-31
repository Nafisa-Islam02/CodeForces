#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int size,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>size;
        string s,t;
        int arr[26]={0};
        int arr1[26]={0};
        int fakeLove=0;
        cin>>s;
        for(int i=0; i<size; i++)
        {
            
            arr[s[i]-'a']++;
        }
        //cout<<arr[0]<<endl;
        cin>>t;
        for(int i=0; i<size; i++)
        {
            
            arr1[t[i]-'a']++;
        // cout<<(t[i]-'a')<<endl;
        }
        //cout<<arr1[0]<<endl;

        for(int i=0; i<26; i++)
        {
            //cout<<arr[i]<<" "<<arr1[i]<<endl;
            if(arr[i]!=arr1[i])
            {
                fakeLove=1;
                break;
                
            }
        }
        if(fakeLove) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}