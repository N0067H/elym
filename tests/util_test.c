#include "../include/type.h"
#include "../include/util.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

int main(void) {
    // Test for elym_extent()
    u32 arr[4] = {1, 2, 3, 4};
    assert(elym_extent(arr) == 4);

    i8 empty_check[1] = {0};
    assert(elym_extent(empty_check) == 1);

    f64 floats[8] = {0};
    assert(elym_extent(floats) == 8);

    // Test for signed integer Clamp functions
    assert(elym_clamp_i8(-20, -10, 10) == -10);
    assert(elym_clamp_i8(0, -10, 10) == 0);
    assert(elym_clamp_i8(20, -10, 10) == 10);
    assert(elym_clamp_i8(-10, -10, 10) == -10);
    assert(elym_clamp_i8(10, -10, 10) == 10);

    assert(elym_clamp_i16(-200, -100, 100) == -100);
    assert(elym_clamp_i16(0, -100, 100) == 0);
    assert(elym_clamp_i16(200, -100, 100) == 100);
    assert(elym_clamp_i16(-100, -100, 100) == -100);
    assert(elym_clamp_i16(100, -100, 100) == 100);

    assert(elym_clamp_i32(-2000, -1000, 1000) == -1000);
    assert(elym_clamp_i32(0, -1000, 1000) == 0);
    assert(elym_clamp_i32(2000, -1000, 1000) == 1000);
    assert(elym_clamp_i32(-1000, -1000, 1000) == -1000);
    assert(elym_clamp_i32(1000, -1000, 1000) == 1000);

    assert(elym_clamp_i64(-20000, -10000, 10000) == -10000);
    assert(elym_clamp_i64(0, -10000, 10000) == 0);
    assert(elym_clamp_i64(20000, -10000, 10000) == 10000);
    assert(elym_clamp_i64(-10000, -10000, 10000) == -10000);
    assert(elym_clamp_i64(10000, -10000, 10000) == 10000);

    // Test for unsigned integer Clamp functions
    assert(elym_clamp_u8(5, 10, 100) == 10);
    assert(elym_clamp_u8(50, 10, 100) == 50);
    assert(elym_clamp_u8(150, 10, 100) == 100);
    assert(elym_clamp_u8(10, 10, 100) == 10);
    assert(elym_clamp_u8(100, 10, 100) == 100);

    assert(elym_clamp_u16(5, 10, 1000) == 10);
    assert(elym_clamp_u16(500, 10, 1000) == 500);
    assert(elym_clamp_u16(2000, 10, 1000) == 1000);
    assert(elym_clamp_u16(10, 10, 1000) == 10);
    assert(elym_clamp_u16(1000, 10, 1000) == 1000);

    assert(elym_clamp_u32(5, 10, 10000) == 10);
    assert(elym_clamp_u32(5000, 10, 10000) == 5000);
    assert(elym_clamp_u32(20000, 10, 10000) == 10000);
    assert(elym_clamp_u32(10, 10, 10000) == 10);
    assert(elym_clamp_u32(10000, 10, 10000) == 10000);

    assert(elym_clamp_u64(5, 10, 100000) == 10);
    assert(elym_clamp_u64(50000, 10, 100000) == 50000);
    assert(elym_clamp_u64(200000, 10, 100000) == 100000);
    assert(elym_clamp_u64(10, 10, 100000) == 10);
    assert(elym_clamp_u64(100000, 10, 100000) == 100000);

    // Test for usize and isize Clamp functions
    assert(elym_clamp_usize(5, 10, 100) == 10);
    assert(elym_clamp_usize(50, 10, 100) == 50);
    assert(elym_clamp_usize(150, 10, 100) == 100);
    assert(elym_clamp_usize(10, 10, 100) == 10);
    assert(elym_clamp_usize(100, 10, 100) == 100);

    assert(elym_clamp_isize(-150, -100, 100) == -100);
    assert(elym_clamp_isize(0, -100, 100) == 0);
    assert(elym_clamp_isize(150, -100, 100) == 100);
    assert(elym_clamp_isize(-100, -100, 100) == -100);
    assert(elym_clamp_isize(100, -100, 100) == 100);

    // Test for floating-point Clamp functions
    assert(elym_clamp_f32(-1.5f, 0.0f, 1.0f) == 0.0f);
    assert(elym_clamp_f32(0.5f, 0.0f, 1.0f) == 0.5f);
    assert(elym_clamp_f32(1.5f, 0.0f, 1.0f) == 1.0f);
    assert(elym_clamp_f32(0.0f, 0.0f, 1.0f) == 0.0f);
    assert(elym_clamp_f32(1.0f, 0.0f, 1.0f) == 1.0f);

    assert(elym_clamp_f64(-1.5, 0.0, 1.0) == 0.0);
    assert(elym_clamp_f64(0.5, 0.0, 1.0) == 0.5);
    assert(elym_clamp_f64(1.5, 0.0, 1.0) == 1.0);
    assert(elym_clamp_f64(0.0, 0.0, 1.0) == 0.0);
    assert(elym_clamp_f64(1.0, 0.0, 1.0) == 1.0);

    // Test for equal bounds
    assert(elym_clamp_i32(50, 10, 10) == 10);
    assert(elym_clamp_u32(50, 10, 10) == 10);
    assert(elym_clamp_f32(50.0f, 10.0f, 10.0f) == 10.0f);
    assert(elym_clamp_f64(50.0, 10.0, 10.0) == 10.0);

    // Test for NaN and infinity
    assert(isnan(elym_clamp_f32(NAN, 0.0f, 1.0f)));
    assert(isnan(elym_clamp_f64(NAN, 0.0, 1.0)));

    assert(elym_clamp_f32(INFINITY, 0.0f, 1.0f) == 1.0f);
    assert(elym_clamp_f32(-INFINITY, 0.0f, 1.0f) == 0.0f);
    assert(elym_clamp_f64(INFINITY, 0.0, 1.0) == 1.0);
    assert(elym_clamp_f64(-INFINITY, 0.0, 1.0) == 0.0);

    printf("Successful\n");
    return 0;
}
