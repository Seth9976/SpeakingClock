// 函数: sub_414edc
// 地址: 0x414edc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

long double x87_r7 = float.t(arg2)
long double x87_r6 = float.t(arg1)
x87_r6 - x87_r7
int16_t result = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe

if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
    return 0

long double x87_r7_1 = float.t(arg2)
long double x87_r6_1 = float.t(arg1)
x87_r6_1 - x87_r7_1

if (not(test_bit(
        ((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b, 
        0)))
    result.b = 1
else
    result.b = 2

return result
