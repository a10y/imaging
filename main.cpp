#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>
#include <math.h>
#include <string.h>

using namespace cv;
using namespace std;

//The original image, and the image after the transform
Mat original, transformed;

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


/*
 * Put in here whatever image transformations you want
 */
Mat transform(Mat& img){
   cout << "Performing the transforms..." << endl;
   return img.t();
}

void update_transformed(){
    transformed = transform(transformed);

    cout << "Showing the transform..." << endl;
    cv::imshow("transformed", transformed);
}
    

int main(int argc, char** argv)
{
    cout << "Showing image..." << endl;
    original = cv::imread("smile", CV_LOAD_IMAGE_COLOR);
    transformed = cv::imread("smile", CV_LOAD_IMAGE_COLOR);
    
    cv::namedWindow("original");
    cv::namedWindow("tranformed");
    cv::imshow("original", original);



    while (true){
        int key=cv::waitKey();
        if (key == 'q'){
            cv::destroyWindow("original");
            cv::destroyWindow("transformed");
        } else if(key == 't'){
            update_transformed();
        }
    }
    
    cout << "Images displaying." << endl;
    return 0;
}

