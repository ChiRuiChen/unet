#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv2d.h"
#include "nnet_utils/nnet_conv2d_stream.h"
#include "nnet_utils/nnet_image.h"
#include "nnet_utils/nnet_image_stream.h"
#include "nnet_utils/nnet_merge.h"
#include "nnet_utils/nnet_merge_stream.h"
#include "nnet_utils/nnet_padding.h"
#include "nnet_utils/nnet_padding_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
#include "nnet_utils/nnet_sepconv2d_stream.h"
#include "nnet_utils/nnet_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w4.h"
#include "weights/b4.h"
#include "weights/w12.h"
#include "weights/b12.h"
#include "weights/w14.h"
#include "weights/b14.h"
#include "weights/w20.h"
#include "weights/b20.h"
#include "weights/w22.h"
#include "weights/b22.h"
#include "weights/w30.h"
#include "weights/b30.h"
#include "weights/w32.h"
#include "weights/b32.h"
#include "weights/w38.h"
#include "weights/b38.h"
#include "weights/w40.h"
#include "weights/b40.h"
#include "weights/w48.h"
#include "weights/b48.h"
#include "weights/w50.h"
#include "weights/b50.h"
#include "weights/w56.h"
#include "weights/b56.h"
#include "weights/w58.h"
#include "weights/b58.h"
#include "weights/w66.h"
#include "weights/b66.h"
#include "weights/w68.h"
#include "weights/b68.h"
#include "weights/w70.h"
#include "weights/b70.h"
#include "weights/w79.h"
#include "weights/b79.h"
#include "weights/w81.h"
#include "weights/b81.h"
#include "weights/w83.h"
#include "weights/b83.h"
#include "weights/w94.h"
#include "weights/b94.h"
#include "weights/w96.h"
#include "weights/b96.h"
#include "weights/w98.h"
#include "weights/b98.h"
#include "weights/w103.h"
#include "weights/b103.h"
#include "weights/w105.h"
#include "weights/b105.h"
#include "weights/w113.h"
#include "weights/b113.h"
#include "weights/w115.h"
#include "weights/b115.h"
#include "weights/w117.h"
#include "weights/b117.h"
#include "weights/w128.h"
#include "weights/b128.h"
#include "weights/w130.h"
#include "weights/b130.h"
#include "weights/w132.h"
#include "weights/b132.h"
#include "weights/w138.h"
#include "weights/b138.h"
#include "weights/w140.h"
#include "weights/b140.h"
#include "weights/w145.h"
#include "weights/b145.h"
#include "weights/w150.h"
#include "weights/b150.h"
#include "weights/w152.h"
#include "weights/b152.h"
#include "weights/w154.h"
#include "weights/b154.h"
#include "weights/w165.h"
#include "weights/b165.h"
#include "weights/w167.h"
#include "weights/b167.h"
#include "weights/w169.h"
#include "weights/b169.h"
#include "weights/w174.h"
#include "weights/b174.h"
#include "weights/w176.h"
#include "weights/b176.h"
#include "weights/w178.h"
#include "weights/b178.h"
#include "weights/w186.h"
#include "weights/b186.h"
#include "weights/w188.h"
#include "weights/b188.h"
#include "weights/w193.h"
#include "weights/b193.h"
#include "weights/w200.h"
#include "weights/b200.h"
#include "weights/w202.h"
#include "weights/b202.h"
#include "weights/w204.h"
#include "weights/b204.h"
#include "weights/w210.h"
#include "weights/b210.h"
#include "weights/w212.h"
#include "weights/b212.h"
#include "weights/w217.h"
#include "weights/b217.h"
#include "weights/w222.h"
#include "weights/b222.h"
#include "weights/w224.h"
#include "weights/b224.h"
#include "weights/w226.h"
#include "weights/b226.h"
#include "weights/w285.h"
#include "weights/b285.h"
#include "weights/w286.h"
#include "weights/b286.h"
#include "weights/w287.h"
#include "weights/b287.h"

//hls-fpga-machine-learning insert layer-config
// zp2d_conv2d_102
struct config256 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_256;
    static const unsigned out_width = OUT_WIDTH_256;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// zp2d_conv2d_80
struct config243 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_243;
    static const unsigned out_width = OUT_WIDTH_243;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// zp2d_conv2d_58
struct config242 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_242;
    static const unsigned out_width = OUT_WIDTH_242;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_58
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 9;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 9;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config2 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_242;
    static const unsigned in_width = OUT_WIDTH_242;
    static const unsigned n_chan = N_CHAN_242;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_2;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_2;
    static const unsigned out_width = OUT_WIDTH_2;
    static const unsigned reuse_factor = 9;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_height * config2::filt_width> config2::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_80
struct config4_mult : nnet::dense_config {
    static const unsigned n_in = 9;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 9;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config4 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_243;
    static const unsigned in_width = OUT_WIDTH_243;
    static const unsigned n_chan = N_CHAN_243;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_4;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_4;
    static const unsigned out_width = OUT_WIDTH_4;
    static const unsigned reuse_factor = 9;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config4_mult mult_config;
};
const ap_uint<config4::filt_height * config4::filt_width> config4::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_43
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_60
struct relu_config9 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_4*OUT_WIDTH_4*N_FILT_4;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_12
struct config10 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_2;
    static const unsigned in_width = OUT_WIDTH_2;
    static const unsigned n_filt = N_FILT_10;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_10;

    static const unsigned out_height = OUT_HEIGHT_10;
    static const unsigned out_width = OUT_WIDTH_10;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_59
struct config244 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_10;
    static const unsigned in_width = OUT_WIDTH_10;
    static const unsigned n_chan = N_FILT_10;
    static const unsigned out_height = OUT_HEIGHT_244;
    static const unsigned out_width = OUT_WIDTH_244;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// max_pooling2d_16
struct config11 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_4;
    static const unsigned in_width = OUT_WIDTH_4;
    static const unsigned n_filt = N_FILT_11;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_11;

    static const unsigned out_height = OUT_HEIGHT_11;
    static const unsigned out_width = OUT_WIDTH_11;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_81
struct config245 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_11;
    static const unsigned in_width = OUT_WIDTH_11;
    static const unsigned n_chan = N_FILT_11;
    static const unsigned out_height = OUT_HEIGHT_245;
    static const unsigned out_width = OUT_WIDTH_245;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_59
