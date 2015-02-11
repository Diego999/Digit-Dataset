#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <string>
#include <iostream>
int main(int argc, char* argv[])
{
	for(int j = 1; j <= 9; ++j)
		for(int k = 1; k <= 30; ++k)
		{
			std::string filepath = "/Users/Diego/Github/Digit-Dataset/Set2/" + std::to_string(j) + "/" + std::to_string(j) + "_" + std::to_string(k) + ".jpg";
			cv::Mat picture = cv::imread(filepath, CV_LOAD_IMAGE_GRAYSCALE) > 128;
			cv::resize(picture, picture, cv::Size(30, 20));
			cv::imwrite(filepath, picture);
		}
	return 0;
}