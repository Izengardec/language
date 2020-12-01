#include <iostream>

int main(){
    int n;
    std::string s;
    std::cin>>n;
    if (n/1000!=0){
        for (int i=0;i<n/1000;++i){
            s+='M';
        }
        n=n-n/1000*1000;
    }
    if (n/100!=0){
        if (n/100==9){
            s+="CM";
        }
        else if (n/100>=5){
            s+='D';
            for (int i=0;i<n/100-5;++i){
            s+='C';
        }
        } else{
            for (int i=0;i<n/100;++i){
            s+='C';
        }

    }
    n=n-n/100*100;
    }
    if (n/10!=0){
        if (n/10==9){
            s+="XC";
        }
        else if (n/10>=5){
            s+='L';
            for (int i=0;i<n/10-5;++i){
            s+='X';
        }
        } else{
            for (int i=0;i<n/10;++i){
            s+='X';
        }

    }
    n=n-n/10*10;
    }
    if (n!=0){
        if (n==9){
            s+="IX";
        }
        else if (n>=5){
            s+='V';
            for (int i=0;i<n-5;++i){
            s+='I';
        }
        } else{
            for (int i=0;i<n;++i){
            s+='I';
        }
    }
    }
    std::cout<<s;
    return 0;
}
