#include <cmath>
#include <iostream>

using namespace std;

class Image
{
public:

	void GetImageInfo()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << pixels[i].GetInfo()<< endl;
		}
	}
private:

	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}

		string Getinfo()
		{
			return "Pixel: r=" + to_string(r) + "g" + to_string(g) + "b" + to_string(b);
		}


	private:

		int r;
		int g;
		int b;

	};

	static const int LENGHT = 5;

	Pixel pixels[LENGHT]
	{
		Pixel(0, 4, 64),
		Pixel(4, 14, 164),
		Pixel(185, 38, 204),
		Pixel(5, 26, 34),
		Pixel(8, 15, 85),
};


};

int main()
{
	Image img;
	Img.GetImageInfo();

	return 0;
}