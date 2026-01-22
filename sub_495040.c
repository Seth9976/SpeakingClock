// 函数: sub_495040
// 地址: 0x495040
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

long double x87_r7 = fconvert.t(0f)
long double temp1 = fconvert.t(arg1[7])
x87_r7 - temp1
int16_t result = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe

if (test_bit(result:1.b, 6))
    return result

arg1[7] = 0
int32_t esi
esi.w = 0xfffd
return sub_403e64(arg1, esi, 0)