struct config12_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 288;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config12 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_244;
    static const unsigned in_width = OUT_WIDTH_244;
    static const unsigned n_chan = N_CHAN_244;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_12;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_12;
    static const unsigned out_width = OUT_WIDTH_12;
    static const unsigned reuse_factor = 288;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config12_mult mult_config;
};
const ap_uint<config12::filt_height * config12::filt_width> config12::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_81
struct config14_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 288;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config14 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_245;
    static const unsigned in_width = OUT_WIDTH_245;
    static const unsigned n_chan = N_CHAN_245;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_14;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_14;
    static const unsigned out_width = OUT_WIDTH_14;
    static const unsigned reuse_factor = 288;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config14_mult mult_config;
};
const ap_uint<config14::filt_height * config14::filt_width> config14::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_44
struct relu_config18 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_12*OUT_WIDTH_12*N_FILT_12;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_60
struct config246 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_12;
    static const unsigned in_width = OUT_WIDTH_12;
    static const unsigned n_chan = N_FILT_12;
    static const unsigned out_height = OUT_HEIGHT_246;
    static const unsigned out_width = OUT_WIDTH_246;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_61
struct relu_config19 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_14*OUT_WIDTH_14*N_FILT_14;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_82
struct config247 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_14;
    static const unsigned in_width = OUT_WIDTH_14;
    static const unsigned n_chan = N_FILT_14;
    static const unsigned out_height = OUT_HEIGHT_247;
    static const unsigned out_width = OUT_WIDTH_247;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_60
struct config20_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config20 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_246;
    static const unsigned in_width = OUT_WIDTH_246;
    static const unsigned n_chan = N_CHAN_246;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_20;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_20;
    static const unsigned out_width = OUT_WIDTH_20;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config20_mult mult_config;
};
const ap_uint<config20::filt_height * config20::filt_width> config20::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_82
struct config22_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config22 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_247;
    static const unsigned in_width = OUT_WIDTH_247;
    static const unsigned n_chan = N_CHAN_247;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_22;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_22;
    static const unsigned out_width = OUT_WIDTH_22;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config22_mult mult_config;
};
const ap_uint<config22::filt_height * config22::filt_width> config22::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_45
struct relu_config26 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_20*OUT_WIDTH_20*N_FILT_20;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_62
struct relu_config27 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_22*OUT_WIDTH_22*N_FILT_22;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_13
struct config28 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_20;
    static const unsigned in_width = OUT_WIDTH_20;
    static const unsigned n_filt = N_FILT_28;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_28;

    static const unsigned out_height = OUT_HEIGHT_28;
    static const unsigned out_width = OUT_WIDTH_28;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_61
struct config248 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_28;
    static const unsigned in_width = OUT_WIDTH_28;
    static const unsigned n_chan = N_FILT_28;
    static const unsigned out_height = OUT_HEIGHT_248;
    static const unsigned out_width = OUT_WIDTH_248;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// max_pooling2d_17
struct config29 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_22;
    static const unsigned in_width = OUT_WIDTH_22;
    static const unsigned n_filt = N_FILT_29;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_29;

    static const unsigned out_height = OUT_HEIGHT_29;
    static const unsigned out_width = OUT_WIDTH_29;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_83
struct config249 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_29;
    static const unsigned in_width = OUT_WIDTH_29;
    static const unsigned n_chan = N_FILT_29;
    static const unsigned out_height = OUT_HEIGHT_249;
    static const unsigned out_width = OUT_WIDTH_249;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_61
struct config30_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config30 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_248;
    static const unsigned in_width = OUT_WIDTH_248;
    static const unsigned n_chan = N_CHAN_248;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_30;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_30;
    static const unsigned out_width = OUT_WIDTH_30;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config30_mult mult_config;
};
const ap_uint<config30::filt_height * config30::filt_width> config30::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_83
struct config32_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config32 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_249;
    static const unsigned in_width = OUT_WIDTH_249;
    static const unsigned n_chan = N_CHAN_249;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_32;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_32;
    static const unsigned out_width = OUT_WIDTH_32;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config32_mult mult_config;
};
const ap_uint<config32::filt_height * config32::filt_width> config32::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_46
struct relu_config36 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_30*OUT_WIDTH_30*N_FILT_30;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_62
struct config250 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_30;
    static const unsigned in_width = OUT_WIDTH_30;
    static const unsigned n_chan = N_FILT_30;
    static const unsigned out_height = OUT_HEIGHT_250;
    static const unsigned out_width = OUT_WIDTH_250;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_63
struct relu_config37 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_32*OUT_WIDTH_32*N_FILT_32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_84
struct config251 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_32;
    static const unsigned in_width = OUT_WIDTH_32;
    static const unsigned n_chan = N_FILT_32;
    static const unsigned out_height = OUT_HEIGHT_251;
    static const unsigned out_width = OUT_WIDTH_251;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_62
struct config38_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config38 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_250;
    static const unsigned in_width = OUT_WIDTH_250;
    static const unsigned n_chan = N_CHAN_250;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_38;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_38;
    static const unsigned out_width = OUT_WIDTH_38;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config38_mult mult_config;
};
const ap_uint<config38::filt_height * config38::filt_width> config38::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_84
struct config40_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config40 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_251;
    static const unsigned in_width = OUT_WIDTH_251;
    static const unsigned n_chan = N_CHAN_251;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_40;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_40;
    static const unsigned out_width = OUT_WIDTH_40;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config40_mult mult_config;
};
const ap_uint<config40::filt_height * config40::filt_width> config40::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_47
struct relu_config44 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_38*OUT_WIDTH_38*N_FILT_38;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_64
struct relu_config45 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_40*OUT_WIDTH_40*N_FILT_40;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_14
struct config46 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_38;
    static const unsigned in_width = OUT_WIDTH_38;
    static const unsigned n_filt = N_FILT_46;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_46;

    static const unsigned out_height = OUT_HEIGHT_46;
    static const unsigned out_width = OUT_WIDTH_46;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_63
struct config252 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_46;
    static const unsigned in_width = OUT_WIDTH_46;
    static const unsigned n_chan = N_FILT_46;
    static const unsigned out_height = OUT_HEIGHT_252;
    static const unsigned out_width = OUT_WIDTH_252;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// max_pooling2d_18
struct config47 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_40;
    static const unsigned in_width = OUT_WIDTH_40;
    static const unsigned n_filt = N_FILT_47;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_47;

    static const unsigned out_height = OUT_HEIGHT_47;
    static const unsigned out_width = OUT_WIDTH_47;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_85
struct config253 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_47;
    static const unsigned in_width = OUT_WIDTH_47;
    static const unsigned n_chan = N_FILT_47;
    static const unsigned out_height = OUT_HEIGHT_253;
    static const unsigned out_width = OUT_WIDTH_253;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_63
struct config48_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config48 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_252;
    static const unsigned in_width = OUT_WIDTH_252;
    static const unsigned n_chan = N_CHAN_252;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_48;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_48;
    static const unsigned out_width = OUT_WIDTH_48;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config48_mult mult_config;
};
const ap_uint<config48::filt_height * config48::filt_width> config48::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_85
struct config50_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config50 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_253;
    static const unsigned in_width = OUT_WIDTH_253;
    static const unsigned n_chan = N_CHAN_253;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_50;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_50;
    static const unsigned out_width = OUT_WIDTH_50;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config50_mult mult_config;
};
const ap_uint<config50::filt_height * config50::filt_width> config50::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_48
struct relu_config54 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_48*OUT_WIDTH_48*N_FILT_48;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_64
struct config254 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_48;
    static const unsigned in_width = OUT_WIDTH_48;
    static const unsigned n_chan = N_FILT_48;
    static const unsigned out_height = OUT_HEIGHT_254;
    static const unsigned out_width = OUT_WIDTH_254;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_65
