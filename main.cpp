#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>
#include <math.h>
#include <string.h>

using namespace cv;
using namespace std;

void help()
{
	cout <<
	"\nA program using pyramid scaling, Canny, contours, contour simpification and\n"
	"memory storage (it's got it all folks) to find\n"
	"squares in a list of images pic1-6.png\n"
	"Returns sequence of squares detected on the image.\n"
	"the sequence is stored in the specified memory storage\n"
	"Call:\n"
	"./squares\n"
    "Using OpenCV version %s\n" << CV_VERSION << "\n" << endl;
}



int main(int argc, char** argv)
{
    cout << "Showing image..." << endl;
    Mat image = cv::imread("star_wars_photo", CV_LOAD_IMAGE_COLOR);
    cv::namedWindow("image");
    cv::imshow("image", image);

    cout << "Image displaying." << endl;
    return 0;
}

