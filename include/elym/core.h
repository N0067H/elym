#ifndef ELYM_CORE_H
#define ELYM_CORE_H

#include <stddef.h>
#include <stdint.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef uint8_t b8;

typedef size_t usize;
typedef ptrdiff_t isize;

typedef float f32;
typedef double f64;

#define I8_MIN INT8_MIN
#define I8_MAX INT8_MAX
#define I16_MIN INT16_MIN
#define I16_MAX INT16_MAX
#define I32_MIN INT32_MIN
#define I32_MAX INT32_MAX
#define I64_MIN INT64_MIN
#define I64_MAX INT64_MAX

#define U8_MIN 0
#define U8_MAX UINT8_MAX
#define U16_MIN 0
#define U16_MAX UINT16_MAX
#define U32_MIN 0
#define U32_MAX UINT32_MAX
#define U64_MIN 0
#define U64_MAX UINT64_MAX

#define B8_MIN 0
#define B8_MAX UINT8_MAX

#define USIZE_MIN 0
#define USIZE_MAX SIZE_MAX
#define ISIZE_MIN PTRDIFF_MIN
#define ISIZE_MAX PTRDIFF_MAX

#define F32_MIN (-FLT_MAX)
#define F32_MAX FLT_MAX
#define F64_MIN (-DBL_MAX)
#define F64_MAX DBL_MAX

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

static inline usize elym_align_up(usize value, usize alignment) {
    return (value + alignment - 1) & ~(alignment - 1);
}

static inline usize elym_align_down(usize value, usize alignment) {
    return value & ~(alignment - 1);
}

static inline usize elym_align_offset(usize value, usize alignment) {
    return (-value) & (alignment - 1);
}

#endif // ELYM_CORE_H
