#include <iostream>
using namespace std;

class rectangle{
private:
    int length;
    int width;
public:
    void setdimensions(int l,int w)
    {
        length = l;
        width = w;
    }
    int getarea(){
         return length*width;
    }
};
    int main(){
    rectangle rt;
    rt.setdimensions(7,4);
    cout<<rt.getarea()<<endl;
    return 0;

}
