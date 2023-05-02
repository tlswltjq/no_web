//
//  main.cpp
//  no_web
//
//  Created by 신지섭 on 2023/05/02.
//

#include <iostream>
using namespace std;
#define SQUARE(x) ((x) * (x))
int sqrt();
inline int sqrtt(int x){
    return x * x;
}
namespace Parent{
    int num = 2;
    namespace child1 {
    int num = 3;
    }
    namespace child2 {
    int num = 4;
    }
}
int main(int argc, const char * argv[]) {
    cout<<"ParentNum : "<<Parent::num<<endl;
    cout<<"Child1Num : "<<Parent::child1::num<<endl;
    cout<<"Child2Num : "<<Parent::child2::num<<endl;
    return 0;
}
