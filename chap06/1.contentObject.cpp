#include <iostream>
using namespace std;


class SoSimple {
private:
    int num;
public:
    SoSimple(int n) : num(n) {}
    SoSimple& Addnum(int n) {
        num += n;
        return *this;
    }
    void ShowData() const {
        cout << "num " << num << endl;
    }
};

void func1(const SoSimple& s) {
    // 파라미터의 인자를 const 선언받으면 const 함만 선언할 수 있다
    s.ShowData();
}

int main()
{
    //const 객체 선언하면 const 함수만 사용할 수 있다
    const SoSimple obj(7);
    obj.ShowData();
    func1(obj);
    return 0;
}

