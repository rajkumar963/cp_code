// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==1)
//     {cout<<"one";}
//     if(n==2)
//     {cout<<"two";}
//     if(n==3)
//     {cout<<"three";}
//     if(n==4)
//     {cout<<"four";}
//     if(n==5)
//     {cout<<"five";}
//     if(n==6)
//     {cout<<"six";}
//     if(n==7)
//     {cout<<"seven";}
//     if(n==8)
//     {cout<<"eight";}
//     if(n==9)
//     {cout<<"nine";}
//         if(n>9)
//     {
//         cout<<"Greater than 9";
//     }    
//     }




// #include <iostream>
// using namespace std;

// int main() {
//     int x,y;
//     cin>>x>>y;
// 	if(x<y){
// 	    cout<<"YES";
// 	}
// 	else{
// 	    cout<<"NO";
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cin>>x>>y;
// 	// your code goes here
// 	if(x*2>y){
// 	    cout<<"YES";
// 	}
// 	else{
// 	    cout<<"NO";
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
// 	int x,y;
// 	for(int i=1;i<=t;i++){
// 	    cin>>x>>y;
// 		cout<<x-y<<endl;	
// 	}
// 	// for(int i=1;i<=t;i++){
// 	//   cout<<x-y<<endl;	
// 	// }
// 	return 0;

// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c,x;
	for(int i=1;i<=t;i++){
	    cin>>a>>b>>c>>x;
	
	    if((a+b)>=x||(b+c)>=x||(a+c)>=x){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}}