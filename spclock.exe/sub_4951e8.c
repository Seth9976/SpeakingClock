// 函数: sub_4951e8
// 地址: 0x4951e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
int32_t edx
int16_t x87control
result, edx = sub_40337c(x87control, fconvert.t(*(arg1 + 0x1c)) * fconvert.t(1000000f))
bool cond:0 = edx != 0

if (edx == 0)
    cond:0 = result != 0x927c0

result.b = cond:0
return result
