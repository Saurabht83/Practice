# include<bits/stdc++.h>

using namespace std;

int main(){
   string s = "110011111101110000111110001";
   int n = s.size();
   int i = 0; int j = 0;
   for(int i = 0; i< n; i++){
       if(s[i] == '0'){
           s[j++] = '0';
           s[i] = '1';
       }
   }

  cout << s;

    return 0;
}