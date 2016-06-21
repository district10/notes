---
title: MISC
...

# Pretty diff

在看 caffe 的官方例子，03-fine-tuning.ipynb 是个很赞的例子，
但是那个

`!diff models/bvlc_reference_caffenet/train_val.prototxt models/finetune_flickr_style/train_val.prototxt`{.python} -<

:   ```diff
    1c1
    < name: "CaffeNet"
    ---
    > name: "FlickrStyleCaffeNet"
    4c4
    <   type: "Data"
    ---
    >   type: "ImageData"
    15,26c15,19
    < # mean pixel / channel-wise mean instead of mean image
    < #  transform_param {
    < #    crop_size: 227
    < #    mean_value: 104
    < #    mean_value: 117
    < #    mean_value: 123
    < #    mirror: true
    < #  }
    <   data_param {
    <     source: "examples/imagenet/ilsvrc12_train_lmdb"
    <     batch_size: 256
    <     backend: LMDB
    ---
    >   image_data_param {
    >     source: "data/flickr_style/train.txt"
    >     batch_size: 50
    >     new_height: 256
    >     new_width: 256
    31c24
    <   type: "Data"
    ---
    >   type: "ImageData"
    42,51c35,36
    < # mean pixel / channel-wise mean instead of mean image
    < #  transform_param {
    < #    crop_size: 227
    < #    mean_value: 104
    < #    mean_value: 117
    < #    mean_value: 123
    < #    mirror: false
    < #  }
    <   data_param {
    <     source: "examples/imagenet/ilsvrc12_val_lmdb"
    ---
    >   image_data_param {
    >     source: "data/flickr_style/test.txt"
    53c38,39
    <     backend: LMDB
    ---
    >     new_height: 256
    >     new_width: 256
    323a310
    >   # Note that lr_mult can be set to 0 to disable any fine-tuning of this, and any other, layer
    360c347
    <   name: "fc8"
    ---
    >   name: "fc8_flickr"
    363c350,351
    <   top: "fc8"
    ---
    >   top: "fc8_flickr"
    >   # lr_mult is set to higher than for other layers, because this layer is starting from random while the others are already trained
    365c353
    <     lr_mult: 1
    ---
    >     lr_mult: 10
    369c357
    <     lr_mult: 2
    ---
    >     lr_mult: 20
    373c361
    <     num_output: 1000
    ---
    >     num_output: 20
    387c375
    <   bottom: "fc8"
    ---
    >   bottom: "fc8_flickr"
    397c385
    <   bottom: "fc8"
    ---
    >   bottom: "fc8_flickr"
    ```

---

<div class="tabNav" target="tab1">
-   [bvlc](#tab1){title=models/bvlc_reference_caffenet/train_val.prototxt}
-   [tune flickr](#tab2){title=models/finetune_flickr_style/train_val.prototxt}
-   [pretty diff](#tab3)
</div>

<div class="tabs">
<div id="tab1">

```
@include <-=include/train_val_bvlc.prototxt=
```

</div>
<div id="tab2">

```
@include <-=include/train_val_flickr.prototxt=
```

</div>
<div id="tab3">

@include <-=include/diff_bvlc_flickr.diff=

</div>
</div>
