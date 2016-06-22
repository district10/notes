# Caffe Commons

-   misc code -<

    :   ```cpp
        // Convert macro to string
        #define STRINGIFY(m) #m
        #define AS_STRING(m) STRINGIFY(m)
        ```

-   commons, `D:\tzx\git\caffe-rc3\src\caffe\common.cpp` -<

    :   ```cpp
        class caffe {

          ...

          static Caffe& Get(); //   Thread local context for Caffe.
          enum Brew { CPU, GPU };
          inline static Brew mode() { return Get().mode_; }

          ...

          // This random number generator facade hides boost and CUDA rng
          // implementation from one another (for cross-platform compatibility).
          class RNG {
           public:
            RNG();
            explicit RNG(unsigned int seed);
            explicit RNG(const RNG&);
            RNG& operator=(const RNG&);
            void* generator();
           private:
            class Generator;
            shared_ptr<Generator> generator_;
          };

          ...

          // Prints the current GPU status.
          static void DeviceQuery();
          // Parallel training info
          inline static int solver_count() { return Get().solver_count_; }
          inline static void set_solver_count(int val) { Get().solver_count_ = val; }
          inline static bool root_solver() { return Get().root_solver_; }
          inline static void set_root_solver(bool val) { Get().root_solver_ = val; }

         protected:
        #ifndef CPU_ONLY
          cublasHandle_t cublas_handle_;
          curandGenerator_t curand_generator_;
        #endif
          shared_ptr<RNG> random_generator_;

          Brew mode_;
          int solver_count_;
          bool root_solver_;

         private:
          // The private constructor to avoid duplicate instantiation.
          Caffe();

          DISABLE_COPY_AND_ASSIGN(Caffe);
        };
        ```
