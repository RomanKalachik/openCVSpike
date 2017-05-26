#include "opencv.hpp"
#include <iostream>
#include "App.h"
#include "ImageProcessor.h"

using namespace cv;
using namespace std;
void ImageProcessor::process(const Mat & rawImg) {
	resultImage.release();
	resultImage = rawImg.clone();
	demosaicing(rawImg, resultImage, CV_BayerGR2RGB);
}