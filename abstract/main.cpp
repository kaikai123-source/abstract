#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	VideoCapture cap;
	cap.open(0);
	while (1) {
		cv::Mat src,dst;
		bool rSucess = cap.read(src);
		if (rSucess) {
			
			medianBlur(src, dst, 3);
			imshow("src", src);
			imshow("dst", dst);
			waitKey(30);
		}
			
		
	}





}