// 函数: sub_4469d8
// 地址: 0x4469d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t pv = arg1[4]

if (pv != 0)
    CoTaskMemFree(pv)

int32_t pv_1 = arg1[6]

if (pv_1 != 0)
    CoTaskMemFree(pv_1)

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_41aaa4(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
