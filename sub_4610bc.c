// 函数: sub_4610bc
// 地址: 0x4610bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx_1
int32_t* esi_1
ebx_1, esi_1 = sub_45b980(arg1, arg2)
*(ebx_1 + 4) = 0x80800000
*(ebx_1 + 0x24) |= 0x800

if (data_4b1c4c != 0)
    *(ebx_1 + 8) = 0x80

if (sub_40d704(5, 1) != 0)
    *(ebx_1 + 0x24) |= 0x20000

if (data_4b1c4c != 0)
    *(ebx_1 + 8) = 0x80

return sub_45b918(esi_1, ebx_1 + 8)
