// 函数: sub_414eb0
// 地址: 0x414eb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

long double x87_r7 = fconvert.t(arg2)
long double temp1 = fconvert.t(arg1)
x87_r7 - temp1

if (test_bit(
        ((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe):1.b, 
        0))
    return 0

long double x87_r7_1 = fconvert.t(arg2)
long double temp2_1 = fconvert.t(arg1)
x87_r7_1 - temp2_1
int16_t result = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
    | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe

if (test_bit(result:1.b, 6) || test_bit(result:1.b, 0))
    result.b = 1
else
    result.b = 2

return result
