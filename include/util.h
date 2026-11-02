#ifndef ELYM_UTIL_H
#define ELYM_UTIL_H

#include "type.h"

#define elym_extent(arr) (sizeof(arr) / sizeof((arr)[0]))

static inline i8 elym_clamp_i8(i8 value, i8 min, i8 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline i16 elym_clamp_i16(i16 value, i16 min, i16 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline i32 elym_clamp_i32(i32 value, i32 min, i32 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline i64 elym_clamp_i64(i64 value, i64 min, i64 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline u8 elym_clamp_u8(u8 value, u8 min, u8 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline u16 elym_clamp_u16(u16 value, u16 min, u16 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline u32 elym_clamp_u32(u32 value, u32 min, u32 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline u64 elym_clamp_u64(u64 value, u64 min, u64 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline usize elym_clamp_usize(usize value, usize min, usize max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline isize elym_clamp_isize(isize value, isize min, isize max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline f32 elym_clamp_f32(f32 value, f32 min, f32 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

static inline f64 elym_clamp_f64(f64 value, f64 min, f64 max) {
    if (value < min) {
        return min;
    }
    if (value > max) {
        return max;
    }
    return value;
}

#endif // ELYM_UTIL_H
