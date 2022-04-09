//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_2,
    hls::stream<result_t> &layer241_out,
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_2,layer241_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = OUT_CONCAT_0_241*OUT_CONCAT_1_241*OUT_CONCAT_2_241;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 288>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 288>(w4, "w4.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b4, "b4.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w12, "w12.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b12, "b12.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w14, "w14.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b14, "b14.txt");
        nnet::load_weights_from_txt<model_default_t, 36864>(w20, "w20.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b20, "b20.txt");
        nnet::load_weights_from_txt<model_default_t, 36864>(w22, "w22.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b22, "b22.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w30, "w30.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b30, "b30.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w32, "w32.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b32, "b32.txt");
        nnet::load_weights_from_txt<model_default_t, 147456>(w38, "w38.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b38, "b38.txt");
        nnet::load_weights_from_txt<model_default_t, 147456>(w40, "w40.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b40, "b40.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w48, "w48.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b48, "b48.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w50, "w50.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b50, "b50.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w56, "w56.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b56, "b56.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w58, "w58.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b58, "b58.txt");
        nnet::load_weights_from_txt<model_default_t, 288>(w66, "w66.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b66, "b66.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w68, "w68.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b68, "b68.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w70, "w70.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b70, "b70.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w79, "w79.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b79, "b79.txt");
        nnet::load_weights_from_txt<model_default_t, 2359296>(w81, "w81.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b81, "b81.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w83, "w83.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b83, "b83.txt");
        nnet::load_weights_from_txt<model_default_t, 524288>(w94, "w94.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b94, "b94.txt");
        nnet::load_weights_from_txt<model_default_t, 524288>(w96, "w96.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b96, "b96.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w98, "w98.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b98, "b98.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w103, "w103.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b103, "b103.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w105, "w105.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b105, "b105.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w113, "w113.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b113, "b113.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w115, "w115.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b115, "b115.txt");
        nnet::load_weights_from_txt<model_default_t, 589824>(w117, "w117.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b117, "b117.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w128, "w128.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(b128, "b128.txt");
        nnet::load_weights_from_txt<model_default_t, 131072>(w130, "w130.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b130, "b130.txt");
        nnet::load_weights_from_txt<model_default_t, 131072>(w132, "w132.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b132, "b132.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w138, "w138.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b138, "b138.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w140, "w140.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b140, "b140.txt");
        nnet::load_weights_from_txt<model_default_t, 524288>(w145, "w145.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b145, "b145.txt");
        nnet::load_weights_from_txt<model_default_t, 147456>(w150, "w150.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b150, "b150.txt");
        nnet::load_weights_from_txt<model_default_t, 147456>(w152, "w152.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b152, "b152.txt");
        nnet::load_weights_from_txt<model_default_t, 1179648>(w154, "w154.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(b154, "b154.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w165, "w165.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b165, "b165.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w167, "w167.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b167, "b167.txt");
        nnet::load_weights_from_txt<model_default_t, 131072>(w169, "w169.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b169, "b169.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w174, "w174.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b174, "b174.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w176, "w176.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b176, "b176.txt");
        nnet::load_weights_from_txt<model_default_t, 294912>(w178, "w178.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(b178, "b178.txt");
        nnet::load_weights_from_txt<model_default_t, 36864>(w186, "w186.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b186, "b186.txt");
        nnet::load_weights_from_txt<model_default_t, 36864>(w188, "w188.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b188, "b188.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(w193, "w193.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b193, "b193.txt");
        nnet::load_weights_from_txt<model_default_t, 73728>(w200, "w200.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b200, "b200.txt");
        nnet::load_weights_from_txt<model_default_t, 8192>(w202, "w202.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b202, "b202.txt");
        nnet::load_weights_from_txt<model_default_t, 8192>(w204, "w204.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b204, "b204.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w210, "w210.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b210, "b210.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w212, "w212.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b212, "b212.txt");
        nnet::load_weights_from_txt<model_default_t, 8192>(w217, "w217.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b217, "b217.txt");
        nnet::load_weights_from_txt<model_default_t, 9216>(w222, "w222.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b222, "b222.txt");
        nnet::load_weights_from_txt<model_default_t, 9216>(w224, "w224.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b224, "b224.txt");
        nnet::load_weights_from_txt<model_default_t, 18432>(w226, "w226.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b226, "b226.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(w285, "w285.txt");
        nnet::load_weights_from_txt<model_default_t, 2>(b285, "b285.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(w286, "w286.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(b286, "b286.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(w287, "w287.txt");
        nnet::load_weights_from_txt<model_default_t, 4>(b287, "b287.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers
    hls::stream<input_t> input_1_1("input_1_1");
    hls::stream<input_t> input_1_2("input_1_2");
    nnet::clone_stream<input_t, input_t, N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1>(input_2, input_1_1, input_1_2);
    
    hls::stream<input_t> input_1_3("input_1_3");
    hls::stream<input_t> input_1_4("input_1_4");
    nnet::clone_stream<input_t, input_t, N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1>(input_1_1, input_1_3, input_1_4);

    hls::stream<layer256_t> layer256_out("layer256_out");
    //#pragma HLS STREAM variable=layer256_out depth=16900
    nnet::zeropad2d_cl<input_t, layer256_t, config256>(input_1_2, layer256_out); // zp2d_conv2d_102

    hls::stream<layer243_t> layer243_out("layer243_out");
    //#pragma HLS STREAM variable=layer243_out depth=16900
    nnet::zeropad2d_cl<input_t, layer243_t, config243>(input_1_3, layer243_out); // zp2d_conv2d_80

    hls::stream<layer242_t> layer242_out("layer242_out");
    //#pragma HLS STREAM variable=layer242_out depth=16900
    nnet::zeropad2d_cl<input_t, layer242_t, config242>(input_1_4, layer242_out); // zp2d_conv2d_58

    hls::stream<layer2_t> layer2_out("layer2_out");
    //#pragma HLS STREAM variable=layer2_out depth=16384
    nnet::conv_2d_cl<layer242_t, layer2_t, config2>(layer242_out, layer2_out, w2, b2); // conv2d_58

    hls::stream<layer4_t> layer4_out("layer4_out");
    //#pragma HLS STREAM variable=layer4_out depth=16384
    nnet::conv_2d_cl<layer243_t, layer4_t, config4>(layer243_out, layer4_out, w4, b4); // conv2d_80

    hls::stream<layer8_t> layer8_out("layer8_out");
    //#pragma HLS STREAM variable=layer8_out depth=16384
    nnet::relu<layer2_t, layer8_t, relu_config8>(layer2_out, layer8_out); // activation_43

    hls::stream<layer288_t> layer288_cpy1("layer288_cpy1");
    //#pragma HLS STREAM variable=layer288_cpy1 depth=16384
    hls::stream<layer288_t> layer288_cpy2("layer288_cpy2");
    //#pragma HLS STREAM variable=layer288_cpy2 depth=16384
    nnet::clone_stream<layer8_t, layer288_t, 524288>(layer8_out, layer288_cpy1, layer288_cpy2); // clone_activation_43

    hls::stream<layer9_t> layer9_out("layer9_out");
    //#pragma HLS STREAM variable=layer9_out depth=16384
    nnet::relu<layer4_t, layer9_t, relu_config9>(layer4_out, layer9_out); // activation_60

    hls::stream<layer289_t> layer289_cpy1("layer289_cpy1");
    //#pragma HLS STREAM variable=layer289_cpy1 depth=16384
    hls::stream<layer289_t> layer289_cpy2("layer289_cpy2");
    //#pragma HLS STREAM variable=layer289_cpy2 depth=16384
    nnet::clone_stream<layer9_t, layer289_t, 524288>(layer9_out, layer289_cpy1, layer289_cpy2); // clone_activation_60

    hls::stream<layer10_t> layer10_out("layer10_out");
    //#pragma HLS STREAM variable=layer10_out depth=4096
    nnet::pooling2d_cl<layer288_t, layer10_t, config10>(layer288_cpy1, layer10_out); // max_pooling2d_12

    hls::stream<layer244_t> layer244_out("layer244_out");
    //#pragma HLS STREAM variable=layer244_out depth=4356
    nnet::zeropad2d_cl<layer10_t, layer244_t, config244>(layer10_out, layer244_out); // zp2d_conv2d_59

    hls::stream<layer11_t> layer11_out("layer11_out");
    //#pragma HLS STREAM variable=layer11_out depth=4096
    nnet::pooling2d_cl<layer289_t, layer11_t, config11>(layer289_cpy1, layer11_out); // max_pooling2d_16

    hls::stream<layer245_t> layer245_out("layer245_out");
    //#pragma HLS STREAM variable=layer245_out depth=4356
    nnet::zeropad2d_cl<layer11_t, layer245_t, config245>(layer11_out, layer245_out); // zp2d_conv2d_81

    hls::stream<layer12_t> layer12_out("layer12_out");
    //#pragma HLS STREAM variable=layer12_out depth=4096
    nnet::conv_2d_cl<layer244_t, layer12_t, config12>(layer244_out, layer12_out, w12, b12); // conv2d_59

    hls::stream<layer14_t> layer14_out("layer14_out");
    //#pragma HLS STREAM variable=layer14_out depth=4096
    nnet::conv_2d_cl<layer245_t, layer14_t, config14>(layer245_out, layer14_out, w14, b14); // conv2d_81

    hls::stream<layer18_t> layer18_out("layer18_out");
    //#pragma HLS STREAM variable=layer18_out depth=4096
    nnet::relu<layer12_t, layer18_t, relu_config18>(layer12_out, layer18_out); // activation_44

    hls::stream<layer246_t> layer246_out("layer246_out");
    //#pragma HLS STREAM variable=layer246_out depth=4356
    nnet::zeropad2d_cl<layer18_t, layer246_t, config246>(layer18_out, layer246_out); // zp2d_conv2d_60

    hls::stream<layer19_t> layer19_out("layer19_out");
    //#pragma HLS STREAM variable=layer19_out depth=4096
    nnet::relu<layer14_t, layer19_t, relu_config19>(layer14_out, layer19_out); // activation_61

    hls::stream<layer247_t> layer247_out("layer247_out");
    //#pragma HLS STREAM variable=layer247_out depth=4356
    nnet::zeropad2d_cl<layer19_t, layer247_t, config247>(layer19_out, layer247_out); // zp2d_conv2d_82

    hls::stream<layer20_t> layer20_out("layer20_out");
    //#pragma HLS STREAM variable=layer20_out depth=4096
    nnet::conv_2d_cl<layer246_t, layer20_t, config20>(layer246_out, layer20_out, w20, b20); // conv2d_60

    hls::stream<layer22_t> layer22_out("layer22_out");
    //#pragma HLS STREAM variable=layer22_out depth=4096
    nnet::conv_2d_cl<layer247_t, layer22_t, config22>(layer247_out, layer22_out, w22, b22); // conv2d_82

    hls::stream<layer26_t> layer26_out("layer26_out");
    //#pragma HLS STREAM variable=layer26_out depth=4096
    nnet::relu<layer20_t, layer26_t, relu_config26>(layer20_out, layer26_out); // activation_45

    hls::stream<layer290_t> layer290_cpy1("layer290_cpy1");
    //#pragma HLS STREAM variable=layer290_cpy1 depth=4096
    hls::stream<layer290_t> layer290_cpy2("layer290_cpy2");
    //#pragma HLS STREAM variable=layer290_cpy2 depth=4096
    nnet::clone_stream<layer26_t, layer290_t, 262144>(layer26_out, layer290_cpy1, layer290_cpy2); // clone_activation_45

    hls::stream<layer27_t> layer27_out("layer27_out");
    //#pragma HLS STREAM variable=layer27_out depth=4096
    nnet::relu<layer22_t, layer27_t, relu_config27>(layer22_out, layer27_out); // activation_62

    hls::stream<layer291_t> layer291_cpy1("layer291_cpy1");
    //#pragma HLS STREAM variable=layer291_cpy1 depth=4096
    hls::stream<layer291_t> layer291_cpy2("layer291_cpy2");
    //#pragma HLS STREAM variable=layer291_cpy2 depth=4096
    nnet::clone_stream<layer27_t, layer291_t, 262144>(layer27_out, layer291_cpy1, layer291_cpy2); // clone_activation_62

    hls::stream<layer28_t> layer28_out("layer28_out");
    //#pragma HLS STREAM variable=layer28_out depth=1024
    nnet::pooling2d_cl<layer290_t, layer28_t, config28>(layer290_cpy1, layer28_out); // max_pooling2d_13

    hls::stream<layer248_t> layer248_out("layer248_out");
    //#pragma HLS STREAM variable=layer248_out depth=1156
    nnet::zeropad2d_cl<layer28_t, layer248_t, config248>(layer28_out, layer248_out); // zp2d_conv2d_61

    hls::stream<layer29_t> layer29_out("layer29_out");
    //#pragma HLS STREAM variable=layer29_out depth=1024
    nnet::pooling2d_cl<layer291_t, layer29_t, config29>(layer291_cpy1, layer29_out); // max_pooling2d_17

    hls::stream<layer249_t> layer249_out("layer249_out");
    //#pragma HLS STREAM variable=layer249_out depth=1156
    nnet::zeropad2d_cl<layer29_t, layer249_t, config249>(layer29_out, layer249_out); // zp2d_conv2d_83

    hls::stream<layer30_t> layer30_out("layer30_out");
    //#pragma HLS STREAM variable=layer30_out depth=1024
    nnet::conv_2d_cl<layer248_t, layer30_t, config30>(layer248_out, layer30_out, w30, b30); // conv2d_61

    hls::stream<layer32_t> layer32_out("layer32_out");
    //#pragma HLS STREAM variable=layer32_out depth=1024
    nnet::conv_2d_cl<layer249_t, layer32_t, config32>(layer249_out, layer32_out, w32, b32); // conv2d_83

    hls::stream<layer36_t> layer36_out("layer36_out");
    //#pragma HLS STREAM variable=layer36_out depth=1024
    nnet::relu<layer30_t, layer36_t, relu_config36>(layer30_out, layer36_out); // activation_46

    hls::stream<layer250_t> layer250_out("layer250_out");
    //#pragma HLS STREAM variable=layer250_out depth=1156
    nnet::zeropad2d_cl<layer36_t, layer250_t, config250>(layer36_out, layer250_out); // zp2d_conv2d_62

    hls::stream<layer37_t> layer37_out("layer37_out");
    //#pragma HLS STREAM variable=layer37_out depth=1024
    nnet::relu<layer32_t, layer37_t, relu_config37>(layer32_out, layer37_out); // activation_63

    hls::stream<layer251_t> layer251_out("layer251_out");
    //#pragma HLS STREAM variable=layer251_out depth=1156
    nnet::zeropad2d_cl<layer37_t, layer251_t, config251>(layer37_out, layer251_out); // zp2d_conv2d_84

    hls::stream<layer38_t> layer38_out("layer38_out");
    //#pragma HLS STREAM variable=layer38_out depth=1024
    nnet::conv_2d_cl<layer250_t, layer38_t, config38>(layer250_out, layer38_out, w38, b38); // conv2d_62

    hls::stream<layer40_t> layer40_out("layer40_out");
    //#pragma HLS STREAM variable=layer40_out depth=1024
    nnet::conv_2d_cl<layer251_t, layer40_t, config40>(layer251_out, layer40_out, w40, b40); // conv2d_84

    hls::stream<layer44_t> layer44_out("layer44_out");
    //#pragma HLS STREAM variable=layer44_out depth=1024
    nnet::relu<layer38_t, layer44_t, relu_config44>(layer38_out, layer44_out); // activation_47

    hls::stream<layer292_t> layer292_cpy1("layer292_cpy1");
    //#pragma HLS STREAM variable=layer292_cpy1 depth=1024
    hls::stream<layer292_t> layer292_cpy2("layer292_cpy2");
    //#pragma HLS STREAM variable=layer292_cpy2 depth=1024
    nnet::clone_stream<layer44_t, layer292_t, 131072>(layer44_out, layer292_cpy1, layer292_cpy2); // clone_activation_47

    hls::stream<layer45_t> layer45_out("layer45_out");
    //#pragma HLS STREAM variable=layer45_out depth=1024
    nnet::relu<layer40_t, layer45_t, relu_config45>(layer40_out, layer45_out); // activation_64

    hls::stream<layer293_t> layer293_cpy1("layer293_cpy1");
    //#pragma HLS STREAM variable=layer293_cpy1 depth=1024
    hls::stream<layer293_t> layer293_cpy2("layer293_cpy2");
    //#pragma HLS STREAM variable=layer293_cpy2 depth=1024
    nnet::clone_stream<layer45_t, layer293_t, 131072>(layer45_out, layer293_cpy1, layer293_cpy2); // clone_activation_64

    hls::stream<layer46_t> layer46_out("layer46_out");
    //#pragma HLS STREAM variable=layer46_out depth=256
    nnet::pooling2d_cl<layer292_t, layer46_t, config46>(layer292_cpy1, layer46_out); // max_pooling2d_14

    hls::stream<layer252_t> layer252_out("layer252_out");
    //#pragma HLS STREAM variable=layer252_out depth=324
    nnet::zeropad2d_cl<layer46_t, layer252_t, config252>(layer46_out, layer252_out); // zp2d_conv2d_63

    hls::stream<layer47_t> layer47_out("layer47_out");
    //#pragma HLS STREAM variable=layer47_out depth=256
    nnet::pooling2d_cl<layer293_t, layer47_t, config47>(layer293_cpy1, layer47_out); // max_pooling2d_18

    hls::stream<layer253_t> layer253_out("layer253_out");
    //#pragma HLS STREAM variable=layer253_out depth=324
    nnet::zeropad2d_cl<layer47_t, layer253_t, config253>(layer47_out, layer253_out); // zp2d_conv2d_85

    hls::stream<layer48_t> layer48_out("layer48_out");
    //#pragma HLS STREAM variable=layer48_out depth=256
    nnet::conv_2d_cl<layer252_t, layer48_t, config48>(layer252_out, layer48_out, w48, b48); // conv2d_63

    hls::stream<layer50_t> layer50_out("layer50_out");
    //#pragma HLS STREAM variable=layer50_out depth=256
    nnet::conv_2d_cl<layer253_t, layer50_t, config50>(layer253_out, layer50_out, w50, b50); // conv2d_85

    hls::stream<layer54_t> layer54_out("layer54_out");
    //#pragma HLS STREAM variable=layer54_out depth=256
    nnet::relu<layer48_t, layer54_t, relu_config54>(layer48_out, layer54_out); // activation_48

    hls::stream<layer254_t> layer254_out("layer254_out");
    //#pragma HLS STREAM variable=layer254_out depth=324
    nnet::zeropad2d_cl<layer54_t, layer254_t, config254>(layer54_out, layer254_out); // zp2d_conv2d_64

    hls::stream<layer55_t> layer55_out("layer55_out");
    //#pragma HLS STREAM variable=layer55_out depth=256
    nnet::relu<layer50_t, layer55_t, relu_config55>(layer50_out, layer55_out); // activation_65

    hls::stream<layer255_t> layer255_out("layer255_out");
    //#pragma HLS STREAM variable=layer255_out depth=324
    nnet::zeropad2d_cl<layer55_t, layer255_t, config255>(layer55_out, layer255_out); // zp2d_conv2d_86

    hls::stream<layer56_t> layer56_out("layer56_out");
    //#pragma HLS STREAM variable=layer56_out depth=256
    nnet::conv_2d_cl<layer254_t, layer56_t, config56>(layer254_out, layer56_out, w56, b56); // conv2d_64

    hls::stream<layer58_t> layer58_out("layer58_out");
    //#pragma HLS STREAM variable=layer58_out depth=256
    nnet::conv_2d_cl<layer255_t, layer58_t, config58>(layer255_out, layer58_out, w58, b58); // conv2d_86

    hls::stream<layer62_t> layer62_out("layer62_out");
    //#pragma HLS STREAM variable=layer62_out depth=256
    nnet::relu<layer56_t, layer62_t, relu_config62>(layer56_out, layer62_out); // activation_49

    hls::stream<layer294_t> layer294_cpy1("layer294_cpy1");
    //#pragma HLS STREAM variable=layer294_cpy1 depth=256
    hls::stream<layer294_t> layer294_cpy2("layer294_cpy2");
    //#pragma HLS STREAM variable=layer294_cpy2 depth=256
    nnet::clone_stream<layer62_t, layer294_t, 65536>(layer62_out, layer294_cpy1, layer294_cpy2); // clone_activation_49

    hls::stream<layer63_t> layer63_out("layer63_out");
    //#pragma HLS STREAM variable=layer63_out depth=256
    nnet::relu<layer58_t, layer63_t, relu_config63>(layer58_out, layer63_out); // activation_66

    hls::stream<layer295_t> layer295_cpy1("layer295_cpy1");
    //#pragma HLS STREAM variable=layer295_cpy1 depth=256
    hls::stream<layer295_t> layer295_cpy2("layer295_cpy2");
    //#pragma HLS STREAM variable=layer295_cpy2 depth=256
    nnet::clone_stream<layer63_t, layer295_t, 65536>(layer63_out, layer295_cpy1, layer295_cpy2); // clone_activation_66

    hls::stream<layer64_t> layer64_out("layer64_out");
    //#pragma HLS STREAM variable=layer64_out depth=64
    nnet::pooling2d_cl<layer294_t, layer64_t, config64>(layer294_cpy1, layer64_out); // max_pooling2d_15

    hls::stream<layer257_t> layer257_out("layer257_out");
    //#pragma HLS STREAM variable=layer257_out depth=100
    nnet::zeropad2d_cl<layer64_t, layer257_t, config257>(layer64_out, layer257_out); // zp2d_conv2d_65

    hls::stream<layer65_t> layer65_out("layer65_out");
    //#pragma HLS STREAM variable=layer65_out depth=64
    nnet::pooling2d_cl<layer295_t, layer65_t, config65>(layer295_cpy1, layer65_out); // max_pooling2d_19

    hls::stream<layer258_t> layer258_out("layer258_out");
    //#pragma HLS STREAM variable=layer258_out depth=100
    nnet::zeropad2d_cl<layer65_t, layer258_t, config258>(layer65_out, layer258_out); // zp2d_conv2d_87

    hls::stream<layer66_t> layer66_out("layer66_out");
    //#pragma HLS STREAM variable=layer66_out depth=16384
    nnet::conv_2d_cl<layer256_t, layer66_t, config66>(layer256_out, layer66_out, w66, b66); // conv2d_102

    hls::stream<layer68_t> layer68_out("layer68_out");
    //#pragma HLS STREAM variable=layer68_out depth=64
    nnet::conv_2d_cl<layer257_t, layer68_t, config68>(layer257_out, layer68_out, w68, b68); // conv2d_65

    hls::stream<layer70_t> layer70_out("layer70_out");
    //#pragma HLS STREAM variable=layer70_out depth=64
    nnet::conv_2d_cl<layer258_t, layer70_t, config70>(layer258_out, layer70_out, w70, b70); // conv2d_87

    hls::stream<layer75_t> layer75_out("layer75_out");
    //#pragma HLS STREAM variable=layer75_out depth=16384
    nnet::relu<layer66_t, layer75_t, relu_config75>(layer66_out, layer75_out); // activation_77

    hls::stream<layer296_t> layer296_cpy1("layer296_cpy1");
    //#pragma HLS STREAM variable=layer296_cpy1 depth=16384
    hls::stream<layer296_t> layer296_cpy2("layer296_cpy2");
    //#pragma HLS STREAM variable=layer296_cpy2 depth=16384
    nnet::clone_stream<layer75_t, layer296_t, 524288>(layer75_out, layer296_cpy1, layer296_cpy2); // clone_activation_77

    hls::stream<layer76_t> layer76_out("layer76_out");
    //#pragma HLS STREAM variable=layer76_out depth=64
    nnet::relu<layer68_t, layer76_t, relu_config76>(layer68_out, layer76_out); // activation_50

    hls::stream<layer259_t> layer259_out("layer259_out");
    //#pragma HLS STREAM variable=layer259_out depth=100
    nnet::zeropad2d_cl<layer76_t, layer259_t, config259>(layer76_out, layer259_out); // zp2d_conv2d_66

    hls::stream<layer77_t> layer77_out("layer77_out");
    //#pragma HLS STREAM variable=layer77_out depth=64
    nnet::relu<layer70_t, layer77_t, relu_config77>(layer70_out, layer77_out); // activation_67

    hls::stream<layer260_t> layer260_out("layer260_out");
    //#pragma HLS STREAM variable=layer260_out depth=100
    nnet::zeropad2d_cl<layer77_t, layer260_t, config260>(layer77_out, layer260_out); // zp2d_conv2d_88

    hls::stream<layer78_t> layer78_out("layer78_out");
    //#pragma HLS STREAM variable=layer78_out depth=4096
    nnet::pooling2d_cl<layer296_t, layer78_t, config78>(layer296_cpy1, layer78_out); // max_pooling2d_20

    hls::stream<layer261_t> layer261_out("layer261_out");
    //#pragma HLS STREAM variable=layer261_out depth=4356
    nnet::zeropad2d_cl<layer78_t, layer261_t, config261>(layer78_out, layer261_out); // zp2d_conv2d_103

    hls::stream<layer79_t> layer79_out("layer79_out");
    //#pragma HLS STREAM variable=layer79_out depth=64
    nnet::conv_2d_cl<layer259_t, layer79_t, config79>(layer259_out, layer79_out, w79, b79); // conv2d_66

    hls::stream<layer81_t> layer81_out("layer81_out");
    //#pragma HLS STREAM variable=layer81_out depth=64
    nnet::conv_2d_cl<layer260_t, layer81_t, config81>(layer260_out, layer81_out, w81, b81); // conv2d_88

    hls::stream<layer83_t> layer83_out("layer83_out");
    //#pragma HLS STREAM variable=layer83_out depth=4096
    nnet::conv_2d_cl<layer261_t, layer83_t, config83>(layer261_out, layer83_out, w83, b83); // conv2d_103

    hls::stream<layer88_t> layer88_out("layer88_out");
    //#pragma HLS STREAM variable=layer88_out depth=64
    nnet::relu<layer79_t, layer88_t, relu_config88>(layer79_out, layer88_out); // activation_51

    hls::stream<layer89_t> layer89_out("layer89_out");
    //#pragma HLS STREAM variable=layer89_out depth=64
    nnet::relu<layer81_t, layer89_t, relu_config89>(layer81_out, layer89_out); // activation_68

    hls::stream<layer90_t> layer90_out("layer90_out");
    //#pragma HLS STREAM variable=layer90_out depth=4096
    nnet::relu<layer83_t, layer90_t, relu_config90>(layer83_out, layer90_out); // activation_78

    hls::stream<layer297_t> layer297_cpy1("layer297_cpy1");
    //#pragma HLS STREAM variable=layer297_cpy1 depth=4096
    hls::stream<layer297_t> layer297_cpy2("layer297_cpy2");
    //#pragma HLS STREAM variable=layer297_cpy2 depth=4096
    nnet::clone_stream<layer90_t, layer297_t, 262144>(layer90_out, layer297_cpy1, layer297_cpy2); // clone_activation_78

    hls::stream<layer91_t> layer91_out("layer91_out");
    //#pragma HLS STREAM variable=layer91_out depth=1024
    nnet::resize_nearest<layer88_t, config91>(layer88_out, layer91_out); // up_sampling2d_12

    hls::stream<layer92_t> layer92_out("layer92_out");
    //#pragma HLS STREAM variable=layer92_out depth=1024
    nnet::resize_nearest<layer89_t, config92>(layer89_out, layer92_out); // up_sampling2d_16

    hls::stream<layer93_t> layer93_out("layer93_out");
    //#pragma HLS STREAM variable=layer93_out depth=1024
    nnet::pooling2d_cl<layer297_t, layer93_t, config93>(layer297_cpy1, layer93_out); // max_pooling2d_21

    hls::stream<layer262_t> layer262_out("layer262_out");
    //#pragma HLS STREAM variable=layer262_out depth=1156
    nnet::zeropad2d_cl<layer93_t, layer262_t, config262>(layer93_out, layer262_out); // zp2d_conv2d_104

    hls::stream<layer94_t> layer94_out("layer94_out");
    //#pragma HLS STREAM variable=layer94_out depth=256
    nnet::conv_2d_cl<layer91_t, layer94_t, config94>(layer91_out, layer94_out, w94, b94); // conv2d_67

    hls::stream<layer96_t> layer96_out("layer96_out");
    //#pragma HLS STREAM variable=layer96_out depth=256
    nnet::conv_2d_cl<layer92_t, layer96_t, config96>(layer92_out, layer96_out, w96, b96); // conv2d_89

    hls::stream<layer98_t> layer98_out("layer98_out");
    //#pragma HLS STREAM variable=layer98_out depth=1024
    nnet::conv_2d_cl<layer262_t, layer98_t, config98>(layer262_out, layer98_out, w98, b98); // conv2d_104

    hls::stream<layer100_t> layer100_out("layer100_out");
    //#pragma HLS STREAM variable=layer100_out depth=256
    nnet::concatenate3d<layer94_t, layer294_t, layer100_t, config100>(layer94_out, layer294_cpy2, layer100_out); // concatenate_14

    hls::stream<layer263_t> layer263_out("layer263_out");
    //#pragma HLS STREAM variable=layer263_out depth=324
    nnet::zeropad2d_cl<layer100_t, layer263_t, config263>(layer100_out, layer263_out); // zp2d_conv2d_68

    hls::stream<layer101_t> layer101_out("layer101_out");
    //#pragma HLS STREAM variable=layer101_out depth=256
    nnet::concatenate3d<layer96_t, layer295_t, layer101_t, config101>(layer96_out, layer295_cpy2, layer101_out); // concatenate_18

    hls::stream<layer264_t> layer264_out("layer264_out");
    //#pragma HLS STREAM variable=layer264_out depth=324
    nnet::zeropad2d_cl<layer101_t, layer264_t, config264>(layer101_out, layer264_out); // zp2d_conv2d_90

    hls::stream<layer103_t> layer103_out("layer103_out");
    //#pragma HLS STREAM variable=layer103_out depth=256
    nnet::conv_2d_cl<layer263_t, layer103_t, config103>(layer263_out, layer103_out, w103, b103); // conv2d_68

    hls::stream<layer105_t> layer105_out("layer105_out");
    //#pragma HLS STREAM variable=layer105_out depth=256
    nnet::conv_2d_cl<layer264_t, layer105_t, config105>(layer264_out, layer105_out, w105, b105); // conv2d_90

    hls::stream<layer107_t> layer107_out("layer107_out");
    //#pragma HLS STREAM variable=layer107_out depth=1024
    nnet::relu<layer98_t, layer107_t, relu_config107>(layer98_out, layer107_out); // activation_79

    hls::stream<layer298_t> layer298_cpy1("layer298_cpy1");
    //#pragma HLS STREAM variable=layer298_cpy1 depth=1024
    hls::stream<layer298_t> layer298_cpy2("layer298_cpy2");
    //#pragma HLS STREAM variable=layer298_cpy2 depth=1024
    nnet::clone_stream<layer107_t, layer298_t, 131072>(layer107_out, layer298_cpy1, layer298_cpy2); // clone_activation_79

    hls::stream<layer110_t> layer110_out("layer110_out");
    //#pragma HLS STREAM variable=layer110_out depth=256
    nnet::pooling2d_cl<layer298_t, layer110_t, config110>(layer298_cpy1, layer110_out); // max_pooling2d_22

    hls::stream<layer265_t> layer265_out("layer265_out");
    //#pragma HLS STREAM variable=layer265_out depth=324
    nnet::zeropad2d_cl<layer110_t, layer265_t, config265>(layer110_out, layer265_out); // zp2d_conv2d_105

    hls::stream<layer111_t> layer111_out("layer111_out");
    //#pragma HLS STREAM variable=layer111_out depth=256
    nnet::relu<layer103_t, layer111_t, relu_config111>(layer103_out, layer111_out); // activation_52

    hls::stream<layer266_t> layer266_out("layer266_out");
    //#pragma HLS STREAM variable=layer266_out depth=324
    nnet::zeropad2d_cl<layer111_t, layer266_t, config266>(layer111_out, layer266_out); // zp2d_conv2d_69

    hls::stream<layer112_t> layer112_out("layer112_out");
    //#pragma HLS STREAM variable=layer112_out depth=256
    nnet::relu<layer105_t, layer112_t, relu_config112>(layer105_out, layer112_out); // activation_69

    hls::stream<layer267_t> layer267_out("layer267_out");
    //#pragma HLS STREAM variable=layer267_out depth=324
    nnet::zeropad2d_cl<layer112_t, layer267_t, config267>(layer112_out, layer267_out); // zp2d_conv2d_91

    hls::stream<layer113_t> layer113_out("layer113_out");
    //#pragma HLS STREAM variable=layer113_out depth=256
    nnet::conv_2d_cl<layer265_t, layer113_t, config113>(layer265_out, layer113_out, w113, b113); // conv2d_105

    hls::stream<layer115_t> layer115_out("layer115_out");
    //#pragma HLS STREAM variable=layer115_out depth=256
    nnet::conv_2d_cl<layer266_t, layer115_t, config115>(layer266_out, layer115_out, w115, b115); // conv2d_69

    hls::stream<layer117_t> layer117_out("layer117_out");
    //#pragma HLS STREAM variable=layer117_out depth=256
    nnet::conv_2d_cl<layer267_t, layer117_t, config117>(layer267_out, layer117_out, w117, b117); // conv2d_91

    hls::stream<layer122_t> layer122_out("layer122_out");
    //#pragma HLS STREAM variable=layer122_out depth=256
    nnet::relu<layer113_t, layer122_t, relu_config122>(layer113_out, layer122_out); // activation_80

    hls::stream<layer299_t> layer299_cpy1("layer299_cpy1");
    //#pragma HLS STREAM variable=layer299_cpy1 depth=256
    hls::stream<layer299_t> layer299_cpy2("layer299_cpy2");
    //#pragma HLS STREAM variable=layer299_cpy2 depth=256
    nnet::clone_stream<layer122_t, layer299_t, 65536>(layer122_out, layer299_cpy1, layer299_cpy2); // clone_activation_80

    hls::stream<layer123_t> layer123_out("layer123_out");
    //#pragma HLS STREAM variable=layer123_out depth=256
    nnet::relu<layer115_t, layer123_t, relu_config123>(layer115_out, layer123_out); // activation_53

    hls::stream<layer124_t> layer124_out("layer124_out");
    //#pragma HLS STREAM variable=layer124_out depth=256
    nnet::relu<layer117_t, layer124_t, relu_config124>(layer117_out, layer124_out); // activation_70

    hls::stream<layer125_t> layer125_out("layer125_out");
    //#pragma HLS STREAM variable=layer125_out depth=64
    nnet::pooling2d_cl<layer299_t, layer125_t, config125>(layer299_cpy1, layer125_out); // max_pooling2d_23

    hls::stream<layer268_t> layer268_out("layer268_out");
    //#pragma HLS STREAM variable=layer268_out depth=100
    nnet::zeropad2d_cl<layer125_t, layer268_t, config268>(layer125_out, layer268_out); // zp2d_conv2d_106

    hls::stream<layer126_t> layer126_out("layer126_out");
    //#pragma HLS STREAM variable=layer126_out depth=4096
    nnet::resize_nearest<layer123_t, config126>(layer123_out, layer126_out); // up_sampling2d_13

    hls::stream<layer127_t> layer127_out("layer127_out");
    //#pragma HLS STREAM variable=layer127_out depth=4096
    nnet::resize_nearest<layer124_t, config127>(layer124_out, layer127_out); // up_sampling2d_17

    hls::stream<layer128_t> layer128_out("layer128_out");
    //#pragma HLS STREAM variable=layer128_out depth=64
    nnet::conv_2d_cl<layer268_t, layer128_t, config128>(layer268_out, layer128_out, w128, b128); // conv2d_106

    hls::stream<layer130_t> layer130_out("layer130_out");
    //#pragma HLS STREAM variable=layer130_out depth=1024
    nnet::conv_2d_cl<layer126_t, layer130_t, config130>(layer126_out, layer130_out, w130, b130); // conv2d_70

    hls::stream<layer132_t> layer132_out("layer132_out");
    //#pragma HLS STREAM variable=layer132_out depth=1024
    nnet::conv_2d_cl<layer127_t, layer132_t, config132>(layer127_out, layer132_out, w132, b132); // conv2d_92

    hls::stream<layer135_t> layer135_out("layer135_out");
    //#pragma HLS STREAM variable=layer135_out depth=1024
    nnet::concatenate3d<layer130_t, layer292_t, layer135_t, config135>(layer130_out, layer292_cpy2, layer135_out); // concatenate_15

    hls::stream<layer269_t> layer269_out("layer269_out");
    //#pragma HLS STREAM variable=layer269_out depth=1156
    nnet::zeropad2d_cl<layer135_t, layer269_t, config269>(layer135_out, layer269_out); // zp2d_conv2d_71

    hls::stream<layer136_t> layer136_out("layer136_out");
    //#pragma HLS STREAM variable=layer136_out depth=1024
    nnet::concatenate3d<layer132_t, layer293_t, layer136_t, config136>(layer132_out, layer293_cpy2, layer136_out); // concatenate_19

    hls::stream<layer270_t> layer270_out("layer270_out");
    //#pragma HLS STREAM variable=layer270_out depth=1156
    nnet::zeropad2d_cl<layer136_t, layer270_t, config270>(layer136_out, layer270_out); // zp2d_conv2d_93

    hls::stream<layer137_t> layer137_out("layer137_out");
    //#pragma HLS STREAM variable=layer137_out depth=64
    nnet::relu<layer128_t, layer137_t, relu_config137>(layer128_out, layer137_out); // activation_81

    hls::stream<layer138_t> layer138_out("layer138_out");
    //#pragma HLS STREAM variable=layer138_out depth=1024
    nnet::conv_2d_cl<layer269_t, layer138_t, config138>(layer269_out, layer138_out, w138, b138); // conv2d_71

    hls::stream<layer140_t> layer140_out("layer140_out");
    //#pragma HLS STREAM variable=layer140_out depth=1024
    nnet::conv_2d_cl<layer270_t, layer140_t, config140>(layer270_out, layer140_out, w140, b140); // conv2d_93

    hls::stream<layer142_t> layer142_out("layer142_out");
    //#pragma HLS STREAM variable=layer142_out depth=1024
    nnet::resize_nearest<layer137_t, config142>(layer137_out, layer142_out); // up_sampling2d_20

    hls::stream<layer145_t> layer145_out("layer145_out");
    //#pragma HLS STREAM variable=layer145_out depth=256
    nnet::conv_2d_cl<layer142_t, layer145_t, config145>(layer142_out, layer145_out, w145, b145); // conv2d_107

    hls::stream<layer147_t> layer147_out("layer147_out");
    //#pragma HLS STREAM variable=layer147_out depth=1024
    nnet::relu<layer138_t, layer147_t, relu_config147>(layer138_out, layer147_out); // activation_54

    hls::stream<layer271_t> layer271_out("layer271_out");
    //#pragma HLS STREAM variable=layer271_out depth=1156
    nnet::zeropad2d_cl<layer147_t, layer271_t, config271>(layer147_out, layer271_out); // zp2d_conv2d_72

    hls::stream<layer148_t> layer148_out("layer148_out");
    //#pragma HLS STREAM variable=layer148_out depth=1024
    nnet::relu<layer140_t, layer148_t, relu_config148>(layer140_out, layer148_out); // activation_71

    hls::stream<layer272_t> layer272_out("layer272_out");
    //#pragma HLS STREAM variable=layer272_out depth=1156
    nnet::zeropad2d_cl<layer148_t, layer272_t, config272>(layer148_out, layer272_out); // zp2d_conv2d_94

    hls::stream<layer149_t> layer149_out("layer149_out");
    //#pragma HLS STREAM variable=layer149_out depth=256
    nnet::concatenate3d<layer145_t, layer299_t, layer149_t, config149>(layer145_out, layer299_cpy2, layer149_out); // concatenate_22

    hls::stream<layer273_t> layer273_out("layer273_out");
    //#pragma HLS STREAM variable=layer273_out depth=324
    nnet::zeropad2d_cl<layer149_t, layer273_t, config273>(layer149_out, layer273_out); // zp2d_conv2d_108

    hls::stream<layer150_t> layer150_out("layer150_out");
    //#pragma HLS STREAM variable=layer150_out depth=1024
    nnet::conv_2d_cl<layer271_t, layer150_t, config150>(layer271_out, layer150_out, w150, b150); // conv2d_72

    hls::stream<layer152_t> layer152_out("layer152_out");
    //#pragma HLS STREAM variable=layer152_out depth=1024
    nnet::conv_2d_cl<layer272_t, layer152_t, config152>(layer272_out, layer152_out, w152, b152); // conv2d_94

    hls::stream<layer154_t> layer154_out("layer154_out");
    //#pragma HLS STREAM variable=layer154_out depth=256
    nnet::conv_2d_cl<layer273_t, layer154_t, config154>(layer273_out, layer154_out, w154, b154); // conv2d_108

    hls::stream<layer159_t> layer159_out("layer159_out");
    //#pragma HLS STREAM variable=layer159_out depth=1024
    nnet::relu<layer150_t, layer159_t, relu_config159>(layer150_out, layer159_out); // activation_55

    hls::stream<layer160_t> layer160_out("layer160_out");
    //#pragma HLS STREAM variable=layer160_out depth=1024
    nnet::relu<layer152_t, layer160_t, relu_config160>(layer152_out, layer160_out); // activation_72

    hls::stream<layer161_t> layer161_out("layer161_out");
    //#pragma HLS STREAM variable=layer161_out depth=256
    nnet::relu<layer154_t, layer161_t, relu_config161>(layer154_out, layer161_out); // activation_82

    hls::stream<layer162_t> layer162_out("layer162_out");
    //#pragma HLS STREAM variable=layer162_out depth=16384
    nnet::resize_nearest<layer159_t, config162>(layer159_out, layer162_out); // up_sampling2d_14

    hls::stream<layer163_t> layer163_out("layer163_out");
    //#pragma HLS STREAM variable=layer163_out depth=16384
    nnet::resize_nearest<layer160_t, config163>(layer160_out, layer163_out); // up_sampling2d_18

    hls::stream<layer164_t> layer164_out("layer164_out");
    //#pragma HLS STREAM variable=layer164_out depth=4096
    nnet::resize_nearest<layer161_t, config164>(layer161_out, layer164_out); // up_sampling2d_21

    hls::stream<layer165_t> layer165_out("layer165_out");
    //#pragma HLS STREAM variable=layer165_out depth=4096
    nnet::conv_2d_cl<layer162_t, layer165_t, config165>(layer162_out, layer165_out, w165, b165); // conv2d_73

    hls::stream<layer167_t> layer167_out("layer167_out");
    //#pragma HLS STREAM variable=layer167_out depth=4096
    nnet::conv_2d_cl<layer163_t, layer167_t, config167>(layer163_out, layer167_out, w167, b167); // conv2d_95

    hls::stream<layer169_t> layer169_out("layer169_out");
    //#pragma HLS STREAM variable=layer169_out depth=1024
    nnet::conv_2d_cl<layer164_t, layer169_t, config169>(layer164_out, layer169_out, w169, b169); // conv2d_109

    hls::stream<layer171_t> layer171_out("layer171_out");
    //#pragma HLS STREAM variable=layer171_out depth=4096
    nnet::concatenate3d<layer165_t, layer290_t, layer171_t, config171>(layer165_out, layer290_cpy2, layer171_out); // concatenate_16

    hls::stream<layer274_t> layer274_out("layer274_out");
    //#pragma HLS STREAM variable=layer274_out depth=4356
    nnet::zeropad2d_cl<layer171_t, layer274_t, config274>(layer171_out, layer274_out); // zp2d_conv2d_74

    hls::stream<layer172_t> layer172_out("layer172_out");
    //#pragma HLS STREAM variable=layer172_out depth=4096
    nnet::concatenate3d<layer167_t, layer291_t, layer172_t, config172>(layer167_out, layer291_cpy2, layer172_out); // concatenate_20

    hls::stream<layer275_t> layer275_out("layer275_out");
    //#pragma HLS STREAM variable=layer275_out depth=4356
    nnet::zeropad2d_cl<layer172_t, layer275_t, config275>(layer172_out, layer275_out); // zp2d_conv2d_96

    hls::stream<layer173_t> layer173_out("layer173_out");
    //#pragma HLS STREAM variable=layer173_out depth=1024
    nnet::concatenate3d<layer169_t, layer298_t, layer173_t, config173>(layer169_out, layer298_cpy2, layer173_out); // concatenate_23

    hls::stream<layer276_t> layer276_out("layer276_out");
    //#pragma HLS STREAM variable=layer276_out depth=1156
    nnet::zeropad2d_cl<layer173_t, layer276_t, config276>(layer173_out, layer276_out); // zp2d_conv2d_110

    hls::stream<layer174_t> layer174_out("layer174_out");
    //#pragma HLS STREAM variable=layer174_out depth=4096
    nnet::conv_2d_cl<layer274_t, layer174_t, config174>(layer274_out, layer174_out, w174, b174); // conv2d_74

    hls::stream<layer176_t> layer176_out("layer176_out");
    //#pragma HLS STREAM variable=layer176_out depth=4096
    nnet::conv_2d_cl<layer275_t, layer176_t, config176>(layer275_out, layer176_out, w176, b176); // conv2d_96

    hls::stream<layer178_t> layer178_out("layer178_out");
    //#pragma HLS STREAM variable=layer178_out depth=1024
    nnet::conv_2d_cl<layer276_t, layer178_t, config178>(layer276_out, layer178_out, w178, b178); // conv2d_110

    hls::stream<layer183_t> layer183_out("layer183_out");
    //#pragma HLS STREAM variable=layer183_out depth=4096
    nnet::relu<layer174_t, layer183_t, relu_config183>(layer174_out, layer183_out); // activation_56

    hls::stream<layer277_t> layer277_out("layer277_out");
    //#pragma HLS STREAM variable=layer277_out depth=4356
    nnet::zeropad2d_cl<layer183_t, layer277_t, config277>(layer183_out, layer277_out); // zp2d_conv2d_75

    hls::stream<layer184_t> layer184_out("layer184_out");
    //#pragma HLS STREAM variable=layer184_out depth=4096
    nnet::relu<layer176_t, layer184_t, relu_config184>(layer176_out, layer184_out); // activation_73

    hls::stream<layer278_t> layer278_out("layer278_out");
    //#pragma HLS STREAM variable=layer278_out depth=4356
    nnet::zeropad2d_cl<layer184_t, layer278_t, config278>(layer184_out, layer278_out); // zp2d_conv2d_97

    hls::stream<layer185_t> layer185_out("layer185_out");
    //#pragma HLS STREAM variable=layer185_out depth=1024
    nnet::relu<layer178_t, layer185_t, relu_config185>(layer178_out, layer185_out); // activation_83

    hls::stream<layer186_t> layer186_out("layer186_out");
    //#pragma HLS STREAM variable=layer186_out depth=4096
    nnet::conv_2d_cl<layer277_t, layer186_t, config186>(layer277_out, layer186_out, w186, b186); // conv2d_75

    hls::stream<layer188_t> layer188_out("layer188_out");
    //#pragma HLS STREAM variable=layer188_out depth=4096
    nnet::conv_2d_cl<layer278_t, layer188_t, config188>(layer278_out, layer188_out, w188, b188); // conv2d_97

    hls::stream<layer190_t> layer190_out("layer190_out");
    //#pragma HLS STREAM variable=layer190_out depth=16384
    nnet::resize_nearest<layer185_t, config190>(layer185_out, layer190_out); // up_sampling2d_22

    hls::stream<layer193_t> layer193_out("layer193_out");
    //#pragma HLS STREAM variable=layer193_out depth=4096
    nnet::conv_2d_cl<layer190_t, layer193_t, config193>(layer190_out, layer193_out, w193, b193); // conv2d_111

    hls::stream<layer195_t> layer195_out("layer195_out");
    //#pragma HLS STREAM variable=layer195_out depth=4096
    nnet::relu<layer186_t, layer195_t, relu_config195>(layer186_out, layer195_out); // activation_57

    hls::stream<layer196_t> layer196_out("layer196_out");
    //#pragma HLS STREAM variable=layer196_out depth=4096
    nnet::relu<layer188_t, layer196_t, relu_config196>(layer188_out, layer196_out); // activation_74

    hls::stream<layer197_t> layer197_out("layer197_out");
    //#pragma HLS STREAM variable=layer197_out depth=4096
    nnet::concatenate3d<layer193_t, layer297_t, layer197_t, config197>(layer193_out, layer297_cpy2, layer197_out); // concatenate_24

    hls::stream<layer279_t> layer279_out("layer279_out");
    //#pragma HLS STREAM variable=layer279_out depth=4356
    nnet::zeropad2d_cl<layer197_t, layer279_t, config279>(layer197_out, layer279_out); // zp2d_conv2d_112

    hls::stream<layer198_t> layer198_out("layer198_out");
    //#pragma HLS STREAM variable=layer198_out depth=65536
    nnet::resize_nearest<layer195_t, config198>(layer195_out, layer198_out); // up_sampling2d_15

    hls::stream<layer199_t> layer199_out("layer199_out");
    //#pragma HLS STREAM variable=layer199_out depth=65536
    nnet::resize_nearest<layer196_t, config199>(layer196_out, layer199_out); // up_sampling2d_19

    hls::stream<layer200_t> layer200_out("layer200_out");
    //#pragma HLS STREAM variable=layer200_out depth=4096
    nnet::conv_2d_cl<layer279_t, layer200_t, config200>(layer279_out, layer200_out, w200, b200); // conv2d_112

    hls::stream<layer202_t> layer202_out("layer202_out");
    //#pragma HLS STREAM variable=layer202_out depth=16384
    nnet::conv_2d_cl<layer198_t, layer202_t, config202>(layer198_out, layer202_out, w202, b202); // conv2d_76

    hls::stream<layer204_t> layer204_out("layer204_out");
    //#pragma HLS STREAM variable=layer204_out depth=16384
    nnet::conv_2d_cl<layer199_t, layer204_t, config204>(layer199_out, layer204_out, w204, b204); // conv2d_98

    hls::stream<layer207_t> layer207_out("layer207_out");
    //#pragma HLS STREAM variable=layer207_out depth=16384
    nnet::concatenate3d<layer202_t, layer288_t, layer207_t, config207>(layer202_out, layer288_cpy2, layer207_out); // concatenate_17

    hls::stream<layer280_t> layer280_out("layer280_out");
    //#pragma HLS STREAM variable=layer280_out depth=16900
    nnet::zeropad2d_cl<layer207_t, layer280_t, config280>(layer207_out, layer280_out); // zp2d_conv2d_77

    hls::stream<layer208_t> layer208_out("layer208_out");
    //#pragma HLS STREAM variable=layer208_out depth=16384
    nnet::concatenate3d<layer204_t, layer289_t, layer208_t, config208>(layer204_out, layer289_cpy2, layer208_out); // concatenate_21

    hls::stream<layer281_t> layer281_out("layer281_out");
    //#pragma HLS STREAM variable=layer281_out depth=16900
    nnet::zeropad2d_cl<layer208_t, layer281_t, config281>(layer208_out, layer281_out); // zp2d_conv2d_99

    hls::stream<layer209_t> layer209_out("layer209_out");
    //#pragma HLS STREAM variable=layer209_out depth=4096
    nnet::relu<layer200_t, layer209_t, relu_config209>(layer200_out, layer209_out); // activation_84

    hls::stream<layer210_t> layer210_out("layer210_out");
    //#pragma HLS STREAM variable=layer210_out depth=16384
    nnet::conv_2d_cl<layer280_t, layer210_t, config210>(layer280_out, layer210_out, w210, b210); // conv2d_77

    hls::stream<layer212_t> layer212_out("layer212_out");
    //#pragma HLS STREAM variable=layer212_out depth=16384
    nnet::conv_2d_cl<layer281_t, layer212_t, config212>(layer281_out, layer212_out, w212, b212); // conv2d_99

    hls::stream<layer214_t> layer214_out("layer214_out");
    //#pragma HLS STREAM variable=layer214_out depth=65536
    nnet::resize_nearest<layer209_t, config214>(layer209_out, layer214_out); // up_sampling2d_23

    hls::stream<layer217_t> layer217_out("layer217_out");
    //#pragma HLS STREAM variable=layer217_out depth=16384
    nnet::conv_2d_cl<layer214_t, layer217_t, config217>(layer214_out, layer217_out, w217, b217); // conv2d_113

    hls::stream<layer219_t> layer219_out("layer219_out");
    //#pragma HLS STREAM variable=layer219_out depth=16384
    nnet::relu<layer210_t, layer219_t, relu_config219>(layer210_out, layer219_out); // activation_58

    hls::stream<layer282_t> layer282_out("layer282_out");
    //#pragma HLS STREAM variable=layer282_out depth=16900
    nnet::zeropad2d_cl<layer219_t, layer282_t, config282>(layer219_out, layer282_out); // zp2d_conv2d_78

    hls::stream<layer220_t> layer220_out("layer220_out");
    //#pragma HLS STREAM variable=layer220_out depth=16384
    nnet::relu<layer212_t, layer220_t, relu_config220>(layer212_out, layer220_out); // activation_75

    hls::stream<layer283_t> layer283_out("layer283_out");
    //#pragma HLS STREAM variable=layer283_out depth=16900
    nnet::zeropad2d_cl<layer220_t, layer283_t, config283>(layer220_out, layer283_out); // zp2d_conv2d_100

    hls::stream<layer221_t> layer221_out("layer221_out");
    //#pragma HLS STREAM variable=layer221_out depth=16384
    nnet::concatenate3d<layer217_t, layer296_t, layer221_t, config221>(layer217_out, layer296_cpy2, layer221_out); // concatenate_25

    hls::stream<layer284_t> layer284_out("layer284_out");
    //#pragma HLS STREAM variable=layer284_out depth=16900
    nnet::zeropad2d_cl<layer221_t, layer284_t, config284>(layer221_out, layer284_out); // zp2d_conv2d_114

    hls::stream<layer222_t> layer222_out("layer222_out");
    //#pragma HLS STREAM variable=layer222_out depth=16384
    nnet::conv_2d_cl<layer282_t, layer222_t, config222>(layer282_out, layer222_out, w222, b222); // conv2d_78

    hls::stream<layer224_t> layer224_out("layer224_out");
    //#pragma HLS STREAM variable=layer224_out depth=16384
    nnet::conv_2d_cl<layer283_t, layer224_t, config224>(layer283_out, layer224_out, w224, b224); // conv2d_100

    hls::stream<layer226_t> layer226_out("layer226_out");
    //#pragma HLS STREAM variable=layer226_out depth=16384
    nnet::conv_2d_cl<layer284_t, layer226_t, config226>(layer284_out, layer226_out, w226, b226); // conv2d_114

    hls::stream<layer231_t> layer231_out("layer231_out");
    //#pragma HLS STREAM variable=layer231_out depth=16384
    nnet::relu<layer222_t, layer231_t, relu_config231>(layer222_out, layer231_out); // activation_59

    hls::stream<layer232_t> layer232_out("layer232_out");
    //#pragma HLS STREAM variable=layer232_out depth=16384
    nnet::relu<layer224_t, layer232_t, relu_config232>(layer224_out, layer232_out); // activation_76

    hls::stream<layer233_t> layer233_out("layer233_out");
    //#pragma HLS STREAM variable=layer233_out depth=16384
    nnet::relu<layer226_t, layer233_t, relu_config233>(layer226_out, layer233_out); // activation_85

    hls::stream<layer285_t> layer285_out("layer285_out");
    //#pragma HLS STREAM variable=layer285_out depth=16384
    nnet::pointwise_conv_2d_cl<layer231_t, layer285_t, config285>(layer231_out, layer285_out, w285, b285); // conv2d_79

    hls::stream<layer286_t> layer286_out("layer286_out");
    //#pragma HLS STREAM variable=layer286_out depth=16384
    nnet::pointwise_conv_2d_cl<layer232_t, layer286_t, config286>(layer232_out, layer286_out, w286, b286); // conv2d_101

    hls::stream<layer287_t> layer287_out("layer287_out");
    //#pragma HLS STREAM variable=layer287_out depth=16384
    nnet::pointwise_conv_2d_cl<layer233_t, layer287_t, config287>(layer233_out, layer287_out, w287, b287); // conv2d_115

    hls::stream<layer240_t> layer240_out("layer240_out");
    //#pragma HLS STREAM variable=layer240_out depth=16384
    nnet::concatenate3d<layer285_t, layer286_t, layer240_t, config240>(layer285_out, layer286_out, layer240_out); // concatenate_26

    nnet::concatenate3d<layer287_t, layer240_t, result_t, config241>(layer287_out, layer240_out, layer241_out); // concatenate_27

}
