
A = [ 0.2990 0.5870 0.1140 0; 
    -0.1687 -0.3313 0.5000 128; 
    0.5000 -0.4187 -0.0813 128;
    0 0 0 1];

B = inv(A);
B
RGB = [10; 10; 10; 1];
YUV = A * RGB;
YUV
YUV = [10; 10; 10; 1];

RGB = B * YUV;
RGB