struct relu_config55 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_50*OUT_WIDTH_50*N_FILT_50;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_86
struct config255 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_50;
    static const unsigned in_width = OUT_WIDTH_50;
    static const unsigned n_chan = N_FILT_50;
    static const unsigned out_height = OUT_HEIGHT_255;
    static const unsigned out_width = OUT_WIDTH_255;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_64
struct config56_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config56 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_254;
    static const unsigned in_width = OUT_WIDTH_254;
    static const unsigned n_chan = N_CHAN_254;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_56;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_56;
    static const unsigned out_width = OUT_WIDTH_56;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config56_mult mult_config;
};
const ap_uint<config56::filt_height * config56::filt_width> config56::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_86
struct config58_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config58 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_255;
    static const unsigned in_width = OUT_WIDTH_255;
    static const unsigned n_chan = N_CHAN_255;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_58;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_58;
    static const unsigned out_width = OUT_WIDTH_58;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config58_mult mult_config;
};
const ap_uint<config58::filt_height * config58::filt_width> config58::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_49
struct relu_config62 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_56*OUT_WIDTH_56*N_FILT_56;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_66
struct relu_config63 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_58*OUT_WIDTH_58*N_FILT_58;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_15
struct config64 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_56;
    static const unsigned in_width = OUT_WIDTH_56;
    static const unsigned n_filt = N_FILT_64;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_64;

    static const unsigned out_height = OUT_HEIGHT_64;
    static const unsigned out_width = OUT_WIDTH_64;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_65
struct config257 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_64;
    static const unsigned in_width = OUT_WIDTH_64;
    static const unsigned n_chan = N_FILT_64;
    static const unsigned out_height = OUT_HEIGHT_257;
    static const unsigned out_width = OUT_WIDTH_257;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// max_pooling2d_19
struct config65 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_58;
    static const unsigned in_width = OUT_WIDTH_58;
    static const unsigned n_filt = N_FILT_65;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_65;

    static const unsigned out_height = OUT_HEIGHT_65;
    static const unsigned out_width = OUT_WIDTH_65;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_87
struct config258 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_65;
    static const unsigned in_width = OUT_WIDTH_65;
    static const unsigned n_chan = N_FILT_65;
    static const unsigned out_height = OUT_HEIGHT_258;
    static const unsigned out_width = OUT_WIDTH_258;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_102
struct config66_mult : nnet::dense_config {
    static const unsigned n_in = 9;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 9;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config66 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_256;
    static const unsigned in_width = OUT_WIDTH_256;
    static const unsigned n_chan = N_CHAN_256;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_66;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_66;
    static const unsigned out_width = OUT_WIDTH_66;
    static const unsigned reuse_factor = 9;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config66_mult mult_config;
};
const ap_uint<config66::filt_height * config66::filt_width> config66::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_65
struct config68_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config68 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_257;
    static const unsigned in_width = OUT_WIDTH_257;
    static const unsigned n_chan = N_CHAN_257;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_68;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_68;
    static const unsigned out_width = OUT_WIDTH_68;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config68_mult mult_config;
};
const ap_uint<config68::filt_height * config68::filt_width> config68::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_87
struct config70_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config70 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_258;
    static const unsigned in_width = OUT_WIDTH_258;
    static const unsigned n_chan = N_CHAN_258;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_70;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_70;
    static const unsigned out_width = OUT_WIDTH_70;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config70_mult mult_config;
};
const ap_uint<config70::filt_height * config70::filt_width> config70::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_77
struct relu_config75 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_66*OUT_WIDTH_66*N_FILT_66;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_50
struct relu_config76 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_68*OUT_WIDTH_68*N_FILT_68;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_66
struct config259 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_68;
    static const unsigned in_width = OUT_WIDTH_68;
    static const unsigned n_chan = N_FILT_68;
    static const unsigned out_height = OUT_HEIGHT_259;
    static const unsigned out_width = OUT_WIDTH_259;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_67
struct relu_config77 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_70*OUT_WIDTH_70*N_FILT_70;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_88
struct config260 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_70;
    static const unsigned in_width = OUT_WIDTH_70;
    static const unsigned n_chan = N_FILT_70;
    static const unsigned out_height = OUT_HEIGHT_260;
    static const unsigned out_width = OUT_WIDTH_260;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// max_pooling2d_20
struct config78 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_66;
    static const unsigned in_width = OUT_WIDTH_66;
    static const unsigned n_filt = N_FILT_78;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_78;

    static const unsigned out_height = OUT_HEIGHT_78;
    static const unsigned out_width = OUT_WIDTH_78;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_103
struct config261 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_78;
    static const unsigned in_width = OUT_WIDTH_78;
    static const unsigned n_chan = N_FILT_78;
    static const unsigned out_height = OUT_HEIGHT_261;
    static const unsigned out_width = OUT_WIDTH_261;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_66
struct config79_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 4608;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config79 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_259;
    static const unsigned in_width = OUT_WIDTH_259;
    static const unsigned n_chan = N_CHAN_259;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_79;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_79;
    static const unsigned out_width = OUT_WIDTH_79;
    static const unsigned reuse_factor = 4608;
    static const unsigned n_zeros = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config79_mult mult_config;
};
const ap_uint<config79::filt_height * config79::filt_width> config79::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_88
struct config81_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 4608;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config81 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_260;
    static const unsigned in_width = OUT_WIDTH_260;
    static const unsigned n_chan = N_CHAN_260;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_81;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_81;
    static const unsigned out_width = OUT_WIDTH_81;
    static const unsigned reuse_factor = 4608;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config81_mult mult_config;
};
const ap_uint<config81::filt_height * config81::filt_width> config81::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_103
struct config83_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 288;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config83 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_261;
    static const unsigned in_width = OUT_WIDTH_261;
    static const unsigned n_chan = N_CHAN_261;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_83;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_83;
    static const unsigned out_width = OUT_WIDTH_83;
    static const unsigned reuse_factor = 288;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config83_mult mult_config;
};
const ap_uint<config83::filt_height * config83::filt_width> config83::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_51
struct relu_config88 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_79*OUT_WIDTH_79*N_FILT_79;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_68
struct relu_config89 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_81*OUT_WIDTH_81*N_FILT_81;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_78
struct relu_config90 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_83*OUT_WIDTH_83*N_FILT_83;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// up_sampling2d_12
struct config91 : nnet::resize_config {
    static const unsigned height = 8;
    static const unsigned width = 8;
    static const unsigned n_chan = 512;
    static const unsigned new_height = 32;
    static const unsigned new_width = 32;
};

