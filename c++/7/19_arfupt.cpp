//p451 
#include <iostream>
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main() {
    using namespace std;
    double av[3] =  {1112.3, 1542.6, 2227.9};

    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2; //C++11 자동 형 변환
    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다.
    // const double *(*p2)(const double *, int) = f2;
    cout << "함수 포인터:\n";
    cout << "주소값\n";
    cout << (*p1)(av,3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    //포인터들의 배열 pa
    // auto는 리스트 초기화에 사용할 수 없다.
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    // 그러나, 단일 값을 초기화할 떄는 사용할 수 있다.
    // pb는 pa의 첫 번째 원소를 가리킨다.
    auto pb = pa;
    // C++11 이전 버전을 사용할 경우 아래 구문으로 대체한다.
    // cosnt double *(**pb)(const double *, int) = pa;
    cout << "\n함수 포인터를 원소로 가지는 배열:\n";
    cout << "주소값\n";
    for (int i = 0; i < 3; i++) {
        cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
    }
    cout << "\n함수 포인터를 가리키는 포인터:\n";
    cout << "주소 값\n";
    for (int i = 0; i < 3; i++) {
        cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;
    }










    return 0;
}

const double * f1(const double * ar, int n) {
    return ar;
}

const double * f2(const double ar[], int n) {
    return ar+1;
}

const double * f3(const double ar[], int n) {
    return ar+2;
}