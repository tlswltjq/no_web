//
//  main.cpp
//  no_web
//
//  Created by 신지섭 on 2023/05/02.
//

#include <iostream>
using namespace std;
namespace parent{
int num = 2;
    namespace child1{
        int num =4;
    }
    namespace child2{
        int num =3;
    }
}
    int main(void){
        cout<<parent::num<<"\n";
        cout<<parent::child1::num<<"\n";
        cout<<parent::child2::num<<"\n";
        
        return 0;
    }
