// 函数: sub_421230
// 地址: 0x421230
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int80_t x87_r0
sub_416954(*(arg3 - 4), *(arg3 - 8), x87_r0)
uint32_t result

if (*(arg3 - 9) == 0)
    long double temp0_1 = fconvert.t(0f)
    arg1 - temp0_1
    result.w = (arg1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(arg1, temp0_1) ? 1 : 0) << 0xa
        | (arg1 == temp0_1 ? 1 : 0) << 0xe | 0x1000
    result.b = test_bit(result:1.b, 6)
else
    int80_t x87_r2
    sub_416954(*(arg3 - 0x10), *(arg3 - 8), x87_r2)
    arg1 - arg2
    result.w = (arg1 < arg2 ? 1 : 0) << 8 | (is_unordered.t(arg1, arg2) ? 1 : 0) << 0xa
        | (arg1 == arg2 ? 1 : 0) << 0xe | 0x2000
    result.b = test_bit(result:1.b, 6)

return result