// up_sampling2d_16
struct config92 : nnet::resize_config {
    static const unsigned height = 8;
    static const unsigned width = 8;
    static const unsigned n_chan = 512;
    static const unsigned new_height = 32;
    static const unsigned new_width = 32;
};

// max_pooling2d_21
struct config93 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_83;
    static const unsigned in_width = OUT_WIDTH_83;
    static const unsigned n_filt = N_FILT_93;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_93;

    static const unsigned out_height = OUT_HEIGHT_93;
    static const unsigned out_width = OUT_WIDTH_93;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_104
struct config262 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_93;
    static const unsigned in_width = OUT_WIDTH_93;
    static const unsigned n_chan = N_FILT_93;
    static const unsigned out_height = OUT_HEIGHT_262;
    static const unsigned out_width = OUT_WIDTH_262;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_67
struct config94_mult : nnet::dense_config {
    static const unsigned n_in = 2048;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2048;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config94 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_91;
    static const unsigned in_width = OUT_WIDTH_91;
    static const unsigned n_chan = N_CHAN_91;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_94;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_94;
    static const unsigned out_width = OUT_WIDTH_94;
    static const unsigned reuse_factor = 2048;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config94_mult mult_config;
};
const ap_uint<config94::filt_height * config94::filt_width> config94::pixels[] = {1,2,4,8};

// conv2d_89
struct config96_mult : nnet::dense_config {
    static const unsigned n_in = 2048;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2048;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config96 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_92;
    static const unsigned in_width = OUT_WIDTH_92;
    static const unsigned n_chan = N_CHAN_92;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_96;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_96;
    static const unsigned out_width = OUT_WIDTH_96;
    static const unsigned reuse_factor = 2048;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config96_mult mult_config;
};
const ap_uint<config96::filt_height * config96::filt_width> config96::pixels[] = {1,2,4,8};

// conv2d_104
struct config98_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config98 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_262;
    static const unsigned in_width = OUT_WIDTH_262;
    static const unsigned n_chan = N_CHAN_262;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_98;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_98;
    static const unsigned out_width = OUT_WIDTH_98;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config98_mult mult_config;
};
const ap_uint<config98::filt_height * config98::filt_width> config98::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// concatenate_14
struct config100 : nnet::concat_config {
    static const unsigned n_elem1_0 = 16;
    static const unsigned n_elem1_1 = 16;
    static const unsigned n_elem1_2 = 256;
    static const unsigned n_elem2_0 = 16;
    static const unsigned n_elem2_1 = 16;
    static const unsigned n_elem2_2 = 256;

    static const int axis = -1;
};

// zp2d_conv2d_68
struct config263 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_100;
    static const unsigned in_width = OUT_CONCAT_1_100;
    static const unsigned n_chan = OUT_CONCAT_2_100;
    static const unsigned out_height = OUT_HEIGHT_263;
    static const unsigned out_width = OUT_WIDTH_263;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_18
struct config101 : nnet::concat_config {
    static const unsigned n_elem1_0 = 16;
    static const unsigned n_elem1_1 = 16;
    static const unsigned n_elem1_2 = 256;
    static const unsigned n_elem2_0 = 16;
    static const unsigned n_elem2_1 = 16;
    static const unsigned n_elem2_2 = 256;

    static const int axis = -1;
};

// zp2d_conv2d_90
struct config264 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_101;
    static const unsigned in_width = OUT_CONCAT_1_101;
    static const unsigned n_chan = OUT_CONCAT_2_101;
    static const unsigned out_height = OUT_HEIGHT_264;
    static const unsigned out_width = OUT_WIDTH_264;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_68
struct config103_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 4608;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config103 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_263;
    static const unsigned in_width = OUT_WIDTH_263;
    static const unsigned n_chan = N_CHAN_263;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_103;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_103;
    static const unsigned out_width = OUT_WIDTH_103;
    static const unsigned reuse_factor = 4608;
    static const unsigned n_zeros = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config103_mult mult_config;
};
const ap_uint<config103::filt_height * config103::filt_width> config103::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_90
struct config105_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 4608;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config105 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_264;
    static const unsigned in_width = OUT_WIDTH_264;
    static const unsigned n_chan = N_CHAN_264;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_105;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_105;
    static const unsigned out_width = OUT_WIDTH_105;
    static const unsigned reuse_factor = 4608;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config105_mult mult_config;
};
const ap_uint<config105::filt_height * config105::filt_width> config105::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_79
struct relu_config107 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_98*OUT_WIDTH_98*N_FILT_98;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_22
struct config110 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_98;
    static const unsigned in_width = OUT_WIDTH_98;
    static const unsigned n_filt = N_FILT_110;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_110;

    static const unsigned out_height = OUT_HEIGHT_110;
    static const unsigned out_width = OUT_WIDTH_110;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_105
struct config265 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_110;
    static const unsigned in_width = OUT_WIDTH_110;
    static const unsigned n_chan = N_FILT_110;
    static const unsigned out_height = OUT_HEIGHT_265;
    static const unsigned out_width = OUT_WIDTH_265;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_52
struct relu_config111 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_103*OUT_WIDTH_103*N_FILT_103;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_69
struct config266 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_103;
    static const unsigned in_width = OUT_WIDTH_103;
    static const unsigned n_chan = N_FILT_103;
    static const unsigned out_height = OUT_HEIGHT_266;
    static const unsigned out_width = OUT_WIDTH_266;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_69
struct relu_config112 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_105*OUT_WIDTH_105*N_FILT_105;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_91
struct config267 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_105;
    static const unsigned in_width = OUT_WIDTH_105;
    static const unsigned n_chan = N_FILT_105;
    static const unsigned out_height = OUT_HEIGHT_267;
    static const unsigned out_width = OUT_WIDTH_267;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_105
struct config113_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config113 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_265;
    static const unsigned in_width = OUT_WIDTH_265;
    static const unsigned n_chan = N_CHAN_265;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_113;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_113;
    static const unsigned out_width = OUT_WIDTH_113;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config113_mult mult_config;
};
const ap_uint<config113::filt_height * config113::filt_width> config113::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_69
struct config115_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config115 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_266;
    static const unsigned in_width = OUT_WIDTH_266;
    static const unsigned n_chan = N_CHAN_266;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_115;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_115;
    static const unsigned out_width = OUT_WIDTH_115;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config115_mult mult_config;
};
const ap_uint<config115::filt_height * config115::filt_width> config115::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_91
struct config117_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config117 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_267;
    static const unsigned in_width = OUT_WIDTH_267;
    static const unsigned n_chan = N_CHAN_267;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_117;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_117;
    static const unsigned out_width = OUT_WIDTH_117;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config117_mult mult_config;
};
const ap_uint<config117::filt_height * config117::filt_width> config117::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_80
struct relu_config122 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_113*OUT_WIDTH_113*N_FILT_113;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_53
struct relu_config123 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_115*OUT_WIDTH_115*N_FILT_115;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_70
struct relu_config124 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_117*OUT_WIDTH_117*N_FILT_117;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_23
struct config125 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_113;
    static const unsigned in_width = OUT_WIDTH_113;
    static const unsigned n_filt = N_FILT_125;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_125;

    static const unsigned out_height = OUT_HEIGHT_125;
    static const unsigned out_width = OUT_WIDTH_125;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 10000;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_106
