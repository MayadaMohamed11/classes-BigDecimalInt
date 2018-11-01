#include <iostream>
#include "BigDecimalInt.h"

using namespace std;
int main()
{
BigDecimalInt num1("123456789012345678901234567890");
BigDecimalInt num2("113456789011345678901134567890");
BigDecimalInt num3 = num2 + num1;
BigDecimalInt num4 = num2 - num1;
cout << "num1 = " << num1 << endl;
cout << "num2 = " << num2 << endl;
cout << "num2 + num1 = " << num3 ;
cout<<endl;
cout << "num2 - num1 = " << num4 ;
cout<<endl;
BigDecimalInt num5("333333333333333333333333333333");
BigDecimalInt num6("-111111111111111111111111111111");
BigDecimalInt num7 = num5 + num6;
BigDecimalInt num8 = num5 - num6;
cout << "num5 + num6 = " << num7 << endl;
cout << "num5 - num6 = " << num8 << endl;
    return 0;
}
