// 函数: sub_491020
// 地址: 0x491020
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg1

if (arg2 == *(esi + 0xc1))
    return 

if (arg2 != 0)
    arg1 = sub_490edc()

if (arg2 != 0 && arg1.b == 0)
    return 

*(esi + 0xc1) = arg2

if ((*(esi + 0x1c) & 0x10) != 0 || data_4b1d8c == 0)
    return 

sub_4542bc(0x31a, 0, 0)

if (*(esi + 0xc1) != 0)
    (*data_4ac3e4)(3)
else if (*(esi + 0xc0) == 0)
    (*data_4ac3e4)(0)

sub_490f78(esi)