struct config268 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_125;
    static const unsigned in_width = OUT_WIDTH_125;
    static const unsigned n_chan = N_FILT_125;
    static const unsigned out_height = OUT_HEIGHT_268;
    static const unsigned out_width = OUT_WIDTH_268;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// up_sampling2d_13
struct config126 : nnet::resize_config {
    static const unsigned height = 16;
    static const unsigned width = 16;
    static const unsigned n_chan = 256;
    static const unsigned new_height = 64;
    static const unsigned new_width = 64;
};

// up_sampling2d_17
struct config127 : nnet::resize_config {
    static const unsigned height = 16;
    static const unsigned width = 16;
    static const unsigned n_chan = 256;
    static const unsigned new_height = 64;
    static const unsigned new_width = 64;
};

// conv2d_106
struct config128_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 512;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config128 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_268;
    static const unsigned in_width = OUT_WIDTH_268;
    static const unsigned n_chan = N_CHAN_268;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_128;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_128;
    static const unsigned out_width = OUT_WIDTH_128;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config128_mult mult_config;
};
const ap_uint<config128::filt_height * config128::filt_width> config128::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_70
struct config130_mult : nnet::dense_config {
    static const unsigned n_in = 1024;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1024;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config130 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_126;
    static const unsigned in_width = OUT_WIDTH_126;
    static const unsigned n_chan = N_CHAN_126;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_130;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_130;
    static const unsigned out_width = OUT_WIDTH_130;
    static const unsigned reuse_factor = 1024;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config130_mult mult_config;
};
const ap_uint<config130::filt_height * config130::filt_width> config130::pixels[] = {1,2,4,8};

// conv2d_92
struct config132_mult : nnet::dense_config {
    static const unsigned n_in = 1024;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1024;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config132 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_127;
    static const unsigned in_width = OUT_WIDTH_127;
    static const unsigned n_chan = N_CHAN_127;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_132;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_132;
    static const unsigned out_width = OUT_WIDTH_132;
    static const unsigned reuse_factor = 1024;
    static const unsigned n_zeros = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config132_mult mult_config;
};
const ap_uint<config132::filt_height * config132::filt_width> config132::pixels[] = {1,2,4,8};

// concatenate_15
struct config135 : nnet::concat_config {
    static const unsigned n_elem1_0 = 32;
    static const unsigned n_elem1_1 = 32;
    static const unsigned n_elem1_2 = 128;
    static const unsigned n_elem2_0 = 32;
    static const unsigned n_elem2_1 = 32;
    static const unsigned n_elem2_2 = 128;

    static const int axis = -1;
};

// zp2d_conv2d_71
struct config269 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_135;
    static const unsigned in_width = OUT_CONCAT_1_135;
    static const unsigned n_chan = OUT_CONCAT_2_135;
    static const unsigned out_height = OUT_HEIGHT_269;
    static const unsigned out_width = OUT_WIDTH_269;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_19
struct config136 : nnet::concat_config {
    static const unsigned n_elem1_0 = 32;
    static const unsigned n_elem1_1 = 32;
    static const unsigned n_elem1_2 = 128;
    static const unsigned n_elem2_0 = 32;
    static const unsigned n_elem2_1 = 32;
    static const unsigned n_elem2_2 = 128;

    static const int axis = -1;
};

// zp2d_conv2d_93
struct config270 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_136;
    static const unsigned in_width = OUT_CONCAT_1_136;
    static const unsigned n_chan = OUT_CONCAT_2_136;
    static const unsigned out_height = OUT_HEIGHT_270;
    static const unsigned out_width = OUT_WIDTH_270;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_81
struct relu_config137 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_128*OUT_WIDTH_128*N_FILT_128;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// conv2d_71
struct config138_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config138 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_269;
    static const unsigned in_width = OUT_WIDTH_269;
    static const unsigned n_chan = N_CHAN_269;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_138;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_138;
    static const unsigned out_width = OUT_WIDTH_138;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config138_mult mult_config;
};
const ap_uint<config138::filt_height * config138::filt_width> config138::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_93
struct config140_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config140 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_270;
    static const unsigned in_width = OUT_WIDTH_270;
    static const unsigned n_chan = N_CHAN_270;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_140;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_140;
    static const unsigned out_width = OUT_WIDTH_140;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config140_mult mult_config;
};
const ap_uint<config140::filt_height * config140::filt_width> config140::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// up_sampling2d_20
struct config142 : nnet::resize_config {
    static const unsigned height = 8;
    static const unsigned width = 8;
    static const unsigned n_chan = 512;
    static const unsigned new_height = 32;
    static const unsigned new_width = 32;
};

// conv2d_107
struct config145_mult : nnet::dense_config {
    static const unsigned n_in = 2048;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 2048;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config145 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_142;
    static const unsigned in_width = OUT_WIDTH_142;
    static const unsigned n_chan = N_CHAN_142;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_145;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_145;
    static const unsigned out_width = OUT_WIDTH_145;
    static const unsigned reuse_factor = 2048;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config145_mult mult_config;
};
const ap_uint<config145::filt_height * config145::filt_width> config145::pixels[] = {1,2,4,8};

// activation_54
struct relu_config147 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_138*OUT_WIDTH_138*N_FILT_138;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_72
struct config271 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_138;
    static const unsigned in_width = OUT_WIDTH_138;
    static const unsigned n_chan = N_FILT_138;
    static const unsigned out_height = OUT_HEIGHT_271;
    static const unsigned out_width = OUT_WIDTH_271;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_71
struct relu_config148 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_140*OUT_WIDTH_140*N_FILT_140;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_94
struct config272 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_140;
    static const unsigned in_width = OUT_WIDTH_140;
    static const unsigned n_chan = N_FILT_140;
    static const unsigned out_height = OUT_HEIGHT_272;
    static const unsigned out_width = OUT_WIDTH_272;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_22
struct config149 : nnet::concat_config {
    static const unsigned n_elem1_0 = 16;
    static const unsigned n_elem1_1 = 16;
    static const unsigned n_elem1_2 = 256;
    static const unsigned n_elem2_0 = 16;
    static const unsigned n_elem2_1 = 16;
    static const unsigned n_elem2_2 = 256;

    static const int axis = -1;
};

// zp2d_conv2d_108
struct config273 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_149;
    static const unsigned in_width = OUT_CONCAT_1_149;
    static const unsigned n_chan = OUT_CONCAT_2_149;
    static const unsigned out_height = OUT_HEIGHT_273;
    static const unsigned out_width = OUT_WIDTH_273;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_72
