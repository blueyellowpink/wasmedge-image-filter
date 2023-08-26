#include <iostream>

#include <opencv2/opencv.hpp>

int main() {
    cv::Size dims { 15, 15 };
    cv::Mat src, dst;

    std::string lenna = "./lenna.png";
    src = cv::imread(lenna);

    cv::GaussianBlur(src, dst, dims, 0);

    cv::imwrite("./lenna_blur.png", dst);

    return 0;
}
