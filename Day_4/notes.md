# All Power is within YOU ; YOU can do ANYTHING and EVERYTHING

# Goal : To Master Data Structure and Algorithm using C++

*DAY - 4 (01/08/25)*

# Topic - Patterns

    outer loops ----> rows
    inner loops ----> columns

    continue pattern logic              1. input n = 3; 
                                        2. input num = 1;//for continuing 
                                        3. for(int i = 0 ; i<n ; i++){
    we use num variable as extra                for(int j = 0; j<n ;j++){
       as bcz as we want to continue changing the no      cout<<num; 
            and we update it everytimes so it can change     num++; 
                                            }
                                            cout<<endl; 
                                        }
                                        4. return 0 / end 


# HOMEWORK
        *      *                                        
        **    **                                                                  #include<iostream>
        ***  ***        code                                                        using namespace std; 
        ********    ------------> 
        ********                                                                    int main(){
        ***  ***                                                                    int a ;
        **    **                                                                    cout << "Enter Length : ";
        *      *                                                                    cin>>a; 

                                                                                    //top
                                                                                    for(int i = 0; i<a ; i++){
                                                                                        for(int j = 0 ; j<=i; j++){
                                                                                            cout << "*";
                                                                                        }
                                                                                        for(int k =0 ; k<a-i-1 ; k++){
                                                                                            cout<<" "; 
                                                                                        }
                                                                                        for(int l = 0; l<a-i-1; l++){
                                                                                            cout<<" "; 
                                                                                        }
                                                                                        for(int m = 0 ; m<=i ; m++){
                                                                                            cout<<"*"; 
                                                                                        }
                                                                                        cout<<endl; 
                                                                                    }
                                                                                    

                                                                                    // bottom
                                                                                    for(int i= 0; i<a; i++){
                                                                                        for(int j = 0 ; j<a-i ; j++){
                                                                                            cout<<"*"; 
                                                                                        }
                                                                                        for(int k = 0 ; k<i; k++){
                                                                                            cout<<" "; 
                                                                                        }
                                                                                        for(int l = 0 ; l<i ; l++){
                                                                                            cout<<" " ; 
                                                                                        }
                                                                                        for(int m = 0 ; m<a-i ; m++){
                                                                                            cout<<"*"; 
                                                                                        }
                                                                                        cout<<endl;
                                                                                    }
                                                                                    return 0 ; 
                                                                                }
                      
        
       
        

       
       