struct config150_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config150 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_271;
    static const unsigned in_width = OUT_WIDTH_271;
    static const unsigned n_chan = N_CHAN_271;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_150;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_150;
    static const unsigned out_width = OUT_WIDTH_150;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config150_mult mult_config;
};
const ap_uint<config150::filt_height * config150::filt_width> config150::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_94
struct config152_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config152 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_272;
    static const unsigned in_width = OUT_WIDTH_272;
    static const unsigned n_chan = N_CHAN_272;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_152;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_152;
    static const unsigned out_width = OUT_WIDTH_152;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config152_mult mult_config;
};
const ap_uint<config152::filt_height * config152::filt_width> config152::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_108
struct config154_mult : nnet::dense_config {
    static const unsigned n_in = 4608;
    static const unsigned n_out = 256;
    static const unsigned reuse_factor = 4608;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config154 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_273;
    static const unsigned in_width = OUT_WIDTH_273;
    static const unsigned n_chan = N_CHAN_273;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_154;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_154;
    static const unsigned out_width = OUT_WIDTH_154;
    static const unsigned reuse_factor = 4608;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config154_mult mult_config;
};
const ap_uint<config154::filt_height * config154::filt_width> config154::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_55
struct relu_config159 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_150*OUT_WIDTH_150*N_FILT_150;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_72
struct relu_config160 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_152*OUT_WIDTH_152*N_FILT_152;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_82
struct relu_config161 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_154*OUT_WIDTH_154*N_FILT_154;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// up_sampling2d_14
struct config162 : nnet::resize_config {
    static const unsigned height = 32;
    static const unsigned width = 32;
    static const unsigned n_chan = 128;
    static const unsigned new_height = 128;
    static const unsigned new_width = 128;
};

// up_sampling2d_18
struct config163 : nnet::resize_config {
    static const unsigned height = 32;
    static const unsigned width = 32;
    static const unsigned n_chan = 128;
    static const unsigned new_height = 128;
    static const unsigned new_width = 128;
};

// up_sampling2d_21
struct config164 : nnet::resize_config {
    static const unsigned height = 16;
    static const unsigned width = 16;
    static const unsigned n_chan = 256;
    static const unsigned new_height = 64;
    static const unsigned new_width = 64;
};

// conv2d_73
struct config165_mult : nnet::dense_config {
    static const unsigned n_in = 512;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 512;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config165 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_162;
    static const unsigned in_width = OUT_WIDTH_162;
    static const unsigned n_chan = N_CHAN_162;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_165;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_165;
    static const unsigned out_width = OUT_WIDTH_165;
    static const unsigned reuse_factor = 512;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config165_mult mult_config;
};
const ap_uint<config165::filt_height * config165::filt_width> config165::pixels[] = {1,2,4,8};

// conv2d_95
struct config167_mult : nnet::dense_config {
    static const unsigned n_in = 512;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 512;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config167 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_163;
    static const unsigned in_width = OUT_WIDTH_163;
    static const unsigned n_chan = N_CHAN_163;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_167;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_167;
    static const unsigned out_width = OUT_WIDTH_167;
    static const unsigned reuse_factor = 512;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config167_mult mult_config;
};
const ap_uint<config167::filt_height * config167::filt_width> config167::pixels[] = {1,2,4,8};

// conv2d_109
struct config169_mult : nnet::dense_config {
    static const unsigned n_in = 1024;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 1024;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config169 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_164;
    static const unsigned in_width = OUT_WIDTH_164;
    static const unsigned n_chan = N_CHAN_164;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_169;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_169;
    static const unsigned out_width = OUT_WIDTH_169;
    static const unsigned reuse_factor = 1024;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config169_mult mult_config;
};
const ap_uint<config169::filt_height * config169::filt_width> config169::pixels[] = {1,2,4,8};

// concatenate_16
struct config171 : nnet::concat_config {
    static const unsigned n_elem1_0 = 64;
    static const unsigned n_elem1_1 = 64;
    static const unsigned n_elem1_2 = 64;
    static const unsigned n_elem2_0 = 64;
    static const unsigned n_elem2_1 = 64;
    static const unsigned n_elem2_2 = 64;

    static const int axis = -1;
};

// zp2d_conv2d_74
struct config274 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_171;
    static const unsigned in_width = OUT_CONCAT_1_171;
    static const unsigned n_chan = OUT_CONCAT_2_171;
    static const unsigned out_height = OUT_HEIGHT_274;
    static const unsigned out_width = OUT_WIDTH_274;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_20
struct config172 : nnet::concat_config {
    static const unsigned n_elem1_0 = 64;
    static const unsigned n_elem1_1 = 64;
    static const unsigned n_elem1_2 = 64;
    static const unsigned n_elem2_0 = 64;
    static const unsigned n_elem2_1 = 64;
    static const unsigned n_elem2_2 = 64;

    static const int axis = -1;
};

// zp2d_conv2d_96
struct config275 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_172;
    static const unsigned in_width = OUT_CONCAT_1_172;
    static const unsigned n_chan = OUT_CONCAT_2_172;
    static const unsigned out_height = OUT_HEIGHT_275;
    static const unsigned out_width = OUT_WIDTH_275;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_23
struct config173 : nnet::concat_config {
    static const unsigned n_elem1_0 = 32;
    static const unsigned n_elem1_1 = 32;
    static const unsigned n_elem1_2 = 128;
    static const unsigned n_elem2_0 = 32;
    static const unsigned n_elem2_1 = 32;
    static const unsigned n_elem2_2 = 128;

    static const int axis = -1;
};

// zp2d_conv2d_110
struct config276 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_173;
    static const unsigned in_width = OUT_CONCAT_1_173;
    static const unsigned n_chan = OUT_CONCAT_2_173;
    static const unsigned out_height = OUT_HEIGHT_276;
    static const unsigned out_width = OUT_WIDTH_276;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_74
struct config174_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config174 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_274;
    static const unsigned in_width = OUT_WIDTH_274;
    static const unsigned n_chan = N_CHAN_274;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_174;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_174;
    static const unsigned out_width = OUT_WIDTH_174;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config174_mult mult_config;
};
const ap_uint<config174::filt_height * config174::filt_width> config174::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_96
struct config176_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config176 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_275;
    static const unsigned in_width = OUT_WIDTH_275;
    static const unsigned n_chan = N_CHAN_275;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_176;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_176;
    static const unsigned out_width = OUT_WIDTH_176;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config176_mult mult_config;
};
const ap_uint<config176::filt_height * config176::filt_width> config176::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_110
struct config178_mult : nnet::dense_config {
    static const unsigned n_in = 2304;
    static const unsigned n_out = 128;
    static const unsigned reuse_factor = 2304;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config178 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_276;
    static const unsigned in_width = OUT_WIDTH_276;
    static const unsigned n_chan = N_CHAN_276;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_178;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_178;
    static const unsigned out_width = OUT_WIDTH_178;
    static const unsigned reuse_factor = 2304;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config178_mult mult_config;
};
const ap_uint<config178::filt_height * config178::filt_width> config178::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_56
struct relu_config183 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_174*OUT_WIDTH_174*N_FILT_174;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_75
struct config277 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_174;
    static const unsigned in_width = OUT_WIDTH_174;
    static const unsigned n_chan = N_FILT_174;
    static const unsigned out_height = OUT_HEIGHT_277;
    static const unsigned out_width = OUT_WIDTH_277;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_73
