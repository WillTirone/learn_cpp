#include </home/willtirone/learn_cpp/std_lib_facilities.h>

// on page 141

int area(int length, int width)
{
   // if (length<=0||width<=0) error('non positive')
    return length * width;
}
 
int framed_area(int x, int y)
{
    const int frame_width = 2;
    if (x-frame_width <=0 || y-frame_width<=0)
     //   error('non positive area() arg called by framed_area()');
    return area(x-frame_width,y-frame_width); 
}

int main() 
{
    int x = -1; 
    int y = 2; 
    int z = 4; 
    
    if (x<=0 || y<=0) error("non-positive area argument"); 

    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1) / area3; 
    cout << 10 << '\n'; 
}