#ifndef TIRAMISU_WRAPPER_TUTORIAL_12_H
#define TIRAMISU_WRAPPER_TUTORIAL_12_H

#include <tiramisu/utils.h>

#define NUM_ROWS 1280
#define NUM_COLS 768
#define NUM_NODES 4

#ifdef __cplusplus
extern "C" {
#endif

int blurxy(halide_buffer_t *_p0_buffer, halide_buffer_t *_p1_buffer);
int blurxy_argv(void **args);

extern const struct halide_filter_metadata_t halide_pipeline_aot_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif

#endif //TIRAMISU_WRAPPER_TUTORIAL_12_H