struct relu_config184 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_176*OUT_WIDTH_176*N_FILT_176;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_97
struct config278 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_176;
    static const unsigned in_width = OUT_WIDTH_176;
    static const unsigned n_chan = N_FILT_176;
    static const unsigned out_height = OUT_HEIGHT_278;
    static const unsigned out_width = OUT_WIDTH_278;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_83
struct relu_config185 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_178*OUT_WIDTH_178*N_FILT_178;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// conv2d_75
struct config186_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config186 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_277;
    static const unsigned in_width = OUT_WIDTH_277;
    static const unsigned n_chan = N_CHAN_277;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_186;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_186;
    static const unsigned out_width = OUT_WIDTH_186;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config186_mult mult_config;
};
const ap_uint<config186::filt_height * config186::filt_width> config186::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_97
struct config188_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config188 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_278;
    static const unsigned in_width = OUT_WIDTH_278;
    static const unsigned n_chan = N_CHAN_278;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_188;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_188;
    static const unsigned out_width = OUT_WIDTH_188;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config188_mult mult_config;
};
const ap_uint<config188::filt_height * config188::filt_width> config188::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// up_sampling2d_22
struct config190 : nnet::resize_config {
    static const unsigned height = 32;
    static const unsigned width = 32;
    static const unsigned n_chan = 128;
    static const unsigned new_height = 128;
    static const unsigned new_width = 128;
};

// conv2d_111
struct config193_mult : nnet::dense_config {
    static const unsigned n_in = 512;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 512;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config193 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_190;
    static const unsigned in_width = OUT_WIDTH_190;
    static const unsigned n_chan = N_CHAN_190;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_193;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_193;
    static const unsigned out_width = OUT_WIDTH_193;
    static const unsigned reuse_factor = 512;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config193_mult mult_config;
};
const ap_uint<config193::filt_height * config193::filt_width> config193::pixels[] = {1,2,4,8};

// activation_57
struct relu_config195 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_186*OUT_WIDTH_186*N_FILT_186;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_74
struct relu_config196 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_188*OUT_WIDTH_188*N_FILT_188;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// concatenate_24
struct config197 : nnet::concat_config {
    static const unsigned n_elem1_0 = 64;
    static const unsigned n_elem1_1 = 64;
    static const unsigned n_elem1_2 = 64;
    static const unsigned n_elem2_0 = 64;
    static const unsigned n_elem2_1 = 64;
    static const unsigned n_elem2_2 = 64;

    static const int axis = -1;
};

// zp2d_conv2d_112
struct config279 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_197;
    static const unsigned in_width = OUT_CONCAT_1_197;
    static const unsigned n_chan = OUT_CONCAT_2_197;
    static const unsigned out_height = OUT_HEIGHT_279;
    static const unsigned out_width = OUT_WIDTH_279;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// up_sampling2d_15
struct config198 : nnet::resize_config {
    static const unsigned height = 64;
    static const unsigned width = 64;
    static const unsigned n_chan = 64;
    static const unsigned new_height = 256;
    static const unsigned new_width = 256;
};

// up_sampling2d_19
struct config199 : nnet::resize_config {
    static const unsigned height = 64;
    static const unsigned width = 64;
    static const unsigned n_chan = 64;
    static const unsigned new_height = 256;
    static const unsigned new_width = 256;
};

// conv2d_112
struct config200_mult : nnet::dense_config {
    static const unsigned n_in = 1152;
    static const unsigned n_out = 64;
    static const unsigned reuse_factor = 1152;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config200 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_279;
    static const unsigned in_width = OUT_WIDTH_279;
    static const unsigned n_chan = N_CHAN_279;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_200;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_200;
    static const unsigned out_width = OUT_WIDTH_200;
    static const unsigned reuse_factor = 1152;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config200_mult mult_config;
};
const ap_uint<config200::filt_height * config200::filt_width> config200::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_76
struct config202_mult : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 256;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config202 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_198;
    static const unsigned in_width = OUT_WIDTH_198;
    static const unsigned n_chan = N_CHAN_198;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_202;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_202;
    static const unsigned out_width = OUT_WIDTH_202;
    static const unsigned reuse_factor = 256;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config202_mult mult_config;
};
const ap_uint<config202::filt_height * config202::filt_width> config202::pixels[] = {1,2,4,8};

// conv2d_98
struct config204_mult : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 256;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config204 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_199;
    static const unsigned in_width = OUT_WIDTH_199;
    static const unsigned n_chan = N_CHAN_199;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_204;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_204;
    static const unsigned out_width = OUT_WIDTH_204;
    static const unsigned reuse_factor = 256;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config204_mult mult_config;
};
const ap_uint<config204::filt_height * config204::filt_width> config204::pixels[] = {1,2,4,8};

// concatenate_17
struct config207 : nnet::concat_config {
    static const unsigned n_elem1_0 = 128;
    static const unsigned n_elem1_1 = 128;
    static const unsigned n_elem1_2 = 32;
    static const unsigned n_elem2_0 = 128;
    static const unsigned n_elem2_1 = 128;
    static const unsigned n_elem2_2 = 32;

    static const int axis = -1;
};

// zp2d_conv2d_77
struct config280 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_207;
    static const unsigned in_width = OUT_CONCAT_1_207;
    static const unsigned n_chan = OUT_CONCAT_2_207;
    static const unsigned out_height = OUT_HEIGHT_280;
    static const unsigned out_width = OUT_WIDTH_280;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_21
struct config208 : nnet::concat_config {
    static const unsigned n_elem1_0 = 128;
    static const unsigned n_elem1_1 = 128;
    static const unsigned n_elem1_2 = 32;
    static const unsigned n_elem2_0 = 128;
    static const unsigned n_elem2_1 = 128;
    static const unsigned n_elem2_2 = 32;

    static const int axis = -1;
};

// zp2d_conv2d_99
struct config281 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_208;
    static const unsigned in_width = OUT_CONCAT_1_208;
    static const unsigned n_chan = OUT_CONCAT_2_208;
    static const unsigned out_height = OUT_HEIGHT_281;
    static const unsigned out_width = OUT_WIDTH_281;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_84
