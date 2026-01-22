// 函数: sub_472cd4
// 地址: 0x472cd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3
BOOL ebx = arg1

if ((*(ebx + 0x358) & 8) != 0)
    *(ebx + 0x294) = 2
    return 

if ((*(*ebx + 0xf4))().b == 0)
    return 

if (*(ebx + 0x277) != 1)
    var_c.b = 1
else if ((*(ebx + 0x270) & 2) == 0)
    var_c.b = 0
else
    var_c.b = 3

int32_t esi
esi.w = 0xffad
sub_403e64(ebx, esi, &var_c)

if (var_c.b == 0)
    return 

if (ebx == *(data_4b1ce0 + 0x44))
    data_4b1ce0
    sub_476dec()
else if (var_c.b == 1)
    sub_472e74()
else if (var_c.b != 3)
    sub_472f50(ebx)
else
    sub_46fed0(ebx, 1)
