
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}

//
//B�i 2 
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += i * i;
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}


// B�i 3
// #include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 / i;
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}

//B�i 4

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 / (2 * i);
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}

// b�i 5

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 0; i <= n; i++) {
//        sum += 1.0 / (2 * i + 1);
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}


//B�i 6

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 / (i * (i + 1));
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}


//B�i 7

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += 1.0 * i / (i + 1);
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}


//B�i 8

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 0; i <= n; i++) {
//        sum += 1.0 * (2 * i + 1) / (2 * i + 2);
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}

//B�i 9

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    long long product = 1;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        product *= i;
//    }
//    cout << "Giai thua T(n) = " << product << endl;
//    return 0;
//}

//B�i 10

//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, n;
//    long long power = 1;
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        power *= x;
//    }
//    cout << "Luy thua T(x, n) = " << power << endl;
//    return 0;
//}

//B�i 11

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    long long sum = 0, product = 1;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        product *= i;
//        sum += product;
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}

//B�i 12

//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, n;
//    long long sum = 0, term = 1;
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        term *= x;
//        sum += term;
//    }
//    cout << "Tong S(x, n) = " << sum << endl;
//    return 0;
//}

//B�i 13

//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, n;
//    long long sum = 0, term = 1;
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        term *= x * x;
//        sum += term;
//    }
//    cout << "Tong S(x, n) = " << sum << endl;
//    return 0;
//}


// B�i 14

//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, n;
//    long long sum = 0, term = 1;
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 0; i <= n; i++) {
//        term *= x;
//        sum += term;
//        term *= x * x;
//    }
//    cout << "Tong S(x, n) = " << sum << endl;
//    return 0;
//}

//B�i 15


//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    double sum = 0;
//    long long partialSum = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        partialSum += i;
//        sum += 1.0 / partialSum;
//    }
//    cout << "Tong S(n) = " << sum << endl;
//    return 0;
//}


//B�i 16

//#include <iostream>
//using namespace std;
//
//long long factorial(int num) {
//    long long result = 1;
//    for (int i = 1; i <= num; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int x, n;
//    double sum = 0;
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += pow(x, i) / factorial(i);
//    }
//    cout << "Tong S(x, n) = " << sum << endl;
//    return 0;
//}


//B�i 17
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//long long factorial(int num) {
//    long long result = 1;
//    for (int i = 1; i <= num; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int x, n;
//    double sum = 1; 
//    cout << "Nhap co so x: ";
//    cin >> x;
//    cout << "Nhap so mu n: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        sum += pow(x, 2 * i) / factorial(2 * i);
//    }
//    cout << "Tong S(x, n) = " << sum << endl;
//    return 0;
//}


