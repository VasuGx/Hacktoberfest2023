#include<iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=0;i<=n;i++){
    cout<<"****"<<endl;
   } 
}


#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=3;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j){
            cout<<count<<"  ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<"    ";
            count=count+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    }
}
 Alternate method for above
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k=k+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k=k-1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1;i<=n;i++){
        int k = 64;
        k=k+i;
        for(int j=1;j<=n;j++){
            cout<<char(k);
        }
        cout<<endl;
        
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1;i<=n;i++){
        int k = 65;
        
        for(int j=1;j<=n;j++){
            cout<<char(k);
            k=k+1;
        }
        cout<<endl;
        
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=3;
    int k=65;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            cout<<char(k)<<"  ";
            k=k+1;
        }
        cout<<endl<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i =1;i<=n;i++){
        int k=64;
        k=k+i;
        for(int j=1;j<=i;j++){
            cout<<char(k);
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4,k=65;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(k);
            k=k+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i =1;i<=n;i++){
        int k=64;
        k=k+i;
        for(int j=1;j<=i;j++){
            cout<<char(k);
            k=k+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int k=69;
        k=k-i;
        for(int j=1;j<=i;j++){
            cout<<char(k);
            k=k+1;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

