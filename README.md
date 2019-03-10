I have introduced the basic color interpolation algorithm in my "Basic_Color_Interpolation" reop. But simple color interpolation method will cause a lot of artifacts, such as false color, decreasing resolution, aliasing... <br />
These artifacts usually due to we simply interpolate the missing pixel value with its neighbor pixel value and forget to consider the relationship of R,G and B. <br />
We should consider the directional color difference or gradients of every pixel and using this correction to interpolate the missing color value. <br />

This repo is the implementing of "Gradient Based Threshold Free CFA Interpolation" algorithm. It first interpolates the green channels of image using directional weighting by estimating the color difference and gradients information of image.<br />
Then it interpolates the Red and Blue channels by a filter comes from "Spatially adaptive color filter array interpolation for noiseless and noisy data" paper and bilinear method.<br />
<br />
This is the bayer image from my "Basic_Color_Interpolation" reop which the bayer pattern is GRBG.<br />
![alt text](https://raw.githubusercontent.com/RayXie29/GBTF_Color_Interpolation/master/imgs/bayer_pattern_img.bmp)

This is the result from bilinear method which we can see a lot of false color effect.<br />
![alt text](https://raw.githubusercontent.com/RayXie29/GBTF_Color_Interpolation/master/imgs/Bilinear_example.bmp)

This is the result from GBTF method and it reduces the artifacts very effectively.<br />
![alt text](https://raw.githubusercontent.com/RayXie29/GBTF_Color_Interpolation/master/imgs/GBTF_example.bmp)
<br />
<br />
reference:<br />
1.https://ieeexplore.ieee.org/document/5654327 (GRADIENT BASED THRESHOLD FREE COLOR FILTER ARRAY INTERPOLATION)<br />
2.https://onlinelibrary.wiley.com/doi/abs/10.1002/ima.20109 (Spatially adaptive color filter array interpolation for noiseless and noisy data)<br />