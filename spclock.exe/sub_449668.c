// 函数: sub_449668
// 地址: 0x449668
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_5

if (data_4b1c24 != 0)
    eax_5 = data_4b1c24(arg1, arg2, arg3, arg4)

if (data_4b1c24 != 0 && eax_5 != 0)
    eax_5.b = 1
else
    eax_5 = 0

char temp1 = eax_5.b
eax_5.b = neg.b(eax_5.b)
return sbb.d(eax_5, eax_5, temp1 != 0)
