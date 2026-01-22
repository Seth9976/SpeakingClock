// 函数: sub_4550dc
// 地址: 0x4550dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ebx = arg2.b
int32_t esi = arg1

if (esi == 0)
    return 

if (data_4b1c8c == 0)
    arg2.b = 1
    int32_t ecx
    data_4b1c8c = sub_403c38(ecx, arg2)

arg1 = sub_41a150(data_4b1c8c, esi)

if (ebx != 0)
    if (arg1 == 0xffffffff)
        sub_419f9c(data_4b1c8c, esi)
else if (arg1 != 0xffffffff)
    sub_419fe8(data_4b1c8c, arg1)
