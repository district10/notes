定义 -<

:   ```
    // Specifies the shape (dimensions) of a Blob.
    //      [n, k, h, w], etc
    message BlobShape {
      repeated int64 dim = 1 [packed = true];
    }
    ```
