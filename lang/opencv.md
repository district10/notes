# OpenCV

```
     |<- cols ->|
-----o---x------>
 |   |
rows |
     |
     V  y
```

Basics -<

:   -   CvArr -> CvMat -> IplImage

    -   header files -<

        :   ```cpp
            #include <iostream>
            #include <string>
            #include <vector>
            #include <cstdio>
            #include <cctype>
            #include <ctime>

            #include <opencv2/core.hpp>
            #include <opencv2/highgui.hpp>
            #include <opencv2/imgcodecs.hpp>
            #include <opencv2/imgproc.hpp>
            #include <opencv2/ml.hpp>
            #include <opencv2/objdetect.hpp>
            #include <opencv2/opencv.hpp>
            #include <opencv2/video/tracking.hpp>
            ```

    -   imread, imshow -<

        :   ```cpp
            cv::Mat imgSrc = cv::imread( IMAGE_INPUT_SRC /*, cv::IMREAD_COLOR*/ ); //  1
            //                                               cv::IMREAD_GRAYSCALE  //  0
            //                                               cv::IMREAD_UNCHANGED  // -1
            //      //! Imread flags
            //      enum ImreadModes {
            //             IMREAD_UNCHANGED            = -1,
            //             IMREAD_GRAYSCALE            = 0,
            //             IMREAD_COLOR                = 1,
            //             IMREAD_ANYDEPTH             = 2,
            //             IMREAD_ANYCOLOR             = 4,
            //             IMREAD_LOAD_GDAL            = 8,
            //             IMREAD_REDUCED_GRAYSCALE_2  = 16,
            //             IMREAD_REDUCED_COLOR_2      = 17,
            //             IMREAD_REDUCED_GRAYSCALE_4  = 32,
            //             IMREAD_REDUCED_COLOR_4      = 33,
            //             IMREAD_REDUCED_GRAYSCALE_8  = 64,
            //             IMREAD_REDUCED_COLOR_8      = 65
            //           };

            cv::imshow( "src", imgSrc );
            imgSrc.release();
            ```

    -   cvtColor -<

        :   ```cpp
            cv::cvtColor( src, dst, cv::COLOR_BGR2GRAY );
            ```

            RGB <-> GRAY ( `COLOR_BGR2GRAY`, `COLOR_RGB2GRAY`, `COLOR_GRAY2BGR`, `COLOR_GRAY2RGB` )

            -   $\text{RGB[A] to Gray:} \quad Y  \leftarrow 0.299  \cdot R + 0.587  \cdot G + 0.114  \cdot B$
            -   $\text{Gray to RGB[A]:} \quad R  \leftarrow Y, G  \leftarrow Y, B  \leftarrow Y, A  \leftarrow \max (\text{ChannelRange})$

    -   ROI: region of interest -<

        :   ```cpp
            cvSetImageROI( img, cvRect(x,y,w,h) );
            cvSetImageCOI( img, 0 );

            // both by reference
            cv::Mat roi = img( cv::Rect(x,y,w,h) );
            cv::Mat roi = img( cv::Range(y,y+dy), cv::Range(x,x+dx) );
            ```

    -   cvMahalonobis -<

        :   ```cpp
            CvSize cvMahalonobis( // z-score
                const CvArr* vec1,
                const CvArr* vec2,
                CvArr*       mat
            );
            ```

    -   min, minS, mul, dot... -<

        :   cvNorm, cvMul, cvNot,

            ```cpp
            void cvMin( CvArr *src1, CvArr *src2, CvArr *dst);
            void cvMinS( CvArr *src, double value, CvArr *dst);

            // dst[i] = src1[i] - src2[i]
            void cvSub( const CvArr *src1, const CvArr *src2, CvArr *dst, const CvArr *mask = NULL );
            // dst[i] = src1[i] - value
            void cvSubS( const CvArr *src1, double value, CvArr *dst, const CvArr *mask = NULL );
            // dst[i] = value - src1[i]
            void cvSubRS( const CvArr *src1, double value, CvArr *dst, const CvArr *mask = NULL );

            // A = U * W * Trans(T)
            void cvSVD(
                CvArr *A,
                CvArr *W,
                CvArr *U = NULL,
                CvArr *V = NULL,
                int flags = 0
            );
            ```

    -   XML &  YAML

    -   cvSmooth, border -> virtual pixel

    -   Morphism?

    -   Erode (-)

    -   Dialate (+)

    -   Gradient(src) = dilate(src) - erode(src)

    -   BlackHat(src) = close(src) - src

    -   cvCreateStructuringElementEx ? Ex for what?

    -   flood fill

    -   cvPyrUp, cvPyrDown

    -   cvAdaptiveThreshold

    -   Sobel ($\partial ^2 / \partial x \partial y$)

    -   laplace

    -   canny

    -   hog

    -   cvRemap

    -   affine, prespective

    -   CartToPolar, PolarToCart, LogPolar,

    -   DFT, DCT,

    -   cvIntegral, integral image

    -   cvDistTransform

    -   compare hist,

    -   EMD: Earth Mover's Distance

    -   back projection,

    -   cvMatchTemplate,

    -   cvMemStorageAlloc

    -   cvSeq,

    -   cvFindContours,

    -   freeman chaincode,

    -   cvAppproxPoly, DP: douglas -Peucker

    -   cvFindDominantPoints (IPAN)

    -   cvRect, cvBox2D,

    -   cvContoursMoments,

    -   Hu moments: cvGetHuMoments

    -   cvGetNormalizedCentralMoment,

    -   CvTermCriteria

    -   convex hull

    -   convex defects

    -   freeman chaincodes (FCCs)

    -   pairwise geometrical histogram (PGH): cvCalcPGH

    -   chain code histogram (CCH)

    -   cvInitLineIterator

    -   watershed algorithm,

    -   inpainting

    -   cvPyrSegmentation

    -   mean-shift,

    -   delaunay, voronoi tesselation,

    -   Lucas-Kanade,

    -   cvCalcOpticalFlowPyrLK()

    -   Horn-Schunk, dense/sparse optical flow

    -   corner,

    -   subpixel,

    -   SIFT (scale-invariant feature transform)

    -   block matching,

    -   mean-shift, camshift (continuously adaptive mean-sift)

    -   motion template,

    -   silhouette

    -   estimator, kalman

    -   dynamical motion, control motion, random motion,

    -   projection transform,

    -   camera intrinsics matrix

    -   q = MQ

    -   `cvConvertPointsHomogenious()` -<

        :   径向:

            -   $x_{corrected} = x ( 1 + k_1r^2 + k_2r^24 + k_3r^6 )$
            -   $y_{corrected} = y ( 1 + k_1r^2 + k_2r^24 + k_3r^6 )$

            切向:

            -   $x_corrected = x + [ 2 p_1 y + p_2 ( r^2 + 2 x^2 )]$
            -   $y_corrected = y + [ p_1 ( r^2 + 2 y^2 ) + 2 y_2 x ]$

            k1, k2, p1, p2, k3 (fish-eye camera)

            (R, t)

            -   cvFindChessboardCorners()
            -   cvFindCornersSubPix()

            homograph

            `Q = [ X Y Z I ]^{Trans}`

            ```
            W = [ R t ] = [ rotation tranlation ]
            q\hat{~} = s * M * W * Q\hat{~},
            M = [
            f_x   0   c_x
             0   f_y  c_y
             0    0    1
            ]
            ```

            instrinsic  matrix , distortion-coeffs

            rodrigues,

            POSIT: pose orthography and scaling with iteration

            stero imaging,

            epipole,

            -   本征矩阵,
            -   基础矩阵

    -   no free lunch theorem,

    -   train set size,

    -   cross-validation,

    -   bootstrapping,

    -   ROC

    -   mahalanobis distance,

    -   adaboost,

    -   MLP

    -   feature maps

    -   subsampling

    -   Convolutional Neural Networks  (LeCun et al. 1989)

    -   Image Lab

    -   `32 -> 28? -> kernel[3x3]`

    -   codes -<

        :   这些代码需要细看。

            -   [4ker/opencv-haar-classifier-training: Learn how to train your own OpenCV Haar classifier](https://github.com/4ker/opencv-haar-classifier-training)
            -   [4ker/opencv-code: C++ and Python code extracted from the tutorials at http://opencv-code.com](https://github.com/4ker/opencv-code)
            -   [4ker/code: Code for the book "Mastering OpenCV with Practical Computer Vision Projects" by Packt Publishing 2012.](https://github.com/4ker/code)

            libfacerec is a library for face recognition in OpenCV. It has been
            merged into OpenCV 2.4 (contrib module) and both implementations
            are synchronized. So if you are in (a recent) OpenCV 2.4: There is
            no need to compile libfacerec yourself, you have everything to get
            started. Note: Make sure to work on a recent OpenCV revision, if
            you want to be compatible with the very latest libfacerec version.

            -   [OpenCV, Microsoft Visual Studio and libfacerec](http://www.bytefish.de/blog/opencv_visual_studio_and_libfacerec/)
            -   [4ker/facerec: Implements face recognition algorithms for MATLAB/GNU Octave and Python.](https://github.com/4ker/facerec)

    -   SURF 特征点检测

    -   SURF 特征提取

    -   使用 FLANN 进行特征点匹配

    -   FLANN 结合 SURF 进行关键点的描述和匹配

    -   SIFT 配合暴力匹配进行关键点描述和提取

    -   寻找已知物体

    -   利用 ORB 算法进行关键点的描述与匹配

    -   edge -<

        :   ```cpp
            cv::Mat element = cv::getStructuringElement( cv::MORPH_RECT, cv::Size(15, 15) );
            cv::dilate(         imgSrc, imgDilate, element );
            cv::erode(          imgSrc, imgEroded, element );
            cv::blur(           imgSrc, imgBlurred, cv::Size(7, 7) );
            cv::Canny(          imgSrc, imgEdge, 3, 9, 3 );
            cv::boxFilter(      imgSrc, imgBox, -1, cv::Size(5, 5) );
            cv::medianBlur(     imgSrc, imgMedian, 7 );
            //                     src      dst  sigmaColor sigmaSpace borderType
            cv::bilateralFilter( imgSrc, imgBilateral, 25, 25*2, 25/2 );

            cv::morphologyEx( imgSrc, imgMorphDilate,    cv::MORPH_DILATE,    element );
            cv::morphologyEx( imgSrc, imgMorphErode,     cv::MORPH_ERODE,     element );
            cv::morphologyEx( imgSrc, imgMorphOpen,      cv::MORPH_OPEN,      element );
            cv::morphologyEx( imgSrc, imgMorphClose,     cv::MORPH_CLOSE,     element );
            cv::morphologyEx( imgSrc, imgMorphGradient,  cv::MORPH_GRADIENT,  element );
            cv::morphologyEx( imgSrc, imgMorphTophat,    cv::MORPH_TOPHAT,    element );
            cv::morphologyEx( imgSrc, imgMorphBlackhat,  cv::MORPH_BLACKHAT,  element );
            ```

    -   resize -<

        :   ```cpp
            cv::resize( imgSrc, imgResize,
                        cv::Size(imgSrc.rows/2,imgSrc.cols/2),
                        0.0, 0.0,
                        cv::INTER_AREA );               // interpolation method
            cv::pyrUp( imgSrc, imgPyrUp,
                       cv::Size(imgSrc.rows*2,imgSrc.cols*2) );
                       // cv::BORDER_REPLICATE );       // border type, assert failed!
            cv::pyrDown( imgSrc, imgPyrDown,
                       cv::Size(imgSrc.rows/2,imgSrc.cols/2) );
            ```

    -   threshold -<

        :   ```cpp
            cv::threshold( imgGray, imgThreshold, 128, 255, cv::THRESH_BINARY );
            //      enum ThresholdTypes {
            //          THRESH_BINARY     = 0,
            //          THRESH_BINARY_INV = 1,
            //          THRESH_TRUNC      = 2,
            //          THRESH_TOZERO     = 3,
            //          THRESH_TOZERO_INV = 4,
            //          THRESH_MASK       = 7,
            //          THRESH_OTSU       = 8,
            //          THRESH_TRIANGLE   = 16
            //      };
            ```

    -   floodFill -<

        :   ```cpp
            cv::floodFill( imgFloodFill,                // input&output
                           cv::Point(345,234),          // seed point
                           cv::Scalar(155, 255,55),     // new value
                           &ccomp,                      //
                           cv::Scalar(20, 20, 20),      // lo diff
                           cv::Scalar(20, 20, 20) );    // up diff
            ```

    -   sobel, laplace, scharr, etc -<

        :   ```cpp
            cv::Sobel( imgGray, imgSobelX, // src -> dst
                       CV_16S,             // ddepth
                       1, 0, 3,            // dx, dy, ksize
                       1, 1,               // scale, delta
                       cv::BORDER_DEFAULT );
            cv::Sobel( imgGray, imgSobelY, // src -> dst
                       CV_16S,             // ddepth
                       0, 1, 3,            // dx, dy, ksize
                       1, 1,               // scale, delta
                       cv::BORDER_DEFAULT );
            cv::convertScaleAbs( imgSobelX, imgSobelAbsX );
            cv::convertScaleAbs( imgSobelY, imgSobelAbsY );
            cv::addWeighted( imgSobelAbsX, 0.5, imgSobelAbsY, 0.5, 0, imgSobel );
            ```

            ```cpp
            cv::Rect rectangle;
            cv::cvtColor( imgSrc, imgSrc, cv::COLOR_BGR2GRAY );
            cv::Laplacian( imgSrc, imgLaplace, CV_16S, 3, 1, 0, cv::BORDER_DEFAULT );
            cv::convertScaleAbs( imgLaplace, imgLaplace );

            // scharr
            cv::Scharr( imgSrc, imgGradX, CV_16S, 1, 0, 1, 0, cv::BORDER_DEFAULT );
            cv::Scharr( imgSrc, imgGradY, CV_16S, 0, 1, 1, 0, cv::BORDER_DEFAULT );
            cv::convertScaleAbs( imgGradX, imgGradX );
            cv::convertScaleAbs( imgGradY, imgGradY );
            cv::addWeighted( imgGradX, 0.5, imgGradY, 0.5, 0, imgScharr );
            ```

    -   hough line -<

        :   ```cpp
            // hough line
            std::vector<cv::Vec2f> lines;
            cv::Canny( imgIceKing, imgCanny, 50, 200, 3 );
            cv::HoughLines( imgCanny, lines, 1, CV_PI/180, 150, 0, 0 );

            cv::cvtColor( imgIceKing, imgGaussBlur, cv::COLOR_BGR2GRAY );
            //  src, dst, ksize, sigmaX, sigmaY, borderType = BORDER_DEFAULT
            cv::GaussianBlur( imgGaussBlur, imgGaussBlur, cv::Size(9, 9), 2, 2 );
            std::vector<cv::Vec3f> circles; // [0]->cx, [1]->cy, [2]->radius
            cv::HoughCircles( imgGaussBlur, circles,
                              cv::HOUGH_GRADIENT, 1.5, 10, 200, 100, 0, 0 );

            cv::remap( imgSrc, imgRemap1, imgMap1X, imgMap1Y,
                       cv::INTER_LINEAR, cv::BORDER_CONSTANT, cv::Scalar(0,0,0) );

            cv::Mat rotMat( 2, 3, CV_32FC1 );
            rotMat = cv::getRotationMatrix2D( center, angle, scale );

            cv::Mat matWarp( 2, 3, CV_32FC1 );
            srcTriangle[0] = cv::Point2f( 0,0 );
            srcTriangle[1] = cv::Point2f( static_cast<float>(imgSrc.cols - 1), 0 );
            srcTriangle[2] = cv::Point2f( 0, static_cast<float>(imgSrc.rows - 1 ));
            dstTriangle[0] = cv::Point2f( static_cast<float>(imgSrc.cols*0.0), static_cast<float>(imgSrc.rows*0.33));
            dstTriangle[1] = cv::Point2f( static_cast<float>(imgSrc.cols*0.65), static_cast<float>(imgSrc.rows*0.35));
            dstTriangle[2] = cv::Point2f( static_cast<float>(imgSrc.cols*0.15), static_cast<float>(imgSrc.rows*0.6));
            matWarp = cv::getAffineTransform( srcTriangle, dstTriangle );

            cv::Mat imgDstWarp = cv::Mat::zeros( imgSrc.rows, imgSrc.cols, imgSrc.type() );
            cv::warpAffine( imgSrc, imgDstWarp, matWarp, imgDstWarp.size() );

            cv::equalizeHist( imgGray, imgDst );

            std::vector<std::vector<cv::Point> > contours;
            std::vector<cv::Vec4i> hierarchy;
            cv::findContours( imgMask, contours, hierarchy,
                              cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE );

            cv::RNG rng(12345);
            cv::RNG &rng = cv::theRNG();
            rng.uniform(image.cols/4, image.cols*3/4);

            std::vector<int> hull;
            cv::Mat matPoints(points); // cols: 1
            cv::convexHull( matPoints, hull, true);

            cv::createTrackbar( "threshold", WINDOW_NAME1, &g_nThresh, g_maxThresh, on_ThreshChange );
            on_ThreshChange( 0, 0 ); // init

            cv::VideoCapture capture( VIDEO_INPUT_SRC );
            while( 1 ) {
                cv::Mat frame;
                capture >> frame;
                cv::imshow( "frame from file stream", frame );
                cv::waitKey( 30 );
            }

            cv::TermCriteria termcrit(cv::TermCriteria::MAX_ITER|cv::TermCriteria::EPS, 20, 0.03);
            // opencv2:                         CV_TERMCRIT_ITER,      CV_TERMCRIT_EPS

            cv::goodFeaturesToTrack(gray, points[1], MAX_COUNT, 0.01, 10, cv::Mat(), 3, 0, 0.04);
            cv::cornerSubPix(gray, points[1], subPixWinSize, cv::Size(-1,-1), termcrit);

            cv::calcOpticalFlowPyrLK( prevGray, gray, points[0], points[1],
                                      status, err, winSize, 3, termcrit, 0, 0.001);

            // set up SVM parameters
            cv::Ptr<cv::ml::SVM> svm = cv::ml::SVM::create();
            svm->setType(cv::ml::SVM::C_SVC);   // c-support vector classification
            svm->setKernel(cv::ml::SVM::LINEAR);
            svm->setGamma(3);
            svm->setTermCriteria( cv::TermCriteria(cv::TermCriteria::MAX_ITER, 100, 1e-6) );
            //           samples              layout        response
            svm->train( trainingDataMat, cv::ml::ROW_SAMPLE, labelsMat );
            cv::Vec3b green(0,255,0), blue (255,0,0);
            // show the decision regions given by the SVM
            for (int i = 0; i < image.rows; ++i) {
                for (int j = 0; j < image.cols; ++j) {
                    cv::Mat sampleMat = (cv::Mat_<float>(1, 2) << j, i);
                    float response = svm->predict(sampleMat); // position as feature
                    if ( response > 0 ) {
                        image.at<cv::Vec3b>(i, j) = green;
                    } else {
                        image.at<cv::Vec3b>(i, j) = blue;
                    }
                }
                // Show the training data
                cv::Mat sv = svm->getSupportVectors();
                for (int i = 0; i < sv.rows; ++i) {
                    const float* v = sv.ptr<float>(i);
                    cv::circle(image, cv::Point((int)v[0], (int)v[1]), 6, cv::Scalar(128, 128, 128), thickness, lineType);
                }
                cv::imshow("SVM Simple Example", image);
                cv::waitKey(0);
            }
            // imgROI = imgDota( cv::Rect(x,y,imgDotaLogo.cols,imgDotaLogo.rows) ); // VS not able to rename this
            //                        (row_begin, row_end), (col_begin, col_end)
            imgROI = imgDota( cv::Range(y,y+imgDotaLogo.rows), cv::Range(x,x+imgDotaLogo.cols) );
            cv::setMouseCallback( WINDOW_NAME, on_MouseHandle, (void*)&srcImage );

            cv::Mat imgGray = cv::imread(IMAGE_INPUT_SRC, cv::IMREAD_GRAYSCALE);
            int m = cv::getOptimalDFTSize( imgGray.rows );
            int n = cv::getOptimalDFTSize( imgGray.cols );
            cv::Mat padded;
            //              src dst top bottom left right borderType, scalar
            cv::copyMakeBorder( imgGray, padded,
                                0, m - imgGray.rows, 0, n - imgGray.cols,
                                cv::BORDER_CONSTANT, cv::Scalar::all(0) );
            cv::Mat planes[] = {
                cv::Mat_<float>(padded),
                cv::Mat::zeros(padded.size(), CV_32F)
            } ;
            cv::Mat complexI;
            cv::merge(planes, 2, complexI);
            // log(1 + sqrt(Re(DFT(I))^2 + Im(DFT(I))^2))
            cv::dft(complexI, complexI);
            // planes[0] = Re(DFT(I), planes[1] = Im(DFT(I))
            cv::split(complexI, planes);
            //              src1       src2     magnitude
            cv::magnitude(planes[0], planes[1], planes[0]);
            cv::Mat magnitudeImage = planes[0];
            magnitudeImage += cv::Scalar::all(1);
            //          src             dst
            cv::log(magnitudeImage, magnitudeImage);
            // clipping
            magnitudeImage = magnitudeImage(
                cv::Rect(0, 0, magnitudeImage.cols & -2, magnitudeImage.rows & -2)
            );
            // -2: 11111111111111111110
            // recentering
            int cx = magnitudeImage.cols/2;
            int cy = magnitudeImage.rows/2;
            cv::Mat q0(magnitudeImage, cv::Rect(0, 0, cx, cy));   // top left
            cv::Mat q1(magnitudeImage, cv::Rect(cx, 0, cx, cy));  // top right
            cv::Mat q2(magnitudeImage, cv::Rect(0, cy, cx, cy));  // bottom left
            cv::Mat q3(magnitudeImage, cv::Rect(cx, cy, cx, cy)); // bottom right
            // cv::Mat tmp; q0.copyTo(tmp); q3.copyTo(q0); tmp.copyTo(q3);
            cv::swap(q0, q3);
            cv::swap(q1, q2);
            cv::normalize(magnitudeImage, magnitudeImage, 0, 1, cv::NORM_MINMAX );

            cv::FileStorage fs( DATA_DIR "/test.yaml", cv::FileStorage::WRITE );
            fs << "frameCount" << 5;
            cv::Mat cameraMatrix = (cv::Mat_<double>(3,3) << 1000, 0, 320, 0, 1000, 240, 0, 0, 1);
            fs << "cameraMatrix" << cameraMatrix << "distCoeffs" << distCoeffs;
            fs << "features" << "[";
            for( int i = 0; i < 3; i++ ) {
                int x = rand() % 640;
                int y = rand() % 480;
                uchar lbp = rand() % 256; // local binary pattern?
                fs << "{:" << "x" << x << "y" << y << "lbp" << "[:";
                for (int j = 0; j < 8; j++) {
                    fs << ((lbp >> j) & 1);
                }
                fs << "]" << "}";
            }
            fs << "]";
            fs.release();
            //          %YAML:1.0
            //          frameCount: 5
            //          calibrationDate: "Wed May 18 00:37:57 2016\n"
            //          cameraMatrix: !!opencv-matrix
            //             rows: 3
            //             cols: 3
            //             dt: d
            //             data: [ 1000., 0., 320., 0., 1000., 240., 0., 0., 1. ]
            //          distCoeffs: !!opencv-matrix
            //             rows: 5
            //             cols: 1
            //             dt: d
            //             data: [ 1.0000000000000001e-01, 1.0000000000000000e-02,
            //                 -1.0000000000000000e-03, 0., 0. ]
            //          features:
            //             - { x:41, y:227, lbp:[ 0, 1, 1, 1, 1, 1, 0, 1 ] }
            //             - { x:260, y:449, lbp:[ 0, 0, 1, 1, 0, 1, 1, 0 ] }
            //             - { x:598, y:78, lbp:[ 0, 1, 0, 0, 1, 0, 1, 0 ] }

            cv::FileStorage fs2( DATA_DIR "/test.yaml", cv::FileStorage::READ );
            // method 1: node retreve
            int frameCount = (int)fs2["frameCount"];
            // method 2: stream out
            std::string date;
            fs2["calibrationDate"] >> date;
            cv::Mat cameraMatrix2, distCoeffs2;
            fs2["cameraMatrix"] >> cameraMatrix2;
            fs2["distCoeffs"] >> distCoeffs2;
            cv::FileNode features = fs2["features"];

            cv::FileNodeIterator it = features.begin(), it_end = features.end();
            for( ; it != it_end; ++it, idx++ ) {
                std::cout << "x=" << (int)(*it)["x"] << ", y=" << (int)(*it)["y"] << ", lbp: (";
                (*it)["lbp"] >> lbpval;
                for (int i = 0; i < (int)lbpval.size(); i++) {
                    std::cout << " " << (int)lbpval[i];
                }
            }
            fs2.release();

            cv::minEnclosingCircle(cv::Mat(points), center, radius);
            cv::circle(image, center, cvRound(radius), cv::Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)), 2, cv::LINE_AA);

            cv::inpaint(srcImage1, inpaintMask, inpaintedImage, 3, cv::INPAINT_TELEA);

            cv::cvtColor(srcImage, hsvImage, cv::COLOR_BGR2HSV);
            int hueBinNum = 30;
            int saturationBinNum = 32;
            int histSize[] = { hueBinNum, saturationBinNum };
            float hueRanges[] = { 0, 180 };
            float saturationRanges[] = { 0, 256 };
            const float* ranges[] = { hueRanges, saturationRanges };
            cv::MatND dstHist;
            int channels[] = {0, 1};
            cv::calcHist( &hsvImage, //  arr
                          1,         // #arr
                          channels, cv::Mat(),
                          dstHist, 2, histSize,
                          ranges, true, false );
            double maxValue=0;
            cv::minMaxLoc( dstHist, 0, &maxValue, 0, 0);
            int scale = 10;
            cv::Mat histImg = cv::Mat::zeros(saturationBinNum*scale, hueBinNum*10, CV_8UC3);

            cv::normalize( testHist2, testHist2, 0, 1, cv::NORM_MINMAX, -1, cv::Mat() );
            //  CV_COMP_CORREL Correlation
            //  CV_COMP_CHISQR Chi-Square
            //  CV_COMP_CHISQR_ALT Alternative Chi-Square
            //  CV_COMP_INTERSECT Intersection
            //
            cv::cornerHarris(srcImage, cornerStrength, 2, 3, 0.01);
            cv::Mat harrisCorner; // 8 bits or 16 bits float
            //              src         dst          threshold maxval   binary: {0, maval}
            cv::threshold( cornerStrength, harrisCorner, 0.00001, 255, cv::THRESH_BINARY );

            cv::calcOpticalFlowPyrLK(gray_prev, gray, points[0], points[1], status, err);

            std::swap(gray_prev, gray);

            cv::imshow(window_name, output);
            cv::ellipse( img,
                cv::Point( WINDOW_WIDTH/2, WINDOW_WIDTH/2 ),
                cv::Size( WINDOW_WIDTH/4, WINDOW_WIDTH/16 ),
                angle, 0, 360,
                cv::Scalar( 255, 129, 0 ),
                thickness, lineType );
            cv::fillPoly( img, ppt, npt, 1, cv::Scalar( 255, 255, 255 ), lineType );
            cv::line( img, start, end, cv::Scalar( 0, 0, 0 ), thickness, lineType );

            int row = imgDst.rows;
            int widthStep = imgDst.cols*imgDst.channels();
            for( int i = 0;i < row;i++ ) {
                // uchar, opencv2/core/hal/interface.h
                // mat.ptr<type>(i), return ith row header
                uchar *data = imgDst.ptr<uchar>(i);
                for(int j = 0;j < widthStep;j++) {
                    // descretize!
                    data[j] = data[j]/div*div + div/2;
                }
            }

            cv::Mat_<cv::Vec3b>::iterator it = imgDst.begin<cv::Vec3b>();
            cv::Mat_<cv::Vec3b>::iterator itend = imgDst.end<cv::Vec3b>();
            for( ;it != itend;++it ) {
                (*it)[0] = (*it)[0]/div*div + div/2;
                (*it)[1] = (*it)[1]/div*div + div/2;
                (*it)[2] = (*it)[2]/div*div + div/2;
            }

            int r = imgDst.rows;
            int c = imgDst.cols;
            for(int i = 0;i < r;i++) {
                for(int j = 0;j < c;j++) {
                    imgDst.at<cv::Vec3b>(i,j)[0] = imgDst.at<cv::Vec3b>(i,j)[0]/div*div + div/2;
                    imgDst.at<cv::Vec3b>(i,j)[1] = imgDst.at<cv::Vec3b>(i,j)[1]/div*div + div/2;
                    imgDst.at<cv::Vec3b>(i,j)[2] = imgDst.at<cv::Vec3b>(i,j)[2]/div*div + div/2;
                }
            }

            int r = imgDst.rows;
            int n = imgDst.cols*imgDst.channels();
            int step = imgDst.step;
            uchar *data = imgDst.data;
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < n; j++) {
                    *(data + j) = *(data+j) - *(data+j)%div + div/2;
                }
                data += step;
            }
            cv::saturate_cast<uchar>( (g_nContrastValue*0.01)*(g_srcImage.at<cv::Vec3b>(y, x)[c]) + g_nBrightValue );
            cv::drawContours( drawing, g_vContours, i, color, 2, 8,
                              g_vHierarchy, 0, cv::Point() );
            cv::normalize( hist, hist, 0, 255, cv::NORM_MINMAX, -1, cv::Mat() );
            cv::calcBackProject( &g_hueImage, 1, 0, hist, backproj, &ranges, 1, true );
            cv::matchTemplate( g_srcImage, g_templateImage, g_resultImage, g_nMatchMethod );
            cv::normalize( g_resultImage, g_resultImage, 0, 1, cv::NORM_MINMAX, -1, cv::Mat() );
            cv::minMaxLoc( g_resultImage,
                           &minValue, &maxValue,
                           &minLocation, &maxLocation, cv::Mat() );
            cv::cornerHarris( g_grayImage, dstImage, 2, 3, 0.04, cv::BORDER_DEFAULT );
            cv::normalize( dstImage, normImage, 0, 255, cv::NORM_MINMAX, CV_32FC1, cv::Mat() );
            cv::convertScaleAbs( normImage, scaledImage );

            cv::goodFeaturesToTrack( g_grayImage, corners,
                                     g_maxCornerNumber, qualityLevel, minDistance,
                                     cv::Mat(), blockSize, false, k );
            ```

            ```cpp
            cv::CommandLineParser parser(argc, argv, "{help h||}");
            if (!parser.has("help")) {
                help();
                return 0;
            }

            string input_image = parser.get<string>("@input");
            if (input_image.empty()) {
                parser.printMessage();
                parser.printErrors();
                return 0;
            }

            vector<vector<Point> > contours0;
            cv::findContours( img, contours0, hierarchy, cv::RETR_TREE, cv:CHAIN_APPROX_SIMPLE);
            contours.resize(contours0.size());
            for( size_t k = 0; k < contours0.size(); k++ ) {
                approxPolyDP(Mat(contours0[k]), contours[k], 3, true);
            }

            // print
            cout << "r (default) = \n" << r << ";" << endl << endl;
            cout << "r (matlab) = \n" << format(r, Formatter::FMT_MATLAB) << ";" << endl << endl;
            cout << "r (python) = \n" << format(r, Formatter::FMT_PYTHON) << ";" << endl << endl;
            cout << "r (numpy) = \n" << format(r, Formatter::FMT_NUMPY) << ";" << endl << endl;
            cout << "r (csv) = \n" << format(r, Formatter::FMT_CSV) << ";" << endl << endl;
            cout << "r (c) = \n" << format(r, Formatter::FMT_C) << ";" << endl << endl;

            if (event == EVENT_LBUTTONDOWN && !drag) {
                // blah blah...
            }

            polylines( img1, pts3, &numpts,1, 1, Scalar(0,0,0), 2, 8, 0);
            fillPoly(res1, pts4,&numpts, 1, Scalar(255, 255, 255), 8, 0);
            bitwise_and(img0, img0, final,res1);

            static Scalar randomColor(RNG& rng)
            {
                int icolor = (unsigned)rng;
                return Scalar(icolor&255, (icolor>>8)&255, (icolor>>16)&255);
            }

            // Run the edge detector on grayscale
            blur(gray, edge, Size(3,3));
            Canny(edge, edge, edgeThresh, edgeThresh*3, 3);
            cedge = Scalar::all(0);
            image.copyTo(cedge, edge); // output, mask
            imshow("Edge map", cedge);

            //      //! type of line
            //      enum LineTypes {
            //          FILLED  = -1,
            //          LINE_4  = 4, //!< 4-connected line
            //          LINE_8  = 8, //!< 8-connected line
            //          LINE_AA = 16 //!< antialiased line
            //      };

            Point pt[2][3];
            pt[0][0].x = rng.uniform(x1, x2);
            pt[0][0].y = rng.uniform(y1, y2);
            pt[0][1].x = rng.uniform(x1, x2);
            pt[0][1].y = rng.uniform(y1, y2);
            pt[0][2].x = rng.uniform(x1, x2);
            pt[0][2].y = rng.uniform(y1, y2);
            pt[1][0].x = rng.uniform(x1, x2);
            pt[1][0].y = rng.uniform(y1, y2);
            pt[1][1].x = rng.uniform(x1, x2);
            pt[1][1].y = rng.uniform(y1, y2);
            pt[1][2].x = rng.uniform(x1, x2);
            pt[1][2].y = rng.uniform(y1, y2);
            const Point* ppt[2] = {pt[0], pt[1]};
            int npt[] = {3, 3};

            polylines(image, ppt, npt, 2, true, randomColor(rng), rng.uniform(1,10), lineType);
            // fillPoly(image, ppt, npt, 2, randomColor(rng), lineType);

            //      CV_EXPORTS_W void putText( InputOutputArray img, const String& text, Point org,
            //                                 int fontFace, double fontScale, Scalar color,
            //                                 int thickness = 1, int lineType = LINE_8,
            //                                 bool bottomLeftOrigin = false );

            Size textsize = cv::getTextSize("OpenCV forever!", cv::FONT_HERSHEY_COMPLEX, 3, 5, 0);
            cv::Point org((width - textsize.width)/2, (height - textsize.height)/2);

            Mat image2;
            for( i = 0; i < 255; i += 2 ) {
                image2 = image - Scalar::all(i);
                putText(image2, "OpenCV forever!", org, FONT_HERSHEY_COMPLEX, 3,
                        Scalar(i, i, 255), 5, lineType);

                imshow(wndname, image2);
                if(waitKey(DELAY) >= 0)
                    return 0;
            }


            #ifdef _EiC
            main(1,"drawing.c");
            #endif

            image=(image&cv::Scalar(mask,mask,mask))+cv::Scalar(div/2,div/2,div/2);

                CvScalar avgChannels = cvAvg(img);
                double avgB=avgChannels.val[0];
                double avgG=avgChannels.val[1];
                double avgR=avgChannels.val[2];
            ```

Blogs -<

:   [【OpenCV】图像几何变换：旋转，缩放，斜切 - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/7616044) -<

    :   别人总结出来的东西能帮助我们在一开始迅速入门，但要学深，学精，终归还是要自己去努力挖的。

        这篇是以前写的，其实还是建议大家用 C++ 接口的 OpenCV，内存问题很少了~

        ```cpp
        void cvWarpAffine(
            const CvArr* src,//输入图像
            CvArr* dst, //输出图像
            const CvMat* map_matrix,   //2*3的变换矩阵
            int flags=CV_INTER_LINEAR+CV_WARP_FILL_OUTLIERS,   //插值方法的组合
            CvScalar fillval=cvScalarAll(0)   //用来填充边界外的值
        );

        void cvGetQuadrangleSubPix(
               const CvArr* src,  //输入图像
               CvArr* dst,   // 提取的四边形
               const CvMat* map_matrix //2*3的变换矩阵
        );
        ```

        ```cpp
        //逆时针旋转图像degree角度（原尺寸）
        void rotateImage(IplImage* img, IplImage *img_rotate,int degree)
        {
            //旋转中心为图像中心
            CvPoint2D32f center;
            center.x=float (img->width/2.0+0.5);
            center.y=float (img->height/2.0+0.5);
            //计算二维旋转的仿射变换矩阵
            float m[6];
            CvMat M = cvMat( 2, 3, CV_32F, m );
            cv2DRotationMatrix( center, degree,1, &M);
            //变换图像，并用黑色填充其余值
            cvWarpAffine(img,img_rotate, &M,CV_INTER_LINEAR+CV_WARP_FILL_OUTLIERS,cvScalarAll(0) );
        }
        ```

    [【OpenCV】SIFT原理与源码分析：DoG尺度空间构造 - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/8067881) -<

    :   ![](http://img.my.csdn.net/uploads/201210/13/1350133046_8371.png)

        DoG（Difference of Gaussian）

        高斯拉普拉斯 LoG 金字塔结合尺度空间表达和金字塔多分辨率表达，就是在使用尺度空间
        时使用金字塔表示，也就是计算机视觉中最有名的拉普拉斯金子塔（《The Laplacian
        pyramid as a compact image code》）。高斯拉普拉斯 LoG（Laplace of Guassian）算
        子就是对高斯函数进行拉普拉斯变换：

        核心思想还是高斯，这个不多叙述。

        refs and see also

        -   [【OpenCV】访问Mat中每个像素的值（新） - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/19839019)
        -   [【图像处理】透视变换 Perspective Transformation - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/26471527)
        -   [【OpenCV】透视变换 Perspective Transformation（续） - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/26478135)
        除了 getPerspectiveTransform() 函数，OpenCV 还提供了 findHomography() 的函数，
        不是用点来找，而是直接用透视平面来找变换公式。这个函数在特征匹配的经典例子中有
        用到，也非常直观.

    [【数据降维】数据降维方法分类 - 小魏的修行路 - 博客频道 - CSDN.NET](http://blog.csdn.net/xiaowei_cqu/article/details/7522368) -<

    :   因为很多并没有仔细了解，在此次只对八种方法做分类：主成分分析（Principal
        Component Analysis,PCA)、线性判别分析（Linear Discriminant Analysis,LDA）、
        等距映射（Isomap）、局部线性嵌入（Locally Linear Embedding,LLE）、Laplacian
        特征映射（Laplacian Eigenmaps）、局部保留投影（Local Preserving
        Projection,LPP）、局部切空间排列（Local Tangent Space Alignment,LTSA）、最
        大方差展开（ Maximum Variance Unfolding, MVU）

MISC -<

:   ```cpp
    cvtColor(mat,rgb,CV_BGR2RGB);
    QApplication::keyboardModifiers()==Qt::ShiftModifier
    QApplication::keyboardModifiers()==Qt::ControlModifier

    enum Qt::KeyboardModifier
    flags Qt::KeyboardModifiers
    This enum describes the modifier keys.
    Constant    Value   Description
    Qt::NoModifier  0x00000000  No modifier key is pressed.
    Qt::ShiftModifier   0x02000000  A Shift key on the keyboard is pressed.
    Qt::ControlModifier 0x04000000  A Ctrl key on the keyboard is pressed.
    Qt::AltModifier 0x08000000  An Alt key on the keyboard is pressed.
    Qt::MetaModifier    0x10000000  A Meta key on the keyboard is pressed.
    Qt::KeypadModifier  0x20000000  A keypad button is pressed.
    Qt::GroupSwitchModifier 0x40000000  X11 only. A Mode_switch key on the keyboard is pressed.
    event->button()==Qt::MiddleButton
    ```
