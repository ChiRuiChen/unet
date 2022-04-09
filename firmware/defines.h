#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 128
#define N_INPUT_2_1 128
#define N_INPUT_3_1 1
#define OUT_HEIGHT_256 130
#define OUT_WIDTH_256 130
#define N_CHAN_256 1
#define OUT_HEIGHT_243 130
#define OUT_WIDTH_243 130
#define N_CHAN_243 1
#define OUT_HEIGHT_242 130
#define OUT_WIDTH_242 130
#define N_CHAN_242 1
#define OUT_HEIGHT_2 128
#define OUT_WIDTH_2 128
#define N_FILT_2 32
#define OUT_HEIGHT_4 128
#define OUT_WIDTH_4 128
#define N_FILT_4 32
#define OUT_HEIGHT_10 64
#define OUT_WIDTH_10 64
#define N_FILT_10 32
#define OUT_HEIGHT_244 66
#define OUT_WIDTH_244 66
#define N_CHAN_244 32
#define OUT_HEIGHT_11 64
#define OUT_WIDTH_11 64
#define N_FILT_11 32
#define OUT_HEIGHT_245 66
#define OUT_WIDTH_245 66
#define N_CHAN_245 32
#define OUT_HEIGHT_12 64
#define OUT_WIDTH_12 64
#define N_FILT_12 64
#define OUT_HEIGHT_14 64
#define OUT_WIDTH_14 64
#define N_FILT_14 64
#define OUT_HEIGHT_246 66
#define OUT_WIDTH_246 66
#define N_CHAN_246 64
#define OUT_HEIGHT_247 66
#define OUT_WIDTH_247 66
#define N_CHAN_247 64
#define OUT_HEIGHT_20 64
#define OUT_WIDTH_20 64
#define N_FILT_20 64
#define OUT_HEIGHT_22 64
#define OUT_WIDTH_22 64
#define N_FILT_22 64
#define OUT_HEIGHT_28 32
#define OUT_WIDTH_28 32
#define N_FILT_28 64
#define OUT_HEIGHT_248 34
#define OUT_WIDTH_248 34
#define N_CHAN_248 64
#define OUT_HEIGHT_29 32
#define OUT_WIDTH_29 32
#define N_FILT_29 64
#define OUT_HEIGHT_249 34
#define OUT_WIDTH_249 34
#define N_CHAN_249 64
#define OUT_HEIGHT_30 32
#define OUT_WIDTH_30 32
#define N_FILT_30 128
#define OUT_HEIGHT_32 32
#define OUT_WIDTH_32 32
#define N_FILT_32 128
#define OUT_HEIGHT_250 34
#define OUT_WIDTH_250 34
#define N_CHAN_250 128
#define OUT_HEIGHT_251 34
#define OUT_WIDTH_251 34
#define N_CHAN_251 128
#define OUT_HEIGHT_38 32
#define OUT_WIDTH_38 32
#define N_FILT_38 128
#define OUT_HEIGHT_40 32
#define OUT_WIDTH_40 32
#define N_FILT_40 128
#define OUT_HEIGHT_46 16
#define OUT_WIDTH_46 16
#define N_FILT_46 128
#define OUT_HEIGHT_252 18
#define OUT_WIDTH_252 18
#define N_CHAN_252 128
#define OUT_HEIGHT_47 16
#define OUT_WIDTH_47 16
#define N_FILT_47 128
#define OUT_HEIGHT_253 18
#define OUT_WIDTH_253 18
#define N_CHAN_253 128
#define OUT_HEIGHT_48 16
#define OUT_WIDTH_48 16
#define N_FILT_48 256
#define OUT_HEIGHT_50 16
#define OUT_WIDTH_50 16
#define N_FILT_50 256
#define OUT_HEIGHT_254 18
#define OUT_WIDTH_254 18
#define N_CHAN_254 256
#define OUT_HEIGHT_255 18
#define OUT_WIDTH_255 18
#define N_CHAN_255 256
#define OUT_HEIGHT_56 16
#define OUT_WIDTH_56 16
#define N_FILT_56 256
#define OUT_HEIGHT_58 16
#define OUT_WIDTH_58 16
#define N_FILT_58 256
#define OUT_HEIGHT_64 8
#define OUT_WIDTH_64 8
#define N_FILT_64 256
#define OUT_HEIGHT_257 10
#define OUT_WIDTH_257 10
#define N_CHAN_257 256
#define OUT_HEIGHT_65 8
#define OUT_WIDTH_65 8
#define N_FILT_65 256
#define OUT_HEIGHT_258 10
#define OUT_WIDTH_258 10
#define N_CHAN_258 256
#define OUT_HEIGHT_66 128
#define OUT_WIDTH_66 128
#define N_FILT_66 32
#define OUT_HEIGHT_68 8
#define OUT_WIDTH_68 8
#define N_FILT_68 512
#define OUT_HEIGHT_70 8
#define OUT_WIDTH_70 8
#define N_FILT_70 512
#define OUT_HEIGHT_259 10
#define OUT_WIDTH_259 10
#define N_CHAN_259 512
#define OUT_HEIGHT_260 10
#define OUT_WIDTH_260 10
#define N_CHAN_260 512
#define OUT_HEIGHT_78 64
#define OUT_WIDTH_78 64
#define N_FILT_78 32
#define OUT_HEIGHT_261 66
#define OUT_WIDTH_261 66
#define N_CHAN_261 32
#define OUT_HEIGHT_79 8
#define OUT_WIDTH_79 8
#define N_FILT_79 512
#define OUT_HEIGHT_81 8
#define OUT_WIDTH_81 8
#define N_FILT_81 512
#define OUT_HEIGHT_83 64
#define OUT_WIDTH_83 64
#define N_FILT_83 64
#define OUT_HEIGHT_91 32
#define OUT_WIDTH_91 32
#define N_CHAN_91 512
#define OUT_HEIGHT_92 32
#define OUT_WIDTH_92 32
#define N_CHAN_92 512
#define OUT_HEIGHT_93 32
#define OUT_WIDTH_93 32
#define N_FILT_93 64
#define OUT_HEIGHT_262 34
#define OUT_WIDTH_262 34
#define N_CHAN_262 64
#define OUT_HEIGHT_94 16
#define OUT_WIDTH_94 16
#define N_FILT_94 256
#define OUT_HEIGHT_96 16
#define OUT_WIDTH_96 16
#define N_FILT_96 256
#define OUT_HEIGHT_98 32
#define OUT_WIDTH_98 32
#define N_FILT_98 128
#define OUT_CONCAT_0_100 16
#define OUT_CONCAT_1_100 16
#define OUT_CONCAT_2_100 512
#define OUT_HEIGHT_263 18
#define OUT_WIDTH_263 18
#define N_CHAN_263 512
#define OUT_CONCAT_0_101 16
#define OUT_CONCAT_1_101 16
#define OUT_CONCAT_2_101 512
#define OUT_HEIGHT_264 18
#define OUT_WIDTH_264 18
#define N_CHAN_264 512
#define OUT_HEIGHT_103 16
#define OUT_WIDTH_103 16
#define N_FILT_103 256
#define OUT_HEIGHT_105 16
#define OUT_WIDTH_105 16
#define N_FILT_105 256
#define OUT_HEIGHT_110 16
#define OUT_WIDTH_110 16
#define N_FILT_110 128
#define OUT_HEIGHT_265 18
#define OUT_WIDTH_265 18
#define N_CHAN_265 128
#define OUT_HEIGHT_266 18
#define OUT_WIDTH_266 18
#define N_CHAN_266 256
#define OUT_HEIGHT_267 18
#define OUT_WIDTH_267 18
#define N_CHAN_267 256
#define OUT_HEIGHT_113 16
#define OUT_WIDTH_113 16
#define N_FILT_113 256
#define OUT_HEIGHT_115 16
#define OUT_WIDTH_115 16
#define N_FILT_115 256
#define OUT_HEIGHT_117 16
#define OUT_WIDTH_117 16
#define N_FILT_117 256
#define OUT_HEIGHT_125 8
#define OUT_WIDTH_125 8
#define N_FILT_125 256
#define OUT_HEIGHT_268 10
#define OUT_WIDTH_268 10
#define N_CHAN_268 256
#define OUT_HEIGHT_126 64
#define OUT_WIDTH_126 64
#define N_CHAN_126 256
#define OUT_HEIGHT_127 64
#define OUT_WIDTH_127 64
#define N_CHAN_127 256
#define OUT_HEIGHT_128 8
#define OUT_WIDTH_128 8
#define N_FILT_128 512
#define OUT_HEIGHT_130 32
#define OUT_WIDTH_130 32
#define N_FILT_130 128
#define OUT_HEIGHT_132 32
#define OUT_WIDTH_132 32
#define N_FILT_132 128
#define OUT_CONCAT_0_135 32
#define OUT_CONCAT_1_135 32
#define OUT_CONCAT_2_135 256
#define OUT_HEIGHT_269 34
#define OUT_WIDTH_269 34
#define N_CHAN_269 256
#define OUT_CONCAT_0_136 32
#define OUT_CONCAT_1_136 32
#define OUT_CONCAT_2_136 256
#define OUT_HEIGHT_270 34
#define OUT_WIDTH_270 34
#define N_CHAN_270 256
#define OUT_HEIGHT_138 32
#define OUT_WIDTH_138 32
#define N_FILT_138 128
#define OUT_HEIGHT_140 32
#define OUT_WIDTH_140 32
#define N_FILT_140 128
#define OUT_HEIGHT_142 32
#define OUT_WIDTH_142 32
#define N_CHAN_142 512
#define OUT_HEIGHT_145 16
#define OUT_WIDTH_145 16
#define N_FILT_145 256
#define OUT_HEIGHT_271 34
#define OUT_WIDTH_271 34
#define N_CHAN_271 128
#define OUT_HEIGHT_272 34
#define OUT_WIDTH_272 34
#define N_CHAN_272 128
#define OUT_CONCAT_0_149 16
#define OUT_CONCAT_1_149 16
#define OUT_CONCAT_2_149 512
#define OUT_HEIGHT_273 18
#define OUT_WIDTH_273 18
#define N_CHAN_273 512
#define OUT_HEIGHT_150 32
#define OUT_WIDTH_150 32
#define N_FILT_150 128
#define OUT_HEIGHT_152 32
#define OUT_WIDTH_152 32
#define N_FILT_152 128
#define OUT_HEIGHT_154 16
#define OUT_WIDTH_154 16
#define N_FILT_154 256
#define OUT_HEIGHT_162 128
#define OUT_WIDTH_162 128
#define N_CHAN_162 128
#define OUT_HEIGHT_163 128
#define OUT_WIDTH_163 128
#define N_CHAN_163 128
#define OUT_HEIGHT_164 64
#define OUT_WIDTH_164 64
#define N_CHAN_164 256
#define OUT_HEIGHT_165 64
#define OUT_WIDTH_165 64
#define N_FILT_165 64
#define OUT_HEIGHT_167 64
#define OUT_WIDTH_167 64
#define N_FILT_167 64
#define OUT_HEIGHT_169 32
#define OUT_WIDTH_169 32
#define N_FILT_169 128
#define OUT_CONCAT_0_171 64
#define OUT_CONCAT_1_171 64
#define OUT_CONCAT_2_171 128
#define OUT_HEIGHT_274 66
#define OUT_WIDTH_274 66
#define N_CHAN_274 128
#define OUT_CONCAT_0_172 64
#define OUT_CONCAT_1_172 64
#define OUT_CONCAT_2_172 128
#define OUT_HEIGHT_275 66
#define OUT_WIDTH_275 66
#define N_CHAN_275 128
#define OUT_CONCAT_0_173 32
#define OUT_CONCAT_1_173 32
#define OUT_CONCAT_2_173 256
#define OUT_HEIGHT_276 34
#define OUT_WIDTH_276 34
#define N_CHAN_276 256
#define OUT_HEIGHT_174 64
#define OUT_WIDTH_174 64
#define N_FILT_174 64
#define OUT_HEIGHT_176 64
#define OUT_WIDTH_176 64
#define N_FILT_176 64
#define OUT_HEIGHT_178 32
#define OUT_WIDTH_178 32
#define N_FILT_178 128
#define OUT_HEIGHT_277 66
#define OUT_WIDTH_277 66
#define N_CHAN_277 64
#define OUT_HEIGHT_278 66
#define OUT_WIDTH_278 66
#define N_CHAN_278 64
#define OUT_HEIGHT_186 64
#define OUT_WIDTH_186 64
#define N_FILT_186 64
#define OUT_HEIGHT_188 64
#define OUT_WIDTH_188 64
#define N_FILT_188 64
#define OUT_HEIGHT_190 128
#define OUT_WIDTH_190 128
#define N_CHAN_190 128
#define OUT_HEIGHT_193 64
#define OUT_WIDTH_193 64
#define N_FILT_193 64
#define OUT_CONCAT_0_197 64
#define OUT_CONCAT_1_197 64
#define OUT_CONCAT_2_197 128
#define OUT_HEIGHT_279 66
#define OUT_WIDTH_279 66
#define N_CHAN_279 128
#define OUT_HEIGHT_198 256
#define OUT_WIDTH_198 256
#define N_CHAN_198 64
#define OUT_HEIGHT_199 256
#define OUT_WIDTH_199 256
#define N_CHAN_199 64
#define OUT_HEIGHT_200 64
#define OUT_WIDTH_200 64
#define N_FILT_200 64
#define OUT_HEIGHT_202 128
#define OUT_WIDTH_202 128
#define N_FILT_202 32
#define OUT_HEIGHT_204 128
#define OUT_WIDTH_204 128
#define N_FILT_204 32
#define OUT_CONCAT_0_207 128
#define OUT_CONCAT_1_207 128
#define OUT_CONCAT_2_207 64
#define OUT_HEIGHT_280 130
#define OUT_WIDTH_280 130
#define N_CHAN_280 64
#define OUT_CONCAT_0_208 128
#define OUT_CONCAT_1_208 128
#define OUT_CONCAT_2_208 64
#define OUT_HEIGHT_281 130
#define OUT_WIDTH_281 130
#define N_CHAN_281 64
#define OUT_HEIGHT_210 128
#define OUT_WIDTH_210 128
#define N_FILT_210 32
#define OUT_HEIGHT_212 128
#define OUT_WIDTH_212 128
#define N_FILT_212 32
#define OUT_HEIGHT_214 256
#define OUT_WIDTH_214 256
#define N_CHAN_214 64
#define OUT_HEIGHT_217 128
#define OUT_WIDTH_217 128
#define N_FILT_217 32
#define OUT_HEIGHT_282 130
#define OUT_WIDTH_282 130
#define N_CHAN_282 32
#define OUT_HEIGHT_283 130
#define OUT_WIDTH_283 130
#define N_CHAN_283 32
#define OUT_CONCAT_0_221 128
#define OUT_CONCAT_1_221 128
#define OUT_CONCAT_2_221 64
#define OUT_HEIGHT_284 130
#define OUT_WIDTH_284 130
#define N_CHAN_284 64
#define OUT_HEIGHT_222 128
#define OUT_WIDTH_222 128
#define N_FILT_222 32
#define OUT_HEIGHT_224 128
#define OUT_WIDTH_224 128
#define N_FILT_224 32
#define OUT_HEIGHT_226 128
#define OUT_WIDTH_226 128
#define N_FILT_226 32
#define OUT_HEIGHT_285 128
#define OUT_WIDTH_285 128
#define N_FILT_285 2
#define OUT_HEIGHT_286 128
#define OUT_WIDTH_286 128
#define N_FILT_286 1
#define OUT_HEIGHT_287 128
#define OUT_WIDTH_287 128
#define N_FILT_287 4
#define OUT_CONCAT_0_240 128
#define OUT_CONCAT_1_240 128
#define OUT_CONCAT_2_240 3
#define OUT_CONCAT_0_241 128
#define OUT_CONCAT_1_241 128
#define OUT_CONCAT_2_241 7

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<32,16> model_default_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> input_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer256_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer243_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer242_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer2_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer4_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer8_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer288_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer9_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer289_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer10_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer244_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer11_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer245_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer12_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer14_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer18_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer246_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer19_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer247_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer20_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer22_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer26_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer290_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer27_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer291_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer28_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer248_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer29_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer249_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer30_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer32_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer36_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer250_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer37_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer251_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer38_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer40_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer44_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer292_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer45_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer293_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer46_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer252_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer47_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer253_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer48_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer50_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer54_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer254_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer55_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer255_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer56_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer58_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer62_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer294_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer63_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer295_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer64_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer257_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer65_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer258_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer66_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer68_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer70_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer75_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer296_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer76_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer259_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer77_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer260_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer78_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer261_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer79_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer81_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer83_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer88_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer89_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer90_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer297_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer91_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer92_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer93_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer262_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer94_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer96_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer98_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer100_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer263_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer101_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer264_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer103_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer105_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer107_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer298_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer110_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer265_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer111_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer266_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer112_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer267_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer113_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer115_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer117_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer122_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer299_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer123_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer124_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer125_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer268_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer126_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer127_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer128_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer130_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer132_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer135_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer269_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer136_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer270_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer137_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer138_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer140_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer142_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer145_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer147_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer271_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer148_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer272_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer149_t;
typedef nnet::array<ap_fixed<32,16>, 512*1> layer273_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer150_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer152_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer154_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer159_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer160_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer161_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer162_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer163_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer164_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer165_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer167_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer169_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer171_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer274_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer172_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer275_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer173_t;
typedef nnet::array<ap_fixed<32,16>, 256*1> layer276_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer174_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer176_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer178_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer183_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer277_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer184_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer278_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer185_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer186_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer188_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer190_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer193_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer195_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer196_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer197_t;
typedef nnet::array<ap_fixed<32,16>, 128*1> layer279_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer198_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer199_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer200_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer202_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer204_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer207_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer280_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer208_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer281_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer209_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer210_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer212_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer214_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer217_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer219_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer282_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer220_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer283_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer221_t;
typedef nnet::array<ap_fixed<32,16>, 64*1> layer284_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer222_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer224_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer226_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer231_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer232_t;
typedef nnet::array<ap_fixed<32,16>, 32*1> layer233_t;
typedef nnet::array<ap_fixed<32,16>, 2*1> layer285_t;
typedef nnet::array<ap_fixed<32,16>, 1*1> layer286_t;
typedef nnet::array<ap_fixed<32,16>, 4*1> layer287_t;
typedef nnet::array<ap_fixed<32,16>, 3*1> layer240_t;
typedef nnet::array<ap_fixed<32,16>, 7*1> result_t;

#endif
