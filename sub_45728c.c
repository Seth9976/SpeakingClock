// 函数: sub_45728c
// 地址: 0x45728c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = *(arg1 + 0x74)
int32_t nNumber = ebx[5]

if (nNumber u> 0)
    sub_456144(ebx, 3, MulDiv(nNumber, arg2, arg3))

int32_t nNumber_1 = ebx[3]

if (nNumber_1 u> 0)
    sub_456144(ebx, 1, MulDiv(nNumber_1, arg2, arg3))

int32_t nNumber_2 = ebx[4]

if (nNumber_2 u> 0)
    sub_456144(ebx, 2, MulDiv(nNumber_2, arg2, arg3))

int32_t nNumber_3 = ebx[2]

if (nNumber_3 u> 0)
    sub_456144(ebx, 0, MulDiv(nNumber_3, arg2, arg3))
