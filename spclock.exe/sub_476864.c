// 函数: sub_476864
// 地址: 0x476864
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
var_14.b = 0

if (*(arg1 + 0x152) != 0)
    *(arg1 + 0x154)
    (*(arg1 + 0x150))(var_14)

int32_t* edi_1 = *(arg1 + 0x44)

if (edi_1 == 0)
    arg1 = nullptr
else if (IsWindowEnabled(sub_45f888(edi_1)) == 0)
    arg1 = nullptr
else
    int32_t esi
    esi.w = 0xffa5
    
    if (sub_403e64(*(arg1 + 0x44), esi, arg2).b != 0)
        arg1.b = 1
    else
        arg1 = nullptr

var_14.b = arg1.b
return zx.d(var_14.b)
