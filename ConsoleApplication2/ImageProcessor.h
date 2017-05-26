#include "opencv.hpp"
#include <iostream>
#include "App.h"
using namespace cv;
class ImageProcessor {
public:
	void process(const Mat & rawImg);
	Mat resultImage;
};

