#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat srcMat = imread("C:/Users/HS/Desktop/2.jpg", 0);
	cv::Mat result;
	cv::Mat l;
	imshow("src", srcMat);
	threshold(srcMat, result, 100, 255, THRESH_BINARY);
	imshow("res", result);
	adaptiveThreshold(srcMat, l, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 21, 10);
	imshow("lll", l);
	waitKey(0);
}