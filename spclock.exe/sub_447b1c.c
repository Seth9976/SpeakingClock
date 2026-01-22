// 函数: sub_447b1c
// 地址: 0x447b1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint8_t* esi = arg2
void* ebx = arg1
int32_t result = sub_404fb0(esi, *(ebx + 0x30))
int32_t __saved_esi

if (&__saved_esi == 0x10)
    return result

GUID var_18

if (esi != 0)
    ebx, esi = sub_408bd4(esi, &var_18)
return sub_404bdc(ebx + 0x30, esi)
