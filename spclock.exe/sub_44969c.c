// 函数: sub_44969c
// 地址: 0x44969c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_2

if (data_4b1c28 != 0)
    eax_2 = data_4b1c28(arg1)

if (data_4b1c28 != 0 && eax_2 != 0)
    eax_2.b = 1
else
    eax_2 = 0

char temp1 = eax_2.b
eax_2.b = neg.b(eax_2.b)
return sbb.d(eax_2, eax_2, temp1 != 0)
