# Caffe Utils

-   math_functions.cpp, `D:\tzx\git\caffe-rc3\src\caffe\util\math_functions.cpp` -<

    :   todo

-   io.cpp, `D:\tzx\git\caffe-rc3\src\caffe\util\io.cpp` -<

    :   ```cpp
        bool ReadProtoFromTextFile(const char* filename, Message* proto) {
          int fd = open(filename, O_RDONLY);
          CHECK_NE(fd, -1) << "File not found: " << filename;
          FileInputStream* input = new FileInputStream(fd);
          bool success = google::protobuf::TextFormat::Parse(input, proto);
          delete input;
          close(fd);
          return success;
        }
        ```

        ```cpp
        #ifdef USE_OPENCV
        cv::Mat ReadImageToCVMat(const string& filename,
            const int height, const int width, const bool is_color) {
          cv::Mat cv_img;
          int cv_read_flag = (is_color ? CV_LOAD_IMAGE_COLOR :
            CV_LOAD_IMAGE_GRAYSCALE);
          cv::Mat cv_img_origin = cv::imread(filename, cv_read_flag);
          if (!cv_img_origin.data) {
            LOG(ERROR) << "Could not open or find file " << filename;
            return cv_img_origin;
          }
          if (height > 0 && width > 0) {
            cv::resize(cv_img_origin, cv_img, cv::Size(width, height));
          } else {
            cv_img = cv_img_origin;
          }
          return cv_img;
        }
        ```

        ```cpp
        // Do the file extension and encoding match?
        static bool matchExt(const std::string & fn,
                             std::string en) {
          size_t p = fn.rfind('.');
          std::string ext = p != fn.npos ? fn.substr(p) : fn;
          std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
          std::transform(en.begin(), en.end(), en.begin(), ::tolower);
          if ( ext == en )
            return true;
          if ( en == "jpg" && ext == "jpeg" )
            return true;
          return false;
        }
        ```

        ```cpp
        bool ReadImageToDatum(const string& filename, const int label,
            const int height, const int width, const bool is_color,
            const std::string & encoding, Datum* datum) {
          cv::Mat cv_img = ReadImageToCVMat(filename, height, width, is_color);
          if (cv_img.data) {
            if (encoding.size()) {
              if ( (cv_img.channels() == 3) == is_color && !height && !width &&
                  matchExt(filename, encoding) )
                return ReadFileToDatum(filename, label, datum);
              std::vector<uchar> buf;
              cv::imencode("."+encoding, cv_img, buf);
              datum->set_data(std::string(reinterpret_cast<char*>(&buf[0]),
                              buf.size()));
              datum->set_label(label);
              datum->set_encoded(true);
              return true;
            }
            CVMatToDatum(cv_img, datum);
            datum->set_label(label);
            return true;
          } else {
            return false;
          }
        }
        ```

        ```cpp
        bool ReadFileToDatum(const string& filename, const int label,
            Datum* datum) {
          std::streampos size;

          fstream file(filename.c_str(), ios::in|ios::binary|ios::ate);
          if (file.is_open()) {
            size = file.tellg();
            std::string buffer(size, ' ');
            file.seekg(0, ios::beg);
            file.read(&buffer[0], size);
            file.close();
            datum->set_data(buffer);
            datum->set_label(label);
            datum->set_encoded(true);
            return true;
          } else {
            return false;
          }
        }
        ```
