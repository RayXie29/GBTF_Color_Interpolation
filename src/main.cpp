#include <iostream>
#include <opencv2/opencv.hpp>
/****************************************************/
#include "GBTF.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
        
    cv::Mat img = cv::imread("./imgs/bayer_pattern_img.bmp",cv::IMREAD_COLOR);
    cv::Mat dst;
    
    GBTF_CFAInterpolation(img, dst, 0);
    
    
    cv::imshow("bayer_pattern_img.bmp",img);
    cv::imshow("GBTF_dst.bmp",dst);

    cv::waitKey(0);
    cv::destroyAllWindows();
    cv::imwrite("GBTF_dst.bmp",dst);
}



