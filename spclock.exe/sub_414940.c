// 函数: sub_414940
// 地址: 0x414940
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t* edi = arg1

if ((*edi & 0xbfe8) != 0)
    sub_410734(edi, arg2, arg3)

if (data_4aaa18 == 0)
    *edi = 3
else
    *edi = *((sx.d(arg3.b) << 1) + &data_4aaa44)

*(edi + 8) = arg2
