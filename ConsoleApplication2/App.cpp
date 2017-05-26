#include "opencv.hpp"
#include <iostream>
#include "App.h"
#include "ImageProcessor.h"

using namespace cv;

int main(int argc, char** argv) {
	char* imageName = argv[1];

	Mat image;
	image = imread(imageName, CV_LOAD_IMAGE_GRAYSCALE);

	if(argc != 2 || !image.data) {
		printf(" No image data \n ");
		return -1;
	}

	ImageProcessor processor;
	processor.process(image);

	imwrite("result.jpg", processor.resultImage);

	namedWindow(imageName, CV_WINDOW_AUTOSIZE);
	imshow(imageName, processor.resultImage);
	waitKey(0);
	return 0;
}