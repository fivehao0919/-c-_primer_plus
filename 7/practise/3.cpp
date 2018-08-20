// pass struct
#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_box(box b);
void calculate_volume(box * pb);

int main()
{
    box pencil_box;
    cout << "maker: ";
    cin >> pencil_box.maker;
    cout << "height: ";
    cin >> pencil_box.height;
    cout << "width: ";
    cin >> pencil_box.width;
    cout << "length: ";
    cin >> pencil_box.length;
    calculate_volume(&pencil_box);
    print_box(pencil_box);
}

void print_box(box b)
{
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
}

void calculate_volume(box * pb)
{
    pb->volume = pb->height * pb->width * pb->length;
}