struct relu_config209 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_200*OUT_WIDTH_200*N_FILT_200;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// conv2d_77
struct config210_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config210 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_280;
    static const unsigned in_width = OUT_WIDTH_280;
    static const unsigned n_chan = N_CHAN_280;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_210;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_210;
    static const unsigned out_width = OUT_WIDTH_210;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config210_mult mult_config;
};
const ap_uint<config210::filt_height * config210::filt_width> config210::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_99
struct config212_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config212 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_281;
    static const unsigned in_width = OUT_WIDTH_281;
    static const unsigned n_chan = N_CHAN_281;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_212;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_212;
    static const unsigned out_width = OUT_WIDTH_212;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config212_mult mult_config;
};
const ap_uint<config212::filt_height * config212::filt_width> config212::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// up_sampling2d_23
struct config214 : nnet::resize_config {
    static const unsigned height = 64;
    static const unsigned width = 64;
    static const unsigned n_chan = 64;
    static const unsigned new_height = 256;
    static const unsigned new_width = 256;
};

// conv2d_113
struct config217_mult : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 256;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config217 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_214;
    static const unsigned in_width = OUT_WIDTH_214;
    static const unsigned n_chan = N_CHAN_214;
    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_217;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned out_height = OUT_HEIGHT_217;
    static const unsigned out_width = OUT_WIDTH_217;
    static const unsigned reuse_factor = 256;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 2;
    static const unsigned min_width = 2;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config217_mult mult_config;
};
const ap_uint<config217::filt_height * config217::filt_width> config217::pixels[] = {1,2,4,8};

// activation_58
struct relu_config219 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_210*OUT_WIDTH_210*N_FILT_210;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_78
struct config282 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_210;
    static const unsigned in_width = OUT_WIDTH_210;
    static const unsigned n_chan = N_FILT_210;
    static const unsigned out_height = OUT_HEIGHT_282;
    static const unsigned out_width = OUT_WIDTH_282;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// activation_75
struct relu_config220 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_212*OUT_WIDTH_212*N_FILT_212;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_100
struct config283 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_212;
    static const unsigned in_width = OUT_WIDTH_212;
    static const unsigned n_chan = N_FILT_212;
    static const unsigned out_height = OUT_HEIGHT_283;
    static const unsigned out_width = OUT_WIDTH_283;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// concatenate_25
struct config221 : nnet::concat_config {
    static const unsigned n_elem1_0 = 128;
    static const unsigned n_elem1_1 = 128;
    static const unsigned n_elem1_2 = 32;
    static const unsigned n_elem2_0 = 128;
    static const unsigned n_elem2_1 = 128;
    static const unsigned n_elem2_2 = 32;

    static const int axis = -1;
};

// zp2d_conv2d_114
struct config284 : nnet::padding2d_config {
    static const unsigned in_height = OUT_CONCAT_0_221;
    static const unsigned in_width = OUT_CONCAT_1_221;
    static const unsigned n_chan = OUT_CONCAT_2_221;
    static const unsigned out_height = OUT_HEIGHT_284;
    static const unsigned out_width = OUT_WIDTH_284;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_78
struct config222_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 288;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config222 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_282;
    static const unsigned in_width = OUT_WIDTH_282;
    static const unsigned n_chan = N_CHAN_282;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_222;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_222;
    static const unsigned out_width = OUT_WIDTH_222;
    static const unsigned reuse_factor = 288;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config222_mult mult_config;
};
const ap_uint<config222::filt_height * config222::filt_width> config222::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_100
struct config224_mult : nnet::dense_config {
    static const unsigned n_in = 288;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 288;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config224 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_283;
    static const unsigned in_width = OUT_WIDTH_283;
    static const unsigned n_chan = N_CHAN_283;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_224;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_224;
    static const unsigned out_width = OUT_WIDTH_224;
    static const unsigned reuse_factor = 288;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config224_mult mult_config;
};
const ap_uint<config224::filt_height * config224::filt_width> config224::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// conv2d_114
struct config226_mult : nnet::dense_config {
    static const unsigned n_in = 576;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config226 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_284;
    static const unsigned in_width = OUT_WIDTH_284;
    static const unsigned n_chan = N_CHAN_284;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_226;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_226;
    static const unsigned out_width = OUT_WIDTH_226;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config226_mult mult_config;
};
const ap_uint<config226::filt_height * config226::filt_width> config226::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// activation_59
struct relu_config231 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_222*OUT_WIDTH_222*N_FILT_222;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_76
struct relu_config232 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_224*OUT_WIDTH_224*N_FILT_224;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// activation_85
struct relu_config233 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_226*OUT_WIDTH_226*N_FILT_226;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 10000;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// conv2d_79
struct config285_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 2;
    static const unsigned reuse_factor = 32;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config285 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_222;
    static const unsigned in_width = OUT_WIDTH_222;
    static const unsigned n_chan = N_FILT_222;
    static const unsigned filt_height = 1;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_285;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_285;
    static const unsigned out_width = OUT_WIDTH_285;
    static const unsigned reuse_factor = 32;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 1;
    static const unsigned min_width = 1;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config285_mult mult_config;
};
const ap_uint<config285::filt_height * config285::filt_width> config285::pixels[] = {1};

// conv2d_101
struct config286_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 1;
    static const unsigned reuse_factor = 32;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config286 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_224;
    static const unsigned in_width = OUT_WIDTH_224;
    static const unsigned n_chan = N_FILT_224;
    static const unsigned filt_height = 1;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_286;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_286;
    static const unsigned out_width = OUT_WIDTH_286;
    static const unsigned reuse_factor = 32;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 1;
    static const unsigned min_width = 1;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config286_mult mult_config;
};
const ap_uint<config286::filt_height * config286::filt_width> config286::pixels[] = {1};

// conv2d_115
struct config287_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 4;
    static const unsigned reuse_factor = 32;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config287 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_226;
    static const unsigned in_width = OUT_WIDTH_226;
    static const unsigned n_chan = N_FILT_226;
    static const unsigned filt_height = 1;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_287;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_287;
    static const unsigned out_width = OUT_WIDTH_287;
    static const unsigned reuse_factor = 32;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 1;
    static const unsigned min_width = 1;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config287_mult mult_config;
};
const ap_uint<config287::filt_height * config287::filt_width> config287::pixels[] = {1};

// concatenate_26
struct config240 : nnet::concat_config {
    static const unsigned n_elem1_0 = 128;
    static const unsigned n_elem1_1 = 128;
    static const unsigned n_elem1_2 = 2;
    static const unsigned n_elem2_0 = 128;
    static const unsigned n_elem2_1 = 128;
    static const unsigned n_elem2_2 = 1;

    static const int axis = -1;
};

// concatenate_27
struct config241 : nnet::concat_config {
    static const unsigned n_elem1_0 = 128;
    static const unsigned n_elem1_1 = 128;
    static const unsigned n_elem1_2 = 4;
    static const unsigned n_elem2_0 = 128;
    static const unsigned n_elem2_1 = 128;
    static const unsigned n_elem2_2 = 3;

    static const int axis = -1;
};


#endif
